//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "purchase.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

String str_rand(int l) {
	int i;
	String str="";
	switch (l) {
		case 1: // plane type
			switch (rand()%5) {
				case 0: str = "700"; break; //"BOING"
				case 1: str = "500"; break; //"AIRBUS"
				case 2: str = "40"; break; //"YAK"
				case 3: str = "300"; break; //"TU"
				case 4: str = "80"; break; //"IL"
			}
		break;

		case 2: //date (date of birth)
			str = str + IntToStr(rand()%28+1) + "." + IntToStr(rand()%12+1)\
			+ "." + IntToStr(rand()%30+1960);
		break;

		case 3: //time
			str = str + IntToStr(rand()%24) + ":" + IntToStr(rand()%60);
		break;

		//name;surname;middlename;destination
		case 4:case 8:case 9:case 10:
			str += (char)(rand()%26+65);
			for (i=1; i<l; i++)
				str += (char)(rand()%26+97);
		break;

		case 5: //ser_pasp; n pasp;
			for (i=0; i<l; i++)
				str += (char)(rand()%10+48);
		break;

		case 6: // t_bilet
			switch (rand()%3) {
				case 0: str = "econom"; break;
				case 1: str = "busine"; break;
				case 2: str = "first"; break;
			}
		break;

		case 7: //sex
			rand()%2 ? str = "m" : str = "f";
		break;

		case 11: //date (of flight, may/june edition)
			str = str + IntToStr(rand()%18+10) + "." + IntToStr(rand()%2+5) + ".2014";
		break;
	}
	return str;
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "SELECT ������.�����_������, ���������.�������, ������.���_������, ������.�����_�����,\
	 ������.�����_�����  FROM ������ inner join ��������� on ������.�����_���������=���������.�����_���������";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "SELECT * FROM ���������";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "SELECT * FROM �����";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "SELECT * FROM ��������";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::add_randClick(TObject *Sender)
{
	int n_pl;
	int n_seat;
	int n_fl;
	int n_pas;
	int n_t;
	String departure_date;
	String departure_day;

	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("SELECT MAX (�����_�����) FROM ������"); // seat number
	ADOQuery1->Open();
	n_seat = ADOQuery1->Fields->Fields[0]->AsInteger;
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("SELECT MAX (�����_��������) FROM ��������"); // plane number
	ADOQuery1->Open();
	n_pl = ADOQuery1->Fields->Fields[0]->AsInteger;
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("SELECT MAX (�����_�����) FROM �����"); // flight number
	ADOQuery1->Open();
	n_fl = ADOQuery1->Fields->Fields[0]->AsInteger;
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("SELECT MAX (�����_���������) FROM ���������"); // passenger number
	ADOQuery1->Open();
	n_pas = ADOQuery1->Fields->Fields[0]->AsInteger;
	ADOQuery1->Close();
	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("SELECT MAX (�����_������) FROM ������"); // ticket number
	ADOQuery1->Open();
	n_t = ADOQuery1->Fields->Fields[0]->AsInteger;

	n_pl++;
	n_seat++;
	n_fl++;
	n_pas++;
	n_t++;

	// make planes table active
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "SELECT * FROM ��������";
	ADOQuery1->Active = true;

	n_seat = str_rand(1).ToInt();
	ADOQuery1->Append();
	ADOQuery1->Edit();
	ADOQuery1->FieldByName("���_��_����")->AsInteger = n_seat;
	switch (n_seat) {
		case 700: ADOQuery1->FieldByName("���_��������")->AsString = "BOING"; break;
		case 500: ADOQuery1->FieldByName("���_��������")->AsString = "AIRBUS"; break;
		case 40: ADOQuery1->FieldByName("���_��������")->AsString = "YAK"; break;
		case 300: ADOQuery1->FieldByName("���_��������")->AsString = "TU"; break;
		case 80: ADOQuery1->FieldByName("���_��������")->AsString = "IL"; break;
	}
	ADOQuery1->FieldByName("�����_��������")->AsInteger = n_pl;
	ADOQuery1->Post();

	// make planes table active
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "SELECT * FROM �����";
	ADOQuery1->Active = true;

	ADOQuery1->Append();
	ADOQuery1->Edit();
	departure_date = str_rand(11);
	departure_day = departure_date.SubString(0,2);
	ADOQuery1->FieldByName("����_������")->AsString = departure_date;
	departure_day = IntToStr(departure_day.ToInt()+1);
	departure_date = departure_day + departure_date.SubString(3,8);
	ADOQuery1->FieldByName("����_�������")->AsString = departure_date;
	ADOQuery1->FieldByName("�����_������")->AsString = str_rand(3);
	ADOQuery1->FieldByName("�����_�������")->AsString = str_rand(3);
	ADOQuery1->FieldByName("�����_�����������")->AsString = str_rand(10);
	ADOQuery1->FieldByName("�����_����������")->AsString = str_rand(10);
	ADOQuery1->FieldByName("�����_��������")->AsInteger = n_pl;
	ADOQuery1->FieldByName("�����_�����")->AsInteger = n_fl;
	ADOQuery1->Post();

	// make passengers table active
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "SELECT * FROM ���������";
	ADOQuery1->Active = true;

	ADOQuery1->Append();
	ADOQuery1->Edit();
	ADOQuery1->FieldByName("���")->AsString = str_rand(4);
	ADOQuery1->FieldByName("�������")->AsString = str_rand(8);
	ADOQuery1->FieldByName("��������")->AsString = str_rand(9);
	ADOQuery1->FieldByName("����_��������")->AsString = str_rand(2);
	ADOQuery1->FieldByName("���")->AsString = str_rand(7);
	ADOQuery1->FieldByName("�����_��������")->AsInteger = str_rand(5).ToInt();
	ADOQuery1->FieldByName("�����_��������")->AsInteger = str_rand(5).ToInt();
	ADOQuery1->FieldByName("�����_���������")->AsInteger = n_pas;
	ADOQuery1->Post();

	// make tickets table active
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "SELECT * FROM ������";
	ADOQuery1->Active = true;

	ADOQuery1->Append();
	ADOQuery1->Edit();
	ADOQuery1->FieldByName("���_������")->AsString = str_rand(6);
	ADOQuery1->FieldByName("�����_�����")->AsInteger = rand()%n_seat + 1;
	ADOQuery1->FieldByName("�����_���������")->AsInteger = n_pas;
	ADOQuery1->FieldByName("�����_�����")->AsInteger = n_fl;
	ADOQuery1->FieldByName("�����_������")->AsInteger = n_t;
	ADOQuery1->Post();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	this->Hide();
	Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	srand(time(NULL));
}
//---------------------------------------------------------------------------

