object Youtube: TYoutube
  Left = 15
  Top = 159
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'YouTube Tools'
  ClientHeight = 534
  ClientWidth = 904
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object wordcountLabel: TLabel
    Left = 24
    Top = 496
    Width = 5
    Height = 16
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Label1: TLabel
    Left = 360
    Top = 232
    Width = 75
    Height = 16
    Caption = 'Polly Auto:'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object pollynaemLabel: TLabel
    Left = 352
    Top = 504
    Width = 75
    Height = 16
    Caption = 'Polly Auto:'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Label2: TLabel
    Left = 360
    Top = 376
    Width = 123
    Height = 16
    Caption = 'Filtering out lines:'
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object fromMemo: TMemo
    Left = 24
    Top = 24
    Width = 321
    Height = 465
    TabOrder = 0
    WordWrap = False
    OnChange = fromMemoChange
  end
  object toMemo: TMemo
    Left = 504
    Top = 24
    Width = 377
    Height = 465
    TabOrder = 1
  end
  object youtubetagButton: TButton
    Left = 352
    Top = 40
    Width = 137
    Height = 33
    Caption = 'Convert to Youtube Tag'
    TabOrder = 2
    OnClick = youtubetagButtonClick
  end
  object polyButton: TButton
    Left = 352
    Top = 96
    Width = 137
    Height = 33
    Caption = 'Convert to Amazon Polly'
    TabOrder = 3
    OnClick = polyButtonClick
  end
  object pollyComboBox: TComboBox
    Left = 352
    Top = 259
    Width = 145
    Height = 21
    ItemHeight = 13
    ItemIndex = 0
    TabOrder = 4
    Text = '<amazon:auto-breaths>'
    OnChange = pollyComboBoxChange
    Items.Strings = (
      '<amazon:auto-breaths>'
      '<amazon:auto-breaths volume="x-soft">'
      '<amazon:auto-breaths volume="soft">'
      '<amazon:auto-breaths volume="loud">'
      '<amazon:auto-breaths volume="x-loud">'
      '<amazon:auto-breaths frequency="x-low">'
      '<amazon:auto-breaths frequency="low">'
      '<amazon:auto-breaths frequency="high">'
      '<amazon:auto-breaths frequency="x-high">'
      '<amazon:auto-breaths volume="x-loud" frequency="x-low">'
      '<amazon:auto-breaths volume="loud" frequency="low">'
      '<amazon:auto-breaths volume="x-soft" frequency="x-high">'
      '<amazon:auto-breaths volume="soft" frequency="high">'
      '')
  end
  object clearButton: TButton
    Left = 360
    Top = 312
    Width = 137
    Height = 33
    Caption = 'Clear All'
    TabOrder = 5
    OnClick = clearButtonClick
  end
  object copyButton: TButton
    Left = 808
    Top = 496
    Width = 75
    Height = 25
    Caption = 'Copy'
    TabOrder = 6
    OnClick = copyButtonClick
  end
  object pastButton: TButton
    Left = 264
    Top = 496
    Width = 75
    Height = 25
    Caption = 'Past'
    TabOrder = 7
    OnClick = pastButtonClick
  end
  object Button1: TButton
    Left = 352
    Top = 136
    Width = 137
    Height = 33
    Caption = 'Convert to #'
    TabOrder = 8
    OnClick = Button1Click
  end
  object filteredoutEdit: TEdit
    Left = 360
    Top = 400
    Width = 121
    Height = 21
    TabOrder = 9
  end
  object filteredoutButton: TButton
    Left = 376
    Top = 432
    Width = 75
    Height = 25
    Caption = 'Filtered Out'
    TabOrder = 10
    OnClick = filteredoutButtonClick
  end
  object Button2: TButton
    Left = 352
    Top = 184
    Width = 137
    Height = 33
    Caption = 'Convert to SP'
    TabOrder = 11
    OnClick = Button2Click
  end
end
