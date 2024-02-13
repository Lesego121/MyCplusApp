//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	lstBox->Font->Size = 12;
	count = 1;
	noAttempts = 1;
	int tot = 0;

}
//---------------------------------------------------------------------------
void __fastcall TForm2::btnPopulateClick(TObject *Sender)
{
	lstBox->Clear();
	lstBox->Items->Add("Exercises examples");
	lstBox->Items->Add("============");

	Randomize();
	int randNoLeft,randNoRight;
	char opChar;
	int charNo;

	for(int i = 0; i < 5;i++){
	randNoLeft = Random(89) + 10;
	randNoRight = Random(89) + 10;
	charNo = Random(2) + 1;

		if(charNo == 1){
			opChar = '+';
		}
		else{
		opChar = '-';
		}
	lstBox->Items->Add(IntToStr(randNoLeft) + "\t" + opChar + "\t" + IntToStr(randNoRight) + "\t=");
	}

}
//---------------------------------------------------------------------------



void __fastcall TForm2::btnLetGoClick(TObject *Sender)
{
	lstBox->Clear();
	edtUser->Clear();
	btnSupplyAnswer->Enabled = true;
	lstBox->Items->Add("Exercise Number " + IntToStr(count));
	lstBox->Items->Add("============");

	Randomize();

	char opSign;
	int charNo;

	randNoR = Random(89) + 10;
	randNoL = Random(89) + 10;
	charNo = Random(2) + 1;
		if(charNo == 1){
			opSign = '+';
		}
		else{
			opSign = '-';
		}
	char equalSign = '=';

   lstBox->Items->Add(IntToStr(randNoL) +"\t" + opSign + "\t" + IntToStr(randNoR) + "\t=");

   count++;
}
//---------------------------------------------------------------------------




void __fastcall TForm2::btnSupplyAnswerClick(TObject *Sender)
{
	btnSupplyAnswer->Enabled = true;
	Img->Stretch = true ;


	if ((randNoL + randNoR) == edtUser->Text || (randNoL - randNoR) == edtUser->Text ){
		Img->Picture->Bitmap->LoadFromFile("Correct.bmp");
		NoCorrect++;
	}
	else{
		Img->Picture->Bitmap->LoadFromFile("wrong.bmp");
	}
	pnlScore->Caption = IntToStr(NoCorrect) + "/" + IntToStr(noAttempts);

	btnSupplyAnswer->Enabled = false;
	perc = (StrToInt(NoCorrect) / StrToInt(noAttempts))* 100;

	if(noAttempts == 5){
		btnLetGo->Enabled = false;
		btnSupplyAnswer->Enabled = false;
		lblPercentage->Caption = FloatToStr(perc);
	}

	noAttempts++;

}
//---------------------------------------------------------------------------


