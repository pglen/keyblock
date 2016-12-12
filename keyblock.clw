; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CKeyblockDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "keyblock.h"

ClassCount=4
Class1=CKeyblockApp
Class2=CKeyblockDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_KEYBLOCK_DIALOG

[CLS:CKeyblockApp]
Type=0
HeaderFile=keyblock.h
ImplementationFile=keyblock.cpp
Filter=N

[CLS:CKeyblockDlg]
Type=0
HeaderFile=keyblockDlg.h
ImplementationFile=keyblockDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=keyblockDlg.h
ImplementationFile=keyblockDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_KEYBLOCK_DIALOG]
Type=1
Class=CKeyblockDlg
ControlCount=3
Control1=IDOK,button,1342242816
Control2=IDCANCEL,button,1208025088
Control3=IDC_STATIC,static,1342308352

