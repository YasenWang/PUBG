/*
	u4pak.cpp
	www.wangyusheng.cn
	E-mail:00000000@wangyusheng.cn
*/
#define DLLEXPORT
#include <string>
#include "u4pak.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int upak_check()
{
	return 1;
}

void upak(string SourceFilePath, string DirectionPath, string FileName, string PakName)
{
	/*UnrealPak.exe·��*/
	if (SourceFilePath != "")
	{
		string setPath = "cd " + SourceFilePath;
		system("setPath");
	}
	/*Ŀ�ĵ�ַ*/
	if (DirectionPath != "")
	{
		FileName = DirectionPath + FileName;
	}
	/*Pak��д*/
	string order = "UnrealPak.exe ";
	order = order + PakName + " -create=";
	order = order + FileName + " -order=CookerOpenOrder.log -UTF8Output -encrypt -compress";
	cout << order.c_str() << endl;
	system(order.c_str());
}