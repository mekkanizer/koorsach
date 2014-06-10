//---------------------------------------------------------------------------

#ifndef addH
#define addH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TDateTimePicker *DateTimePicker1;
	TDateTimePicker *DateTimePicker2;
	TPanel *Panel1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TComboBox *ComboBox1;
	TEdit *Edit4;
	TEdit *Edit5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TButton *Button1;
	TPanel *Panel2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TRadioButton *RadioButton5;
	TLabel *Label9;
	TLabel *Label10;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TLabel *Label11;
	TComboBox *ComboBox4;
	void __fastcall FormHide(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall ComboBox2Select(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall RadioButton5Click(TObject *Sender);
	void __fastcall RadioButton4Click(TObject *Sender);
	void __fastcall RadioButton3Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
	String ticket_type;
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
