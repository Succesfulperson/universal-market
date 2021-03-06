//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Unit2.cpp", Form2);
USEFORM("Unit3.cpp", Form3);
USEFORM("Unit4.cpp", Form4);
USEFORM("Unit6.cpp", Form6);
USEFORM("Unit1.cpp", DataModule1); /* TDataModule: File Type */
USEFORM("C:\Users\NURILLO\Documents\Embarcadero\Studio\Projects\design.cpp", Form1);
USEFORM("login.cpp", Form7);
USEFORM("tezkorpanel.cpp", Form5);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm7), &Form7);
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TDataModule1), &DataModule1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
