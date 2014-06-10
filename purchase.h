//---------------------------------------------------------------------------

#ifndef purchaseH
#define purchaseH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TButton *takeseat;
	TButton *search_ticket;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *caption_ticket_amount;
	TLabel *number_ticket_amount;
	TButton *search_flight;
	TPanel *Panel3;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TRadioButton *RadioButton5;
	TButton *Button1;
	TfrxReport *frxReport1;
	TfrxDBDataset *frxDBDataset1;
	TComboBox *flights;
	void __fastcall search_ticketClick(TObject *Sender);
	void __fastcall ComboBox1Select(TObject *Sender);
	void __fastcall search_flightClick(TObject *Sender);
	void __fastcall RadioButton5Click(TObject *Sender);
	void __fastcall RadioButton4Click(TObject *Sender);
	void __fastcall RadioButton3Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall takeseatClick(TObject *Sender);
	void __fastcall flightsSelect(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
	String n_fl;
	String ticket_type;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
