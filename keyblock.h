// keyblock.h : main header file for the KEYBLOCK application
//

#if !defined(AFX_KEYBLOCK_H__0A021BFD_08A8_4A0D_8603_57B059BE2AC4__INCLUDED_)
#define AFX_KEYBLOCK_H__0A021BFD_08A8_4A0D_8603_57B059BE2AC4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CKeyblockApp:
// See keyblock.cpp for the implementation of this class
//

class CKeyblockApp : public CWinApp
{
public:
	CKeyblockApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CKeyblockApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CKeyblockApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_KEYBLOCK_H__0A021BFD_08A8_4A0D_8603_57B059BE2AC4__INCLUDED_)
