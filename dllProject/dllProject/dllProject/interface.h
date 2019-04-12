#pragma once

extern "C" int  __declspec(dllexport) add(const int arg1, const int arg2);

extern "C" int  __declspec(dllexport) stringtest(char** output, int* outputLen);

extern "C" void  __declspec(dllexport) callJsFun();

typedef void(*fun_callback)(const char* str);
extern "C" void __declspec(dllexport)setcallback(void* pfun);