// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
#include "design.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "PraButtonStyle"
#pragma resource "*.dfm"
TForm6 *Form6;

// ---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm6::PraButtonStyle39Click(TObject *Sender) {
	String kategoriya =
		InputBox("Qo`shish", "Iltimos kategoriya nomini kiriting", "");
	if (kategoriya != "") {
		DataModule1->ADOQueryCategory->SQL->Clear();
		DataModule1->ADOQueryCategory->SQL->Add
			("INSERT INTO category(name, date, status) VALUES('" + kategoriya +
			"', '" + DateToStr(Now()) + "', '1');");
		DataModule1->ADOQueryCategory->ExecSQL();
	}
	DataModule1->ADOQueryCategory->SQL->Clear();
	DataModule1->ADOQueryCategory->SQL->Add
		("SELECT * FROM category WHERE `status`=1;");
	DataModule1->ADOQueryCategory->Active = true;
}

// ---------------------------------------------------------------------------
void __fastcall TForm6::PraButtonStyle2Click(TObject *Sender) {
	if (DataModule1->ADOQueryCategory->RecordCount!=-1)
	 {
		int id = DBGrid1->DataSource->DataSet->FieldByName("id")->AsInteger;
		  PraButtonStyle2->Enabled=true;


		DataModule1->ADOQueryCategory->SQL->Clear();
		DataModule1->ADOQueryCategory->SQL->Add
			("UPDATE category SET status='0' WHERE id=" + IntToStr(id) + ";");
		DataModule1->ADOQueryCategory->ExecSQL();

		DataModule1->ADOQueryCategory->SQL->Clear();
		DataModule1->ADOQueryCategory->SQL->Add
			("SELECT * FROM category WHERE `status`=1;");
		DataModule1->ADOQueryCategory->Active = true;
	 }

}
// ---------------------------------------------------------------------------

void __fastcall TForm6::PraButtonStyle1Click(TObject *Sender)
{

	if (DataModule1->ADOQueryCategory->RecordCount!=-1)
	 {
		int id = DBGrid1->DataSource->DataSet->FieldByName("id")->AsInteger;
		String name = DBGrid1->DataSource->DataSet->FieldByName("name")->AsString;
		String kategoriya =
		InputBox("O'zgartirish", "Iltimos kategoriya nomini kiriting", name);

		if (kategoriya != "") {
		DataModule1->ADOQueryCategory->SQL->Clear();
		DataModule1->ADOQueryCategory->SQL->Add
			("UPDATE category SET name='"+kategoriya+"' WHERE id=" + IntToStr(id) + ";");
		DataModule1->ADOQueryCategory->ExecSQL();
		}

		DataModule1->ADOQueryCategory->SQL->Clear();
		DataModule1->ADOQueryCategory->SQL->Add
			("SELECT * FROM category WHERE `status`=1;");
		DataModule1->ADOQueryCategory->Active = true;
	 }
}
//---------------------------------------------------------------------------

