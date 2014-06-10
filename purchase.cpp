
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "main.h"
#include "purchase.h"
#include "room.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma resource "*.dfm"
TForm2 *Form2;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------

void __fastcall TForm2::search_ticketClick(TObject *Sender)
{
	if (flights->Text == "Рейсы")
		ShowMessage("Выберите рейс!");
	else {
	String divisor = "4";
	if (ticket_type[1] == 'e')
		divisor = "2";
	Form1->ADOQuery1->Close();
	Form1->ADOQuery1->SQL->Clear();
	Form1->ADOQuery1->SQL->Add("\
	SELECT Самолеты.Кол_во_мест/" + divisor + " - \
	(\
		SELECT COUNT(Билеты.Номер_билета)\
		FROM\
			Билеты\
			INNER JOIN Рейсы\
				ON Билеты.Номер_рейса = Рейсы.Номер_рейса\
		WHERE\
			Билеты.Тип_билета = '" + ticket_type + "'\
			AND\
			Рейсы.Номер_рейса = '" + n_fl + "'\
	)\
	FROM\
		Самолеты\
		INNER JOIN Рейсы\
			ON Самолеты.Номер_самолета = Рейсы.Номер_самолета\
	WHERE\
		Рейсы.Номер_рейса = '" + n_fl + "'");
	Form1->ADOQuery1->Open();
	number_ticket_amount->Caption =\
	Form1->ADOQuery1->Fields->Fields[0]->AsString;
	caption_ticket_amount->Visible = true;
	number_ticket_amount->Visible = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ComboBox1Select(TObject *Sender)
{
	Form1->ADOQuery1->Active = false;
	Form1->ADOQuery1->SQL->Text = "SELECT DISTINCT Пункт_назначения FROM Рейсы\
	WHERE Пункт_отправления = '" + ComboBox1->Text + "'";
	Form1->ADOQuery1->Active = true;
	ComboBox2->Items->Clear();
	for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next())
		ComboBox2->Items->Add\
		(Form1->ADOQuery1->FieldByName("Пункт_назначения")->AsString);
	ComboBox2->ItemIndex=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::search_flightClick(TObject *Sender)
{
	String tim3;
	Form1->ADOQuery1->Active = false;
	Form1->ADOQuery1->SQL->Text = "SELECT\
	CAST(Дата_вылета AS DATE) [date],\
	CAST(Время_вылета AS TIME) [time]\
	FROM Рейсы\
	WHERE Пункт_отправления = '" + ComboBox1->Text + \
	"' AND Пункт_назначения = '" + ComboBox2->Text + "'";
	Form1->ADOQuery1->Active = true;
	flights->Items->Clear();
	for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next()) {
		tim3 = Form1->ADOQuery1->FieldByName("date")->AsString + "@" +\
		Form1->ADOQuery1->FieldByName("time")->AsString;
		tim3 = tim3.SubString(0,16);
		flights->Items->Add(tim3);
	}
	flights->ItemIndex=0;

	if (flights->Text.IsEmpty())
		flights->Text = "Рейсы не найдены"; else {
	tim3 = flights->Text.SubString(12,5);
	Form1->ADOQuery1->Close();
	Form1->ADOQuery1->SQL->Clear();
	Form1->ADOQuery1->SQL->Add("\
		SELECT Номер_рейса\
		FROM Рейсы\
		WHERE\
		Пункт_отправления = '" + ComboBox1->Text + "' AND\
		Пункт_назначения = '" + ComboBox2->Text + "' AND\
		CAST(Время_вылета AS TIME) = '" + tim3 + "'");
	Form1->ADOQuery1->Open();
	n_fl = Form1->ADOQuery1->Fields->Fields[0]->AsString;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RadioButton5Click(TObject *Sender)
{
	ticket_type = "econom";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RadioButton4Click(TObject *Sender)
{
	ticket_type = "busine";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RadioButton3Click(TObject *Sender)
{
	ticket_type = "first";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form1->ADOQuery1->Active = false;
	Form1->ADOQuery1->SQL->Text = "SELECT * FROM Рейсы";
	Form1->ADOQuery1->Active = true;
	Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
	if ((flights->Text == "Рейсы не найдены")
		|| (flights->Text == "Рейсы"))
		ShowMessage("Выберите рейс!");
	else {
	Form1->ADOQuery1->Close();
	Form1->ADOQuery1->SQL->Clear();
	Form1->ADOQuery1->SQL->Add("\
		SELECT DISTINCT Имя, Фамилия, Отчество,\
		Дата_Рождения, Пол, Серия_паспорта, Номер_паспорта\
		FROM Пассажиры INNER JOIN Билеты\
		ON Пассажиры.Номер_пассажира = Билеты.Номер_пассажира\
		WHERE Номер_рейса = '" + n_fl + "'");
	Form1->ADOQuery1->Open();
	dynamic_cast <TfrxMemoView *>
	(frxReport1->FindObject("Memo16"))->Text = n_fl;
	dynamic_cast <TfrxMemoView *>
	(frxReport1->FindObject("Memo17"))->Text =
	ComboBox1->Text + " - " + ComboBox2->Text;
	dynamic_cast <TfrxMemoView *>
	(frxReport1->FindObject("Memo18"))->Text = flights->Text;
	frxReport1->ShowReport(false);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::takeseatClick(TObject *Sender)
{
	if ((flights->Text == "Рейсы не найдены")
		|| (flights->Text == "Рейсы"))
		ShowMessage("Выберите рейс!");
	else {
		Form2->Hide();
		Form3->Show();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::flightsSelect(TObject *Sender)
{
	Form1->ADOQuery1->Close();
	Form1->ADOQuery1->SQL->Clear();
	Form1->ADOQuery1->SQL->Add("\
		SELECT Номер_рейса\
		FROM Рейсы\
		WHERE\
		Пункт_отправления = '" + ComboBox1->Text + "' AND\
		Пункт_назначения = '" + ComboBox2->Text + "' AND\
		CAST(Время_вылета AS TIME) = '" + flights->Text + "'");
	Form1->ADOQuery1->Open();
	n_fl = Form1->ADOQuery1->Fields->Fields[0]->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormShow(TObject *Sender)
{
	ticket_type = "econom";
	Form1->ADOQuery1->Active = false;
	Form1->ADOQuery1->SQL->Text = "SELECT DISTINCT Пункт_отправления FROM Рейсы";
	Form1->ADOQuery1->Active = true;
	for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next())
		ComboBox1->Items->Add\
		(Form1->ADOQuery1->FieldByName("Пункт_отправления")->AsString);
	ComboBox1->ItemIndex=0;
}
//---------------------------------------------------------------------------

