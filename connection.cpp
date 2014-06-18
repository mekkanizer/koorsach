//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "connection.h"
#include "main.h"
#include "login.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	if ((Edit1->Text.IsEmpty())||(Edit2->Text.IsEmpty())||(Edit3->Text.IsEmpty()))
		ShowMessage("Íåà");
	else {
		Form1->ADOConnection1->Connected = false;
		Form1->ADOConnection1->ConnectionString =
		"Provider=SQLOLEDB.1;\
		Integrated Security=SSPI;\
		Persist Security Info=False;\
		Initial Catalog="
		+ Edit1->Text +
		";Data Source="
		+ Edit2->Text +
		";Use Procedure for Prepare=1\
		Auto Translate=True;\
		Packet Size=4096;\
		Workstation ID="
		+ Edit3->Text +
		";Use Encryption for Data=False;\
		Tag with column collation when possible=False";
		Form1->ADOConnection1->Connected = true;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form5->Show();
}
//---------------------------------------------------------------------------
