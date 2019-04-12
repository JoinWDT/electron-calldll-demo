
#include "stdafx.h"
#include "interface.h"
#include <stdlib.h>
#include <string>
fun_callback myfun_callback;
int add(const int arg1, const int arg2)
{
	return arg1 + arg2;
}

int stringtest(char** output, int* outputLen)
{
	std::string str = "Hello World!";
	*output = (char*)malloc(str.length() + 1);
	memset(*output, '\0', str.length() + 1);
	strcpy(*output, str.data());
	*outputLen = strlen(*output);
	return 1;
}

void callJsFun() 
{
	if (NULL != myfun_callback)
	{
		myfun_callback("Hello World!");
	}
}

void setcallback(void* pfun)
{
	myfun_callback = (fun_callback)pfun;
}

