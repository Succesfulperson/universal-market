//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "login.h"
#include "Project1PCH1.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
#include "design.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm7::Button1Click(TObject *Sender)
{
  Form1->ShowModal();
  //if (DataModule1->ADOQuerylogin=id)
  {
  ShowMessage("Sizning parolingiz to'g'ri");
  }
  //else
//  {
//  ShowMessage("Sizning parolingiz xato")
//  }
}
//---------------------------------------------------------------------------

