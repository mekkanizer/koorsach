
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
	if (flights->Text == "�����")
		ShowMessage("�������� ����!");
	else {
	String divisor = "4";
	if (ticket_type[1] == 'e')
		divisor = "2";
	Form1->ADOQuery1->Close();
	Form1->ADOQuery1->SQL->Clear();
	Form1->ADOQuery1->SQL->Add("\
	SELECT ��������.���_��_����/" + divisor + " - \
	(\
		SELECT COUNT(������.�����_������)\
		FROM\
			������\
			INNER JOIN �����\
				ON ������.�����_����� = �����.�����_�����\
		WHERE\
			������.���_������ = '" + ticket_type + "'\
			AND\
			�����.�����_����� = '" + n_fl + "'\
	)\
	FROM\
		��������\
		INNER JOIN �����\
			ON ��������.�����_�������� = �����.�����_��������\
	WHERE\
		�����.�����_����� = '" + n_fl + "'");
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
	Form1->ADOQuery1->SQL->Text = "SELECT DISTINCT �����_���������� FROM �����\
	WHERE �����_����������� = '" + ComboBox1->Text + "'";
	Form1->ADOQuery1->Active = true;
	ComboBox2->Items->Clear();
	for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next())
		ComboBox2->Items->Add\
		(Form1->ADOQuery1->FieldByName("�����_����������")->AsString);
	ComboBox2->ItemIndex=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::search_flightClick(TObject *Sender)
{
	String tim3;
	Form1->ADOQuery1->Active = false;
	Form1->ADOQuery1->SQL->Text = "SELECT\
	CAST(����_������ AS DATE) [date],\
	CAST(�����_������ AS TIME) [time]\
	FROM �����\
	WHERE �����_����������� = '" + ComboBox1->Text + \
	"' AND �����_���������� = '" + ComboBox2->Text + "'";
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
		flights->Text = "����� �� �������"; else {
	tim3 = flights->Text.SubString(12,5);
	Form1->ADOQuery1->Close();
	Form1->ADOQuery1->SQL->Clear();
	Form1->ADOQuery1->SQL->Add("\
		SELECT �����_�����\
		FROM �����\
		WHERE\
		�����_����������� = '" + ComboBox1->Text + "' AND\
		�����_���������� = '" + ComboBox2->Text + "' AND\
		CAST(�����_������ AS TIME) = '" + tim3 + "'");
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
	Form1->ADOQuery1->SQL->Text = "SELECT * FROM �����";
	Form1->ADOQuery1->Active = true;
	Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
	if ((flights->Text == "����� �� �������")
		|| (flights->Text == "�����"))
		ShowMessage("�������� ����!");
	else {
	Form1->ADOQuery1->Close();
	Form1->ADOQuery1->SQL->Clear();
	Form1->ADOQuery1->SQL->Add("\
		SELECT DISTINCT ���, �������, ��������,\
		����_��������, ���, �����_��������, �����_��������\
		FROM ��������� INNER JOIN ������\
		ON ���������.�����_��������� = ������.�����_���������\
		WHERE �����_����� = '" + n_fl + "'");
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
	if ((flights->Text == "����� �� �������")
		|| (flights->Text == "�����"))
		ShowMessage("�������� ����!");
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
		SELECT �����_�����\
		FROM �����\
		WHERE\
		�����_����������� = '" + ComboBox1->Text + "' AND\
		�����_���������� = '" + ComboBox2->Text + "' AND\
		CAST(�����_������ AS TIME) = '" + flights->Text + "'");
	Form1->ADOQuery1->Open();
	n_fl = Form1->ADOQuery1->Fields->Fields[0]->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormShow(TObject *Sender)
{
	ticket_type = "econom";
	Form1->ADOQuery1->Active = false;
	Form1->ADOQuery1->SQL->Text = "SELECT DISTINCT �����_����������� FROM �����";
	Form1->ADOQuery1->Active = true;
	for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next())
		ComboBox1->Items->Add\
		(Form1->ADOQuery1->FieldByName("�����_�����������")->AsString);
	ComboBox1->ItemIndex=0;
}
//---------------------------------------------------------------------------

