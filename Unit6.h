//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include "PraButtonStyle.hpp"
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TPraButtonStyle *PraButtonStyle39;
	TPraButtonStyle *PraButtonStyle1;
	TPraButtonStyle *PraButtonStyle2;
	void __fastcall PraButtonStyle39Click(TObject *Sender);
	void __fastcall PraButtonStyle2Click(TObject *Sender);
	void __fastcall PraButtonStyle1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
