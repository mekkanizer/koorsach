object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'Form4'
  ClientHeight = 343
  ClientWidth = 643
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnHide = FormHide
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 33
    Top = 13
    Width = 31
    Height = 13
    Caption = 'Label1'
    Visible = False
  end
  object Label2: TLabel
    Left = 33
    Top = 61
    Width = 31
    Height = 13
    Caption = 'Label2'
    Visible = False
  end
  object Label3: TLabel
    Left = 32
    Top = 109
    Width = 31
    Height = 13
    Caption = 'Label3'
    Visible = False
  end
  object Label4: TLabel
    Left = 33
    Top = 155
    Width = 31
    Height = 13
    Caption = 'Label4'
    Visible = False
  end
  object Label5: TLabel
    Left = 32
    Top = 203
    Width = 19
    Height = 13
    Caption = #1055#1086#1083
    Visible = False
  end
  object Label6: TLabel
    Left = 296
    Top = 8
    Width = 81
    Height = 13
    Caption = #1057#1077#1088#1080#1103' '#1087#1072#1089#1087#1086#1088#1090#1072
    Visible = False
  end
  object Label7: TLabel
    Left = 296
    Top = 61
    Width = 81
    Height = 13
    Caption = #1053#1086#1084#1077#1088' '#1087#1072#1089#1087#1086#1088#1090#1072
    Visible = False
  end
  object Label8: TLabel
    Left = 296
    Top = 107
    Width = 31
    Height = 13
    Caption = 'Label8'
    Visible = False
  end
  object Label9: TLabel
    Left = 296
    Top = 155
    Width = 63
    Height = 13
    Caption = #1053#1086#1084#1077#1088' '#1088#1077#1081#1089#1072
    Visible = False
  end
  object Label10: TLabel
    Left = 192
    Top = 8
    Width = 57
    Height = 13
    Caption = #1058#1080#1087' '#1073#1080#1083#1077#1090#1072
    Visible = False
  end
  object Label11: TLabel
    Left = 296
    Top = 205
    Width = 63
    Height = 13
    Caption = #1053#1086#1084#1077#1088' '#1084#1077#1089#1090#1072
    Visible = False
  end
  object Edit1: TEdit
    Left = 32
    Top = 32
    Width = 121
    Height = 21
    TabOrder = 0
    Visible = False
  end
  object Edit2: TEdit
    Left = 32
    Top = 80
    Width = 121
    Height = 21
    TabOrder = 1
    Visible = False
  end
  object Edit3: TEdit
    Left = 32
    Top = 128
    Width = 121
    Height = 21
    TabOrder = 2
    Visible = False
  end
  object DateTimePicker1: TDateTimePicker
    Left = 32
    Top = 128
    Width = 186
    Height = 21
    Date = 41793.093297627320000000
    Time = 41793.093297627320000000
    TabOrder = 3
    Visible = False
  end
  object DateTimePicker2: TDateTimePicker
    Left = 32
    Top = 176
    Width = 186
    Height = 21
    Date = 41793.094665798610000000
    Time = 41793.094665798610000000
    TabOrder = 4
    Visible = False
  end
  object Panel1: TPanel
    Left = 33
    Top = 232
    Width = 64
    Height = 57
    TabOrder = 5
    Visible = False
    object RadioButton1: TRadioButton
      Left = 16
      Top = 8
      Width = 33
      Height = 17
      Caption = #1084
      Checked = True
      TabOrder = 0
      TabStop = True
    end
    object RadioButton2: TRadioButton
      Left = 16
      Top = 31
      Width = 33
      Height = 17
      Caption = #1078
      TabOrder = 1
    end
  end
  object ComboBox1: TComboBox
    Left = 296
    Top = 126
    Width = 145
    Height = 21
    TabOrder = 6
    Visible = False
  end
  object Edit4: TEdit
    Left = 296
    Top = 32
    Width = 121
    Height = 21
    TabOrder = 7
    Visible = False
  end
  object Edit5: TEdit
    Left = 296
    Top = 80
    Width = 121
    Height = 21
    TabOrder = 8
    Visible = False
  end
  object Button1: TButton
    Left = 198
    Top = 259
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 9
    OnClick = Button1Click
  end
  object Panel2: TPanel
    Left = 184
    Top = 32
    Width = 89
    Height = 69
    TabOrder = 10
    Visible = False
    object RadioButton3: TRadioButton
      Left = 8
      Top = 4
      Width = 70
      Height = 17
      Caption = #1055#1077#1088#1074#1099#1081
      TabOrder = 0
      OnClick = RadioButton3Click
    end
    object RadioButton4: TRadioButton
      Left = 8
      Top = 25
      Width = 70
      Height = 17
      Caption = #1041#1080#1079#1085#1077#1089
      TabOrder = 1
      OnClick = RadioButton4Click
    end
    object RadioButton5: TRadioButton
      Left = 8
      Top = 48
      Width = 70
      Height = 17
      Caption = #1069#1082#1086#1085#1086#1084
      Checked = True
      TabOrder = 2
      TabStop = True
      OnClick = RadioButton5Click
    end
  end
  object ComboBox2: TComboBox
    Left = 296
    Top = 176
    Width = 145
    Height = 21
    TabOrder = 11
    Visible = False
    OnSelect = ComboBox2Select
  end
  object ComboBox3: TComboBox
    Left = 296
    Top = 224
    Width = 145
    Height = 21
    TabOrder = 12
    Visible = False
  end
  object ComboBox4: TComboBox
    Left = 496
    Top = 78
    Width = 145
    Height = 21
    TabOrder = 13
    Text = 'ComboBox4'
  end
end
