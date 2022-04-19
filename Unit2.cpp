// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Project1PCH1.h"
#include "Unit1.h"
#include "design.h"
#include "login.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "PraButtonStyle"
#pragma resource "*.dfm"
TForm2 *Form2;

// ---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
}
// ---------------------------------------------------------------------------

void __fastcall TForm2::PraButtonStyle27Click(TObject *Sender) {
	TDate sana = Date().CurrentDate();
	DataModule1->ADOQueryombor->Close();
	DataModule1->ADOQueryombor->SQL->Text =
		" insert into store(barcode, product_name, desc, category, list_price, min_price, volume, type, warranty_date, supplier_id, date, status) values('" +
		Edit1->Text.Trim() + "','" + Edit3->Text.Trim() + "','" +
		Edit6->Text.Trim() + "','" + ComboBox1->Text.Trim() + "','" +
		Edit2->Text.Trim() + "','" + Edit4->Text.Trim() + "','" +
		Edit5->Text.Trim() + "','" + ComboBox2->Text.Trim() + "','" +
		Edit7->Text.Trim() + "','" + ComboBox3->Text.Trim() + "','" + sana +
	  //  "','" + Edit9->Text.Trim() + "')";
	DataModule1->ADOQueryombor->ExecSQL();
	DataModule1->ADOQueryombor->SQL->Text = "select * from store";
	DataModule1->ADOQueryombor->Open();

}
// ---------------------------------------------------------------------------


void __fastcall TForm2::FormShow(TObject *Sender)
{

	DataModule1->ADOQueryCategory->Close();
	ComboBox1->Items->Clear();
	DataModule1->ADOQueryCategory->SQL->Text =
		"SELECT * FROM category WHERE `status`=1;";
	DataModule1->ADOQueryCategory->Open();
	DataModule1->ADOQueryCategory->First();
	for (int i = 0;
	i < DataModule1->ADOQueryCategory->RecordCount; i++) {
		String fish = DataModule1->ADOQueryCategory->FieldByName
			("name")->AsString;
		ComboBox1->Items->Add(fish);
		DataModule1->ADOQueryCategory->Next();
	}
}
// ---------------------------------------------------------------------------

