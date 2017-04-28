//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("SHA1_Project.res");
USEFORM("untMain.cpp", frmMain);
USEUNIT("CHash_SHA1.cpp");
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
        Application->Initialize();
        Application->CreateForm(__classid(TfrmMain), &frmMain);
        Application->Run();
    }
    catch (Exception& exception)
    {
        Application->ShowException(&exception);
    }
    return 0;
}
//---------------------------------------------------------------------------
