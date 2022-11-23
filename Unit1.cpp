//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TYoutube *Youtube;
//---------------------------------------------------------------------------
__fastcall TYoutube::TYoutube(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TYoutube::youtubetagButtonClick(TObject *Sender)
{
  toMemo->Clear();
  AnsiString sLine = "";
  for (int i = 0; i < fromMemo->Lines->Count; i++)
  {
    AnsiString s = fromMemo->Lines->Strings[i].Trim();
    toMemo->Text =  toMemo->Text + s + ",";
  }
  toMemo->Text = toMemo->Text.Delete(toMemo->Text.Length(), 1);

}
//---------------------------------------------------------------------------
void __fastcall TYoutube::fromMemoChange(TObject *Sender)
{
  int iwordcount = 0;
  for (int i = 0; i < fromMemo->Lines->Count; i++)
  {
    AnsiString s = fromMemo->Lines->Strings[i].Trim();
    iwordcount = iwordcount + s.Length();
  }
  wordcountLabel->Caption = "Total Words: " + IntToStr(iwordcount);
  if (iwordcount > 500)
    wordcountLabel->Font->Color = clRed;
  else
    wordcountLabel->Font->Color = clGreen;
}
//---------------------------------------------------------------------------
void __fastcall TYoutube::clearButtonClick(TObject *Sender)
{
   fromMemo->Lines->Clear();
   toMemo->Lines->Clear();
   wordcountLabel->Caption = "";
}
//---------------------------------------------------------------------------
void __fastcall TYoutube::copyButtonClick(TObject *Sender)
{
  toMemo->SelectAll();
  toMemo->CopyToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TYoutube::pastButtonClick(TObject *Sender)
{
  fromMemo->Clear();
  fromMemo->PasteFromClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TYoutube::polyButtonClick(TObject *Sender)
{
  toMemo->Clear();
  AnsiString sLine = "";
  for (int i = 0; i < fromMemo->Lines->Count; i++)
  {
    AnsiString s = fromMemo->Lines->Strings[i].Trim();
    if (s.Trim() > 0)
      toMemo->Lines->Add("<speak>" + pollyComboBox->Text + s + "</amazon:auto-breaths></speak>" );
    else
      toMemo->Lines->Add("");

  }
}
//---------------------------------------------------------------------------
void __fastcall TYoutube::pollyComboBoxChange(TObject *Sender)
{
   pollynaemLabel->Caption = pollyComboBox->Text;
}
//---------------------------------------------------------------------------
void __fastcall TYoutube::Button1Click(TObject *Sender)
{
  toMemo->Clear();
  AnsiString sLine = "";
  for (int i = 0; i < fromMemo->Lines->Count; i++)
  {
    AnsiString s = fromMemo->Lines->Strings[i].Trim();
    toMemo->Lines->Add("#" + s);
  }
  //toMemo->Text = toMemo->Text.Delete(toMemo->Text.Length(), 1);
}
//---------------------------------------------------------------------------

void __fastcall TYoutube::filteredoutButtonClick(TObject *Sender)
{
  toMemo->Clear();
  AnsiString sLine = "";
  AnsiString sfilteredout = filteredoutEdit->Text.Trim();
  for (int i = 0; i < fromMemo->Lines->Count; i++)
  {
    AnsiString s = fromMemo->Lines->Strings[i].Trim();
    if (s.SubString(1, sfilteredout.Length()) != sfilteredout)
    toMemo->Lines->Add(s);

  }
}
//---------------------------------------------------------------------------

void __fastcall TYoutube::Button2Click(TObject *Sender)
{
  toMemo->Clear();
  AnsiString sLine = "";
  for (int i = 0; i < fromMemo->Lines->Count; i++)
  {
    AnsiString sdrawings = fromMemo->Lines->Strings[i].Trim();
    AnsiString sdate, snumber1, snumber2;
    sdate = sdrawings.SubString(1, 10);
    snumber1 = sdrawings.SubString(12, 1);
    snumber2 = sdrawings.SubString(13, 1);
    toMemo->Lines->Add(sdate + " " + snumber1 + " " + snumber2 + " 0" );
  }

}
//---------------------------------------------------------------------------

