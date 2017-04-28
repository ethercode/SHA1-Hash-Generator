object frmMain: TfrmMain
  Left = 319
  Top = 224
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'SHA1 Hash Generator and speed benchmark'
  ClientHeight = 341
  ClientWidth = 455
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object grpMain: TGroupBox
    Left = 8
    Top = 8
    Width = 441
    Height = 217
    Caption = 'Text to encode'
    TabOrder = 0
    object lblHash: TLabel
      Left = 72
      Top = 195
      Width = 56
      Height = 16
      Caption = 'No data'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Courier New'
      Font.Style = []
      ParentFont = False
    end
    object lblStatic1: TLabel
      Left = 8
      Top = 196
      Width = 59
      Height = 13
      Caption = 'SHA1 Hash:'
    end
    object mmoText: TMemo
      Left = 8
      Top = 16
      Width = 425
      Height = 177
      Anchors = [akLeft, akTop, akRight, akBottom]
      TabOrder = 0
      OnChange = mmoTextChange
    end
  end
  object grpBenchmarj: TGroupBox
    Left = 8
    Top = 232
    Width = 441
    Height = 105
    Caption = 'Benchmarking'
    TabOrder = 1
    object lblStatic2: TLabel
      Left = 8
      Top = 16
      Width = 133
      Height = 13
      Caption = 'Speed (hashes per second):'
    end
    object lblSpeed: TLabel
      Left = 147
      Top = 16
      Width = 46
      Height = 13
      Caption = 'Unknown'
    end
    object Label1: TLabel
      Left = 8
      Top = 40
      Width = 308
      Height = 13
      Caption = 
        'To benchmark, there must be data. in the "Text to encode"  field' +
        '.'
      OnClick = btnBenchmarkClick
    end
    object btnBenchmark: TButton
      Left = 140
      Top = 72
      Width = 161
      Height = 25
      Caption = 'Benchmark SHA1 speed'
      Enabled = False
      TabOrder = 0
      OnClick = btnBenchmarkClick
    end
  end
end
