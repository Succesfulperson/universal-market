//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit1.h"
#include "Project1PCH1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma link "frxClass"
#pragma link "frxExportBaseDialog"
#pragma link "frxExportPDF"
#pragma link "frxBarcode"
#pragma resource "*.dfm"
TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
__fastcall TDataModule1::TDataModule1(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------



