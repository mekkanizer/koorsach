object Form2: TForm2
  Left = 0
  Top = 0
  Caption = #1056#1077#1079#1077#1088#1074#1080#1088#1086#1074#1072#1085#1080#1077' '#1073#1080#1083#1077#1090#1072
  ClientHeight = 542
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 8
    Width = 32
    Height = 13
    Caption = #1042#1099#1083#1077#1090
  end
  object Label3: TLabel
    Left = 240
    Top = 8
    Width = 39
    Height = 13
    Caption = #1054#1090#1082#1091#1076#1072
  end
  object Label4: TLabel
    Left = 466
    Top = 8
    Width = 26
    Height = 13
    Caption = #1050#1091#1076#1072
  end
  object caption_ticket_amount: TLabel
    Left = 466
    Top = 170
    Width = 93
    Height = 14
    Caption = #1050#1086#1083'-'#1074#1086' '#1073#1080#1083#1077#1090#1086#1074':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object number_ticket_amount: TLabel
    Left = 577
    Top = 160
    Width = 34
    Height = 39
    Caption = '20'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    Visible = False
  end
  object DateTimePicker1: TDateTimePicker
    Left = 24
    Top = 27
    Width = 161
    Height = 21
    Date = 41778.534740011570000000
    Time = 41778.534740011570000000
    TabOrder = 0
  end
  object ComboBox1: TComboBox
    Left = 241
    Top = 27
    Width = 161
    Height = 21
    TabOrder = 1
    OnSelect = ComboBox1Select
  end
  object ComboBox2: TComboBox
    Left = 466
    Top = 27
    Width = 161
    Height = 21
    TabOrder = 2
  end
  object takeseat: TButton
    Left = 466
    Top = 222
    Width = 161
    Height = 25
    Caption = #1042#1099#1073#1088#1072#1090#1100' '#1084#1077#1089#1090#1086
    TabOrder = 3
    OnClick = takeseatClick
  end
  object search_ticket: TButton
    Left = 240
    Top = 264
    Width = 161
    Height = 25
    Caption = #1053#1072#1081#1090#1080' '#1073#1080#1083#1077#1090#1099
    TabOrder = 4
    OnClick = search_ticketClick
  end
  object flights: TComboBox
    Left = 24
    Top = 244
    Width = 161
    Height = 21
    TabOrder = 5
    Text = #1056#1077#1081#1089#1099
    OnSelect = flightsSelect
  end
  object search_flight: TButton
    Left = 24
    Top = 213
    Width = 161
    Height = 25
    Caption = #1053#1072#1081#1090#1080' '#1088#1077#1081#1089#1099
    TabOrder = 6
    OnClick = search_flightClick
  end
  object Panel3: TPanel
    Left = 241
    Top = 166
    Width = 161
    Height = 85
    TabOrder = 7
    object RadioButton3: TRadioButton
      Left = 32
      Top = 14
      Width = 113
      Height = 17
      Caption = #1055#1077#1088#1074#1099#1081
      TabOrder = 0
      OnClick = RadioButton3Click
    end
    object RadioButton4: TRadioButton
      Left = 32
      Top = 37
      Width = 113
      Height = 17
      Caption = #1041#1080#1079#1085#1077#1089
      TabOrder = 1
      OnClick = RadioButton4Click
    end
    object RadioButton5: TRadioButton
      Left = 32
      Top = 60
      Width = 113
      Height = 17
      Caption = #1069#1082#1086#1085#1086#1084
      Checked = True
      TabOrder = 2
      TabStop = True
      OnClick = RadioButton5Click
    end
  end
  object Button1: TButton
    Left = 466
    Top = 264
    Width = 161
    Height = 25
    Caption = #1053#1072#1081#1090#1080' '#1087#1072#1089#1089#1072#1078#1080#1088#1086#1074
    TabOrder = 8
    OnClick = Button1Click
  end
  object frxReport1: TfrxReport
    Version = '5.0.6'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 41782.698144467600000000
    ReportOptions.LastChange = 41787.524380150500000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 104
    Top = 64
    Datasets = <
      item
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 210.000000000000000000
      PaperHeight = 297.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      object Header1: TfrxHeader
        FillType = ftBrush
        Height = 22.677180000000000000
        Top = 18.897650000000000000
        Width = 718.110700000000000000
        object Memo8: TfrxMemoView
          Width = 37.795300000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            #1048#1084#1103)
          ParentFont = False
        end
        object Memo9: TfrxMemoView
          Left = 56.692950000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            #1060#1072#1084#1080#1083#1080#1103)
          ParentFont = False
        end
        object Memo10: TfrxMemoView
          Left = 162.519790000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            #1054#1090#1095#1077#1089#1090#1074#1086)
          ParentFont = False
        end
        object Memo11: TfrxMemoView
          Left = 279.685220000000000000
          Top = 3.779530000000000000
          Width = 105.826840000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            #1044#1072#1090#1072' '#1088#1086#1078#1076#1077#1085#1080#1103)
          ParentFont = False
        end
        object Memo12: TfrxMemoView
          Left = 408.189240000000000000
          Top = 3.779530000000000000
          Width = 37.795300000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            #1055#1086#1083)
          ParentFont = False
        end
        object Memo13: TfrxMemoView
          Left = 476.220780000000000000
          Top = 3.779530000000000000
          Width = 105.826840000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            #1057#1077#1088#1080#1103' '#1087#1072#1089#1087#1086#1088#1090#1072)
          ParentFont = False
        end
        object Memo14: TfrxMemoView
          Left = 597.165740000000000000
          Top = 3.779530000000000000
          Width = 109.606370000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8W = (
            #1053#1086#1084#1077#1088' '#1087#1072#1089#1087#1086#1088#1090#1072)
          ParentFont = False
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Height = 22.677180000000000000
        Top = 64.252010000000000000
        Width = 718.110700000000000000
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        RowCount = 0
        object Memo1: TfrxMemoView
          Width = 86.929190000000000000
          Height = 18.897650000000000000
          DataField = #1048#1084#1103
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."'#1048#1084#1103'"]')
        end
        object Memo4: TfrxMemoView
          Left = 279.685220000000000000
          Width = 128.504020000000000000
          Height = 18.897650000000000000
          DataField = #1044#1072#1090#1072'_'#1056#1086#1078#1076#1077#1085#1080#1103
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."'#1044#1072#1090#1072'_'#1056#1086#1078#1076#1077#1085#1080#1103'"]')
        end
        object Memo5: TfrxMemoView
          Left = 408.189240000000000000
          Width = 37.795300000000000000
          Height = 18.897650000000000000
          DataField = #1055#1086#1083
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."'#1055#1086#1083'"]')
        end
        object Memo6: TfrxMemoView
          Left = 476.220780000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          DataField = #1057#1077#1088#1080#1103'_'#1087#1072#1089#1087#1086#1088#1090#1072
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."'#1057#1077#1088#1080#1103'_'#1087#1072#1089#1087#1086#1088#1090#1072'"]')
        end
        object Memo7: TfrxMemoView
          Left = 597.165740000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          DataField = #1053#1086#1084#1077#1088'_'#1087#1072#1089#1087#1086#1088#1090#1072
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."'#1053#1086#1084#1077#1088'_'#1087#1072#1089#1087#1086#1088#1090#1072'"]')
        end
        object Memo2: TfrxMemoView
          Left = 56.692950000000000000
          Width = 113.385900000000000000
          Height = 18.897650000000000000
          DataField = #1060#1072#1084#1080#1083#1080#1103
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."'#1060#1072#1084#1080#1083#1080#1103'"]')
        end
        object Memo3: TfrxMemoView
          Left = 162.519790000000000000
          Width = 90.708720000000000000
          Height = 18.897650000000000000
          DataField = #1054#1090#1095#1077#1089#1090#1074#1086
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Memo.UTF8W = (
            '[frxDBDataset1."'#1054#1090#1095#1077#1089#1090#1074#1086'"]')
        end
      end
    end
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSet = Form1.ADOQuery1
    BCDToCurrency = False
    Left = 32
    Top = 64
  end
end
