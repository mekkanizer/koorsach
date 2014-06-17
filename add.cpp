//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "add.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormHide(TObject *Sender)
{
	Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormShow(TObject *Sender)
{
	Edit1->Visible = false;
	Edit2->Visible = false;
	Edit3->Visible = false;
	DateTimePicker1->Visible = false;
	DateTimePicker2->Visible = false;
	Panel1->Visible = false;
	Label1->Visible = false;
	Label2->Visible = false;
	Label3->Visible = false;
	Label4->Visible = false;
	Label5->Visible = false;
	ComboBox1->Visible = false;
	Edit4->Visible = false;
	Edit5->Visible = false;
	Label6->Visible = false;
	Label7->Visible = false;
	Label8->Visible = false;
	Panel2->Visible = false;
	Label9->Visible = false;
	Label10->Visible = false;
	Label11->Visible = false;
	ComboBox2->Visible = false;
	ComboBox3->Visible = false;
	CheckBox1->Visible = false;
	CheckBox2->Visible = false;
	if (Form1->action) {
		ComboBox4->Visible = true;
		Label12->Visible = true;
	}
	switch (Form1->action) {
		case 0: Button1->Caption = "Добавить"; break;
		case 1: Button1->Caption = "Изменить"; break;
		case 2: Button1->Caption = "Удалить"; break;
	}

	switch (Form1->object) {
		case 1:
			Label1->Caption = "Тип самолета";
			Label2->Caption = "Количество мест";

			Label1->Visible = true;
			Label2->Visible = true;

			Edit1->Visible = true;
			Edit2->Visible = true;
			
			if (Form1->action) {
				Label12->Caption = "Номер самолета";
				Label12->Visible = true;
				Form1->ADOQuery1->Active = false;
				Form1->ADOQuery1->SQL->Text = "SELECT Номер_самолета FROM Самолеты";
				Form1->ADOQuery1->Active = true;

				ComboBox4->Items->Clear();
				for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next())
					ComboBox4->Items->Add\
					(Form1->ADOQuery1->FieldByName("Номер_самолета")->AsString);
				ComboBox4->ItemIndex=0;
			}
		break;
		case 2:
			Label1->Caption = "Пункт отправления";
			Label2->Caption = "Пункт назначения";
			Label3->Caption = "Дата вылета";
			Label4->Caption = "Дата прилета";
			Label6->Caption = "Время вылета";
			Label7->Caption = "Время прилета";
			Label8->Caption = "Номер самолета";

			Label1->Visible = true;
			Label2->Visible = true;
			Label3->Visible = true;
			Label4->Visible = true;
			Label6->Visible = true;
			Label7->Visible = true;
			Label8->Visible = true;

			Edit1->Visible = true;
			Edit2->Visible = true;
			Edit4->Visible = true;
			Edit5->Visible = true;

			DateTimePicker1->Visible = true;
			DateTimePicker2->Visible = true;

			CheckBox1->Visible = true;
			CheckBox2->Visible = true;

			Form1->ADOQuery1->Active = false;
			Form1->ADOQuery1->SQL->Text =
			"SELECT Номер_самолета FROM Самолеты";
			Form1->ADOQuery1->Active = true;
			ComboBox1->Items->Clear();
			for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next())
				ComboBox1->Items->Add\
				(Form1->ADOQuery1->FieldByName("Номер_самолета")->AsString);
			ComboBox1->ItemIndex=0;
			ComboBox1->Visible = true;

			if (Form1->action) {
				Label12->Caption = "Номер рейса";
				Label12->Visible = true;
				Form1->ADOQuery1->Active = false;
				Form1->ADOQuery1->SQL->Text = "SELECT Номер_рейса FROM Рейсы";
				Form1->ADOQuery1->Active = true;

				ComboBox4->Items->Clear();
				for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next())
					ComboBox4->Items->Add\
					(Form1->ADOQuery1->FieldByName("Номер_рейса")->AsString);
				ComboBox4->ItemIndex=0;
			}
		break;
		case 3:
			Label1->Caption = "Имя";
			Label2->Caption = "Фамилия";
			Label3->Caption = "Отчество";
			Label4->Caption = "Дата рождения";
			Label6->Caption = "Серия паспорта";
			Label7->Caption = "Номер паспорта";

			Label1->Visible = true;
			Label2->Visible = true;
			Label3->Visible = true;
			Label4->Visible = true;
			Label5->Visible = true;
			Label6->Visible = true;
			Label7->Visible = true;

			Edit1->Visible = true;
			Edit2->Visible = true;
			Edit3->Visible = true;
			Edit4->Visible = true;
			Edit5->Visible = true;

			Panel1->Visible = true;

			DateTimePicker2->Visible = true;

			CheckBox2->Visible = true;

			if (Form1->action) {
				Label12->Caption = "Номер пассажира";
				Label12->Visible = true;
				Form1->ADOQuery1->Active = false;
				Form1->ADOQuery1->SQL->Text = "SELECT Номер_пассажира FROM Пассажиры";
				Form1->ADOQuery1->Active = true;

				ComboBox4->Items->Clear();
				for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next())
					ComboBox4->Items->Add\
					(Form1->ADOQuery1->FieldByName("Номер_пассажира")->AsString);
				ComboBox4->ItemIndex=0;
			}
		break;
		case 4:
			ticket_type = "econom";

			Label11->Caption = "Номер места";
			Label8->Caption = "Номер пассажира";
			Label9->Caption = "Номер рейса";

			Label11->Visible = true;
			Label8->Visible = true;
			Label9->Visible = true;
			Label10->Visible = true;

			ComboBox1->Visible = true;
			ComboBox2->Visible = true;
			ComboBox3->Visible = true;

			Panel2->Visible = true;

			Form1->ADOQuery1->Active = false;
			Form1->ADOQuery1->SQL->Text = "SELECT Номер_пассажира\
			FROM Пассажиры";
			Form1->ADOQuery1->Active = true;
			ComboBox1->Items->Clear();
			for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next())
				ComboBox1->Items->Add\
				(Form1->ADOQuery1->FieldByName("Номер_пассажира")->AsString);
			ComboBox1->ItemIndex=0;

			Form1->ADOQuery1->Active = false;
			Form1->ADOQuery1->SQL->Text = "SELECT Номер_рейса FROM Рейсы";
			Form1->ADOQuery1->Active = true;
			ComboBox2->Items->Clear();
			for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next())
				ComboBox2->Items->Add\
				(Form1->ADOQuery1->FieldByName("Номер_рейса")->AsString);
			ComboBox2->ItemIndex=0;

			if (Form1->action) {
				Label12->Caption = "Номер билета";
				Label12->Visible = true;
				Form1->ADOQuery1->Active = false;
				Form1->ADOQuery1->SQL->Text = "SELECT Номер_билета FROM Билеты";
				Form1->ADOQuery1->Active = true;

				ComboBox4->Items->Clear();
				for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next())
					ComboBox4->Items->Add\
					(Form1->ADOQuery1->FieldByName("Номер_билета")->AsString);
				ComboBox4->ItemIndex = 0;
			}
		break;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::ComboBox2Select(TObject *Sender)
{
	int i, n;
	Form1->ADOQuery1->Close();
	Form1->ADOQuery1->SQL->Clear();
	Form1->ADOQuery1->SQL->Add("\
		SELECT Кол_во_мест\
		FROM Самолеты\
		INNER JOIN Рейсы ON\
		Самолеты.Номер_самолета = Рейсы.Номер_самолета\
		WHERE Номер_рейса = '" + ComboBox2->Text + "'");
	Form1->ADOQuery1->Open();
	n = Form1->ADOQuery1->Fields->Fields[0]->AsInteger;

	Form1->ADOQuery1->Active = false;
	Form1->ADOQuery1->SQL->Text = "SELECT Номер_места FROM Билеты\
	WHERE Номер_рейса = '" + ComboBox2->Text + "'";
	Form1->ADOQuery1->Active = true;
	ComboBox3->Items->Clear();
	if (Form1->action)
		for (; !Form1->ADOQuery1->Eof; Form1->ADOQuery1->Next())
			ComboBox3->Items->Add\
			(Form1->ADOQuery1->FieldByName("Номер_места")->AsString);
		else
		for (i = 1; i <= n; i++)
			if (Form1->ADOQuery1->FieldByName("Номер_места")->AsInteger != i) {
				ComboBox3->Items->Add(IntToStr(i));
				if (!Form1->ADOQuery1->Eof)
					Form1->ADOQuery1->Next();
			}
	ComboBox3->ItemIndex = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
	int n_pas, n_pl, n_fl, n_t, n_s = 0;
	String sex;
	switch (Form1->action) {
	case 0:
	switch (Form1->object) {
		case 1:
			Form1->ADOQuery1->Close();
			Form1->ADOQuery1->SQL->Clear();
			Form1->ADOQuery1->SQL->Add("SELECT MAX (Номер_самолета) FROM Самолеты");
			Form1->ADOQuery1->Open();

			if ((Edit1->Text.IsEmpty()) || Edit1->Text.Pos("'")
			|| !(Form1->is_numeric(Edit2->Text)))
				ShowMessage("Неа");
			else {
				n_pl = Form1->ADOQuery1->Fields->Fields[0]->AsInteger + 1;
				Form1->ADOQuery1->Close();
				Form1->ADOQuery1->SQL->Clear();
				Form1->ADOQuery1->SQL->Add(\
				"INSERT INTO Билеты\
				(Номер_самолета, Тип_самолета, Кол_во_мест)\
				VALUES ('" + IntToStr(n_pl) + "','"\
				+ Edit1->Text + "','" + Edit2->Text + "')");
				Form1->ADOQuery1->ExecSQL();
				ShowMessage("Ага");
			}
		break;
		case 2:
			Form1->ADOQuery1->Close();
			Form1->ADOQuery1->SQL->Clear();
			Form1->ADOQuery1->SQL->Add("SELECT MAX (Номер_рейса) FROM Рейсы");
			Form1->ADOQuery1->Open();

			if ((Edit1->Text.IsEmpty()) || (Edit2->Text.IsEmpty())
			|| Edit1->Text.Pos("'") || Edit2->Text.Pos("'")
			|| !(Form1->is_time(Edit4->Text)) || !(Form1->is_time(Edit5->Text)))
				ShowMessage("Неа");
			else {
				n_fl = Form1->ADOQuery1->Fields->Fields[0]->AsInteger + 1;
				Form1->ADOQuery1->Close();
				Form1->ADOQuery1->SQL->Clear();
				Form1->ADOQuery1->SQL->Add(\
				"INSERT INTO Рейсы (\
				Номер_рейса, Номер_самолета,\
				Дата_вылета, Дата_прилета,\
				Пункт_отправления, Пункт_назначения,\
				Время_вылета, Время_прилета)\
				VALUES ('" + IntToStr(n_fl)\
				+ "','" + ComboBox1->Text\
				+ "','" + DateTimePicker1->Date.DateString()\
				+ "','" + DateTimePicker2->Date.DateString()\
				+ "','" + Edit1->Text + "','" + Edit2->Text\
				+ "','"	+ Edit4->Text + "','" + Edit5->Text + "')");
				Form1->ADOQuery1->ExecSQL();         	
				ShowMessage("Ага");
			}
		break;
		case 3:
			Form1->ADOQuery1->Close();
			Form1->ADOQuery1->SQL->Clear();
			Form1->ADOQuery1->SQL->Add("SELECT MAX (Номер_пассажира) FROM Пассажиры");
			Form1->ADOQuery1->Open();

			if (Edit1->Text.IsEmpty() || Edit2->Text.IsEmpty()
			|| Edit3->Text.IsEmpty() || Edit1->Text.Pos("'")
			|| Edit2->Text.Pos("'") || Edit3->Text.Pos("'")
			|| !(Form1->is_numeric(Edit4->Text)) || !(Form1->is_numeric(Edit5->Text)))
				ShowMessage("Неа");
			else {
				n_pas = Form1->ADOQuery1->Fields->Fields[0]->AsInteger + 1;
				if (RadioButton1->Checked) sex = "m";
				else sex = "f";
				Form1->ADOQuery1->Close();
				Form1->ADOQuery1->SQL->Clear();
				Form1->ADOQuery1->SQL->Add(\
				"INSERT INTO Пассажиры (\
				Номер_пассажира, Имя,\
				Фамилия, Отчество,\
				Дата_Рождения, Пол,\
				Серия_паспорта, Номер_паспорта)\
				VALUES ('" + IntToStr(n_pas) + "','" + Edit1->Text\
				+ "','" + Edit2->Text + "','" + Edit3->Text\
				+ "','" + DateTimePicker1->Date.DateString()\
				+ "','"	+ sex + "','" + Edit4->Text + "','" + Edit5->Text\
				+ "')");
				Form1->ADOQuery1->ExecSQL();         	
				ShowMessage("Ага");
			}
			break;
		case 4:
			Form1->ADOQuery1->Close();
			Form1->ADOQuery1->SQL->Clear();
			Form1->ADOQuery1->SQL->Add("SELECT MAX (Номер_билета) FROM Билеты");
			Form1->ADOQuery1->Open();

			if ((ComboBox1->Text.IsEmpty())||
			(ComboBox2->Text.IsEmpty())||(ComboBox3->Text.IsEmpty()))
				ShowMessage("Неа");
			else {
				n_t = Form1->ADOQuery1->Fields->Fields[0]->AsInteger + 1;
				n_pas = ComboBox1->Text.ToInt();
				n_fl = ComboBox2->Text.ToInt();
				n_s = ComboBox3->Text.ToInt();

				Form1->ADOQuery1->Close();
				Form1->ADOQuery1->SQL->Clear();
				Form1->ADOQuery1->SQL->Add(\
				"INSERT INTO Билеты\
				(Номер_билета, Тип_билета, Номер_места,\
				Номер_пассажира, Номер_рейса)\
				VALUES (" + IntToStr(n_t) + ",'"\
				+ ticket_type + "'," + IntToStr(n_s)\
				+ "," + n_pas + "," + n_fl + ")");
				Form1->ADOQuery1->ExecSQL();
				ShowMessage("Ага");
				ComboBox3->Items->Clear();
			}
		break;
	}
	break;
	case 1:
	Form1->ADOQuery1->Edit();
	switch (Form1->object) {
		case 1:
			if (!(Edit1->Text.IsEmpty()) || Edit1->Text.Pos("'"))
				Form1->ADOQuery1->FieldByName("Тип_самолета")->AsString = Edit1->Text;
			if (Form1->is_numeric(Edit2->Text))
				Form1->ADOQuery1->FieldByName("Кол_во_мест")->AsString = Edit2->Text;
		break;
		case 2:
			if (!Edit1->Text.IsEmpty() || Edit1->Text.Pos("'"))
				Form1->ADOQuery1->FieldByName("Пункт_отправления")->AsString = Edit1->Text;
			if (!Edit2->Text.IsEmpty() || Edit2->Text.Pos("'"))
				Form1->ADOQuery1->FieldByName("Пункт_назначения")->AsString = Edit2->Text;
			if (!Edit4->Text.IsEmpty() || Form1->is_time(Edit4->Text))
				Form1->ADOQuery1->FieldByName("Время_вылета")->AsString = Edit4->Text;
			if (!Edit5->Text.IsEmpty() || Form1->is_time(Edit5->Text))
				Form1->ADOQuery1->FieldByName("Время_прилета")->AsString = Edit5->Text;
			if (DateTimePicker1->Enabled)
				Form1->ADOQuery1->FieldByName("Дата_вылета")->AsString =
				DateTimePicker1->Date.DateString();
			if (DateTimePicker2->Enabled)
				Form1->ADOQuery1->FieldByName("Дата_прилета")->AsString =
				DateTimePicker2->Date.DateString();
		break;
		case 3:
			if (!Edit1->Text.IsEmpty() || Edit1->Text.Pos("'"))
				Form1->ADOQuery1->FieldByName("Имя")->AsString = Edit1->Text;
			if (!Edit2->Text.IsEmpty() || Edit2->Text.Pos("'"))
				Form1->ADOQuery1->FieldByName("Фамилия")->AsString = Edit2->Text;
			if (!Edit3->Text.IsEmpty() || Edit3->Text.Pos("'"))
				Form1->ADOQuery1->FieldByName("Отчество")->AsString = Edit3->Text;
			if (RadioButton1->Checked)
				Form1->ADOQuery1->FieldByName("Пол")->AsString = "m";
				else Form1->ADOQuery1->FieldByName("Пол")->AsString = "f";
			if (DateTimePicker2->Enabled)
				Form1->ADOQuery1->FieldByName("Дата_Рождения")->AsString =
				DateTimePicker2->Date.DateString();
			if (Form1->is_numeric(Edit4->Text))
				Form1->ADOQuery1->FieldByName("Серия_паспорта")->AsInteger = Edit4->Text.ToInt();
			if (Form1->is_numeric(Edit5->Text))
				Form1->ADOQuery1->FieldByName("Номер_паспорта")->AsInteger = Edit5->Text.ToInt();
		case 4:
				Form1->ADOQuery1->FieldByName("Номер_пассажира")->AsInteger = ComboBox1->Text.ToInt();
				Form1->ADOQuery1->FieldByName("Номер_рейса")->AsInteger = ComboBox2->Text.ToInt();
			if (!(ComboBox3->Text.IsEmpty()))
				Form1->ADOQuery1->FieldByName("Номер_места")->AsInteger = ComboBox3->Text.ToInt();
		break;
	}
	Form1->ADOQuery1->Post();
	break;
	case 2:
	Form1->ADOQuery1->Delete();
	break;
	}
}                               
//---------------------------------------------------------------------------

