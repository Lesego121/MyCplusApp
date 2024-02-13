object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 233
  ClientWidth = 447
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Img: TImage
    Left = 391
    Top = 73
    Width = 25
    Height = 25
  end
  object lblPercentage: TLabel
    Left = 320
    Top = 13
    Width = 11
    Height = 13
    Caption = '%'
  end
  object lstBox: TListBox
    Left = 32
    Top = 48
    Width = 233
    Height = 136
    ItemHeight = 13
    TabOrder = 0
  end
  object btnPopulate: TButton
    Left = 32
    Top = 8
    Width = 233
    Height = 25
    Caption = 'Populate List box with Example'
    TabOrder = 1
    OnClick = btnPopulateClick
  end
  object btnLetGo: TButton
    Left = 296
    Top = 48
    Width = 75
    Height = 25
    Caption = 'Let'#39's Go!'
    TabOrder = 2
    OnClick = btnLetGoClick
  end
  object edtUser: TEdit
    Left = 296
    Top = 79
    Width = 75
    Height = 21
    TabOrder = 3
  end
  object btnSupplyAnswer: TButton
    Left = 296
    Top = 104
    Width = 97
    Height = 33
    Caption = 'Supply Answer'
    TabOrder = 4
    OnClick = btnSupplyAnswerClick
  end
  object pnlScore: TPanel
    Left = 296
    Top = 143
    Width = 97
    Height = 41
    Caption = 'pnlScore'
    TabOrder = 5
  end
end
