//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("C:\Documents and Settings\mekkanizer\��� ���������\RAD Studio\Projects\kursach\purchase.cpp", Form2);
USEFORM("C:\Documents and Settings\mekkanizer\��� ���������\RAD Studio\Projects\kursach\room.cpp", Form3);
USEFORM("C:\Documents and Settings\mekkanizer\��� ���������\RAD Studio\Projects\kursach\add.cpp", Form4);
USEFORM("C:\Documents and Settings\mekkanizer\��� ���������\RAD Studio\Projects\kursach\main.cpp", Form1);
USEFORM("C:\Documents and Settings\mekkanizer\��� ���������\RAD Studio\Projects\kursach\login.cpp", Form5);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Luna");
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
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
