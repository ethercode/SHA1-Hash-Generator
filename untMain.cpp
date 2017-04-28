//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "CHash_SHA1.h"
#include <stdio.h>
#include <time.h>

#include "untMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain*   frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner):
    TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::mmoTextChange(TObject* Sender)
{
    if (mmoText->Text.Length() == 0)
    {
        lblHash->Caption = "No data";
        btnBenchmark->Enabled = false;
        return;
    }
    btnBenchmark->Enabled = true;
    char*       Buffer;
    int         BufferSize;
    AnsiString  Text    = mmoText->Text;
    BufferSize = Text.Length();
    Buffer = new char[BufferSize];
    memcpy(Buffer, Text.c_str(), BufferSize);
    struct SHashCode160 Hash;
    CHash_SHA1          Hasher;
    Hasher.hash(Buffer, BufferSize, &Hash);
    delete Buffer;

    AnsiString  Hex;
    char        Buffer2[10];
    for (int a = 0; a < 20; a++)
    {
        int v   = int(Hash.data[a]);
        sprintf(Buffer2, "%02X", int(v));
        Hex += Buffer2;
    }
    lblHash->Caption = Hex;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnBenchmarkClick(TObject* Sender)
{
    if (mmoText->Text.Length() == 0)
    {
        lblSpeed->Caption = "Unknown";
        return;
    }
    char*       Buffer;
    int         BufferSize;
    AnsiString  Text    = mmoText->Text;
    BufferSize = Text.Length();
    Buffer = new char[BufferSize];
    memcpy(Buffer, Text.c_str(), BufferSize);
    struct SHashCode160 Hash;

    clock_t             t;
    int                 times   = 25000;
    t = clock();
    CHash_SHA1  Hasher;
    for (int a = 0; a < times; a++)
    {
        Hasher.hash(Buffer, BufferSize, &Hash);
    }
    t = clock() - t;
    double  elap    = double(t) / double(CLK_TCK);
    delete Buffer;
    double  ratio   = double(1.0) / elap;
    double  speed   = times* ratio;
    lblSpeed->Caption = "Speed: " + AnsiString(int(speed)) + " attempts per second";
}


