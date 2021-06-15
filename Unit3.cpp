//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Unit4.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

int left;
int right;
int num;
int var;
int st=0;
int man=0;


int Search (int a, int b, int x)
{
	int s=0;
	int m;
	while (a <= b)
	{
	 m = (a + b) / 2;
	 s++;
	 if (m == x)
	 return s;
	 else
	 if (m < x)
	 a = m + 1;
	 else
	 b = m - 1;
	}
}



void Check (int k)
{

if (man!=num)
{
 if (var==st)
 {
  Form3->Label4->Caption="Alas, you have exceeded the optimal number of attempts\nMaybe you should get a better more familiar with the binary search algorithm\nTry again\nTrue number "+IntToStr(num);
  Form3->Button1->Enabled = false;
  Form3->Button3->Enabled = false;
  Form3->Button2->Visible = true;
  num=0, var=0, st=0, man=0;
 }
 else
 {
 if (man<num)
 {
  if (st%2==0)
  {
   Form3->Label4->Caption="Your number is less than the true number";
  }
  else
  Form3->Label4->Caption="Your number is less than the true number";
 }
 else
 if (man>num)
 {
  if (st%2==0)
  {
   Form3->Label4->Caption="Your number is greater than the true number";
  }
  else
  Form3->Label4->Caption="Your number is greater than the true number";
 }
 }
}

else
{
if((man==num)&&(st==var))
{
Form3->Label4->Caption="Congratulations\nYou guessed the number in "+IntToStr(st)+" attempts";
Form3->Button1->Enabled = false;
Form3->Button3->Enabled = false;
Form3->Button2->Visible = true;
num=0, var=0, st=0, man=0;
}
else
if ((man==num)&&(st<var))
{
Form3->Label4->Caption="Congratulations\nYou guessed the number in "+IntToStr(st)+" attempts";
Form3->Button1->Enabled = false;
Form3->Button3->Enabled = false;
Form3->Button2->Visible = true;
num=0, var=0, st=0, man=0;
}
}

}
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormActivate(TObject *Sender)
{
HANDLE h3;
h3 = Form3->Handle;
Form3->Show();

randomize();
if(Form2->RadioButton1->Checked)
{
num=random(64);
}

if(Form2->RadioButton2->Checked)
{
num=random(256);
}

if(Form2->RadioButton3->Checked)
{
num=random(1024);
}

}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
man=StrToInt(Edit1->Text);
st++;
Check(man);
Form3->Label2->Caption="You have "+IntToStr(var-st)+" attempts left";
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Edit1KeyPress(TObject *Sender, char &Key)
{
if ((Key >= '0') && (Key <= '9'))
return;
if (Key == VK_BACK)
return;
if (Key == VK_RETURN)
{
Button1->SetFocus();
return;
}
Key = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button3Click(TObject *Sender)
{
Form2->Show();
Form3->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{
Form2->Show();
Form3->Visible=false;
Form3 = new TForm3(NULL);
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->Close();
}
//---------------------------------------------------------------------------

