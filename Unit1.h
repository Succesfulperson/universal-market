//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDataModule1 : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQueryombor;
	TDataSource *DataSourceombor;
	TADOQuery *ADOQuery2mijoz;
	TDataSource *DataSource2;
	TADOQuery *ADOQueryCategory;
	TDataSource *DataSourceCategory;
	TADOQuery *ADOQuerylogin;
	TDataSource *DataSourcelogin;
private:	// User declarations
public:		// User declarations
	__fastcall TDataModule1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
#endif
