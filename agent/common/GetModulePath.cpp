/**
	\file	GetModulePathA.cpp
	\author	KimPro
	\date	2005.04.04

  */
#include "pch.h"
YAGENT_COMMON_BEGIN

/**	\brief	현재 호출된 모듈(실행파일)의 경로를 얻는 함수.

	\param	LPCTSTR	szPath	복사 대상 문자열
	\param	DWORD	dwSize	복사 가능한 문자열츼 최대 길이.
	\return	bool: 성공 - TRUE, 실패 - FALSE


*/
bool	GetModulePath(OUT LPTSTR szPath, IN DWORD dwSize)
{
	return GetInstancePath(NULL, szPath, dwSize);
}

bool	GetInstancePath(IN HINSTANCE hInstance, OUT LPTSTR szPath, IN DWORD dwSize)
{
	LPTSTR	ps;
	TCHAR	szBuf[LBUFSIZE];

	if( ::GetModuleFileName(hInstance, szBuf, sizeof(szBuf)) )
	{
		ps	= _tcsrchr(szBuf, TEXT('\\'));
		if( ps )
		{
			*ps	= NULL;

			/*
				2013/05/05	kimpro
				도대체 아래 제일 처음이 역슬래시인 경우 왜 +4부터 복사했을까??
				
			if( _T('\\') == szBuf[0] )
			{
				::StringCbCopy(szPath, dwSize, szBuf + 4);
			}
			else
			{
				::StringCbCopy(szPath, dwSize, szBuf);
			}
			*/
			::StringCbCopy(szPath, dwSize, szBuf);

			return true;
		}
	}
	return false;
}
YAGENT_COMMON_END
