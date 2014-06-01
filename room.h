//---------------------------------------------------------------------------

#ifndef roomH
#define roomH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
struct seat
{
	TShape *n;
	seat *next;
};

class room
{
	seat *First;
	int h,w;

	void __fastcall NewSeat (int tag, int l, int t);

	void __fastcall NewRow (int i);

	public:
	__fastcall room (int h);

	void __fastcall Occupy ( TShape * Sender, TMouseButton Button, TShiftState Shift, int X, int Y );

	void __fastcall Reserve (int srch);

	void __fastcall Buy(String n_fl, String n_pas, String t_type);
};

class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TScrollBox *ScrollBox1;
	TPanel *Panel1;
	TLabel *Label11;
	TComboBox *ComboBox1;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	room *r00m;
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