void __fastcall TForm4::RadioButton5Click(TObject *Sender)
{
	ticket_type = "econom";
}
//---------------------------------------------------------------------------

void __fastcall TForm4::RadioButton4Click(TObject *Sender)
{
	ticket_type = "busine";
}
//---------------------------------------------------------------------------

void __fastcall TForm4::RadioButton3Click(TObject *Sender)
{
	ticket_type = "first";
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form1->ADOQuery1->Active = false;
	Form1->ADOQuery1->SQL->Text = "SELECT * FROM Рейсы";
	Form1->ADOQuery1->Active = true;
	Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ComboBox4Select(TObject *Sender)
{
	switch (Form1->object) {
		case 1:
			Form1->ADOQuery1->Active = false;
			Form1->ADOQuery1->SQL->Text = "SELECT * FROM Самолеты\
			WHERE Номер_самолета = " + ComboBox4->Text;
			Form1->ADOQuery1->Active = true;
		break;
		case 2:
			Form1->ADOQuery1->Active = false;
			Form1->ADOQuery1->SQL->Text = "SELECT * FROM Рейсы\
			WHERE Номер_рейса = " + ComboBox4->Text;
			Form1->ADOQuery1->Active = true;
		break;
		case 3:
			Form1->ADOQuery1->Active = false;
			Form1->ADOQuery1->SQL->Text = "SELECT * FROM Пассажиры\
			WHERE Номер_пассажира = " + ComboBox4->Text;
			Form1->ADOQuery1->Active = true;
		break;
		case 4:
			Form1->ADOQuery1->Active = false;
			Form1->ADOQuery1->SQL->Text = "SELECT * FROM Билеты\
			WHERE Номер_билета = " + ComboBox4->Text;
			Form1->ADOQuery1->Active = true;
		break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::CheckBox1Click(TObject *Sender)
{
	if (CheckBox1->State == cbChecked)
		DateTimePicker1->Enabled = true;
	else DateTimePicker1->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::CheckBox2Click(TObject *Sender)
{
	if (CheckBox2->State == cbChecked)
		DateTimePicker2->Enabled = true;
	else DateTimePicker2->Enabled = false;
}
//---------------------------------------------------------------------------


