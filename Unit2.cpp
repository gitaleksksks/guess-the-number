//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit3.h"
#include "Unit1.h"
#include "Unit4.h"

//int level;
extern int left;
extern int right;
extern int var;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
if(RadioButton1->Checked)
{
Form3->Show();
Form2->Visible=false;
Form3->Label1->Caption="Range from 0 to 64";
left=0;
right=64;
var=6;
Form3->Label2->Caption="You have 6 attempts left";
}

if(RadioButton2->Checked)
{
Form3->Show();
Form2->Visible=false;
Form3->Label1->Caption="Range from 0 to 256";
left=0;
right=256;
var=8;
Form3->Label2->Caption="You have 8 attempts left";
}

if(RadioButton3->Checked)
{
Form3->Show();
Form2->Visible=false;
Form3->Label1->Caption="Range from 0 to 1024";
left=0;
right=1024;
var=10;
Form3->Label2->Caption="You have 10 attempts left";
}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
Form1->Show();
Form2->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormActivate(TObject *Sender)
{
HANDLE h2;
h2 = Form2->Handle;
Form2->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->Close();
}
//---------------------------------------------------------------------------

