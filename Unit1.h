//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TYoutube : public TForm
{
__published:	// IDE-managed Components
        TMemo *fromMemo;
        TMemo *toMemo;
        TButton *youtubetagButton;
        TButton *polyButton;
        TComboBox *pollyComboBox;
        TLabel *wordcountLabel;
        TButton *clearButton;
        TButton *copyButton;
        TButton *pastButton;
        TLabel *Label1;
        TLabel *pollynaemLabel;
        TButton *Button1;
        TEdit *filteredoutEdit;
        TButton *filteredoutButton;
        TLabel *Label2;
        TButton *Button2;
        void __fastcall youtubetagButtonClick(TObject *Sender);
        void __fastcall fromMemoChange(TObject *Sender);
        void __fastcall clearButtonClick(TObject *Sender);
        void __fastcall copyButtonClick(TObject *Sender);
        void __fastcall pastButtonClick(TObject *Sender);
        void __fastcall polyButtonClick(TObject *Sender);
        void __fastcall pollyComboBoxChange(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall filteredoutButtonClick(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TYoutube(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TYoutube *Youtube;
//---------------------------------------------------------------------------
#endif
