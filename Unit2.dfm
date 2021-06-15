object Form2: TForm2
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Guess the number'
  ClientHeight = 460
  ClientWidth = 720
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 296
    Top = 24
    Width = 45
    Height = 19
    Caption = 'Level'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 296
    Top = 400
    Width = 153
    Height = 25
    Caption = 'Continue'
    TabOrder = 0
    OnClick = Button1Click
  end
  object RadioButton1: TRadioButton
    Left = 296
    Top = 80
    Width = 113
    Height = 17
    Caption = 'Easy'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object RadioButton2: TRadioButton
    Left = 296
    Top = 184
    Width = 113
    Height = 17
    Caption = 'Normal'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
  end
  object RadioButton3: TRadioButton
    Left = 296
    Top = 296
    Width = 113
    Height = 17
    Caption = 'Hard'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
  end
  object Button2: TButton
    Left = 24
    Top = 400
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 4
    OnClick = Button2Click
  end
end
