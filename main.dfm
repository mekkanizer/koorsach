object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 304
  ClientWidth = 643
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 424
    Top = 72
    Width = 169
    Height = 129
    TabOrder = 0
    object RadioButton1: TRadioButton
      Left = 32
      Top = 24
      Width = 113
      Height = 17
      Caption = #1041#1080#1083#1077#1090#1099
      Checked = True
      TabOrder = 0
      TabStop = True
      OnClick = RadioButton1Click
    end
    object RadioButton2: TRadioButton
      Left = 32
      Top = 47
      Width = 113
      Height = 17
      Caption = #1055#1072#1089#1089#1072#1078#1080#1088#1099
      TabOrder = 1
      OnClick = RadioButton2Click
    end
    object RadioButton3: TRadioButton
      Left = 32
      Top = 70
      Width = 113
      Height = 17
      Caption = #1056#1077#1081#1089#1099
      TabOrder = 2
      OnClick = RadioButton3Click
    end
    object RadioButton4: TRadioButton
      Left = 32
      Top = 93
      Width = 113
      Height = 17
      Caption = #1057#1072#1084#1086#1083#1077#1090#1099
      TabOrder = 3
      OnClick = RadioButton4Click
    end
  end
  object add_rand: TButton
    Left = 79
    Top = 248
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' (!)'
    TabOrder = 1
    OnClick = add_randClick
  end
  object DBGrid1: TDBGrid
    Left = 56
    Top = 81
    Width = 320
    Height = 120
    DataSource = DataSource1
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object DBNavigator1: TDBNavigator
    Left = 160
    Top = 247
    Width = 240
    Height = 25
    DataSource = DataSource1
    TabOrder = 3
  end
  object Button1: TButton
    Left = 456
    Top = 248
    Width = 83
    Height = 25
    Caption = #1050#1091#1087#1080#1090#1100' '#1073#1080#1083#1077#1090
    TabOrder = 4
    OnClick = Button1Click
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 304
    Top = 32
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=FLIGHTS;Data Source=VBOX\SQLEXPRESS'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 104
    Top = 32
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      
        'SELECT '#1041#1080#1083#1077#1090#1099'.'#1053#1086#1084#1077#1088'_'#1073#1080#1083#1077#1090#1072', '#1055#1072#1089#1089#1072#1078#1080#1088#1099'.'#1060#1072#1084#1080#1083#1080#1103', '#1041#1080#1083#1077#1090#1099'.'#1058#1080#1087'_'#1073#1080#1083#1077#1090#1072 +
        ', '#1041#1080#1083#1077#1090#1099'.'#1053#1086#1084#1077#1088'_'#1084#1077#1089#1090#1072', '#1041#1080#1083#1077#1090#1099'.'#1053#1086#1084#1077#1088'_'#1088#1077#1081#1089#1072'  FROM '#1041#1080#1083#1077#1090#1099' inner join' +
        ' '#1055#1072#1089#1089#1072#1078#1080#1088#1099' on '#1041#1080#1083#1077#1090#1099'.'#1053#1086#1084#1077#1088'_'#1087#1072#1089#1089#1072#1078#1080#1088#1072'='#1055#1072#1089#1089#1072#1078#1080#1088#1099'.'#1053#1086#1084#1077#1088'_'#1087#1072#1089#1089#1072#1078#1080#1088#1072)
    Left = 208
    Top = 32
  end
end
