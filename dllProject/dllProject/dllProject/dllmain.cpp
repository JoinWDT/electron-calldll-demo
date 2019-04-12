#include "stdafx.h"
#include <windows.h>
#include "iostream"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
		//FILE *stream;
		//AllocConsole();
		//freopen_s(&stream, "conout$", "w", stdout);    //Open console
		//setlocale(LC_ALL, "chs");
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

