//---------------------------------------------------------------------------

#ifndef untMainH
#define untMainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TfrmMain:public TForm
{
__published:    // IDE-managed Components
    TGroupBox*              grpMain;
    TMemo*                  mmoText;
    TGroupBox*              grpBenchmarj;
    TLabel*                 lblHash;
    TLabel*                 lblStatic1;
    TButton*                btnBenchmark;
    TLabel*                 lblStatic2;
    TLabel*                 lblSpeed;
    TLabel*                 Label1;
    void __fastcall         mmoTextChange(TObject* Sender);
    void __fastcall         btnBenchmarkClick(TObject* Sender);
private:    // User declarations
public:     // User declarations
    __fastcall              TfrmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain*frmMain;
//---------------------------------------------------------------------------
#endif
