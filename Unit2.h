//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TListBox *lstBox;
	TButton *btnPopulate;
	TButton *btnLetGo;
	TEdit *edtUser;
	TButton *btnSupplyAnswer;
	TPanel *pnlScore;
	TImage *Img;
	TLabel *lblPercentage;
	void __fastcall btnPopulateClick(TObject *Sender);
	void __fastcall btnLetGoClick(TObject *Sender);
	void __fastcall btnSupplyAnswerClick(TObject *Sender);
private:	// User declarations
	int count;
	int noAttempts;
	int randNoL,randNoR;
    float perc;
	int NoCorrect = 0;
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
