//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "login.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
	int access;
	Form1->ADOQuery1->Close();
	Form1->ADOQuery1->SQL->Clear();
	Form1->ADOQuery1->SQL->Add("IF\
	((\
		SELECT Пароль\
		FROM Пользователи\
		WHERE Логин = '" + Edit1->Text + "'\
	)=\
		HASHBYTES('SHA1', '" + Edit2->Text + "'\
	))\
		SELECT 1\
	ELSE\
		SELECT 0");
	Form1->ADOQuery1->Open();
	access = Form1->ADOQuery1->Fields->Fields[0]->AsInteger;
	if ((access)&&(Edit1->Text=="Злой админ"))
		access++;
	if (access) {
		Form1->ADOQuery1->Active = false;
		Form1->ADOQuery1->SQL->Text = "SELECT * FROM Рейсы";
		Form1->ADOQuery1->Active = true;
		Form1->Visible = true;
		Form5->Visible = false;
	} else ShowMessage("Неа");
	if (access == 1) {
		Form1->N1->Enabled = false;
		Form1->N6->Enabled = false;
		Form1->N7->Enabled = false;
		Form1->RadioButton1 = false;
		Form1->RadioButton2 = false;
		Form1->DBNavigator1->Enabled = false;
	}
}
//---------------------------------------------------------------------------
