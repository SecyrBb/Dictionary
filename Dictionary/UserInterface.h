#pragma once

#include <Windows.h>
#include <iostream>
#include <string>
#include <conio.h>

#include "Manager.h"
#include "TimeManager.h"

using namespace std;

class UserInterface
{
private:
	HANDLE _hndl;
	Time sw;
	Manager* manager;
	bool end = false;
	void TuneCmd();
	void TextColor(int color);
	void Pause();
	int Choicer(int min, int max);

	void PrintStats();
	int OptionsMenu();
	bool AddInputFile();
	bool AddOutputFile();
	bool CorrectFile(string &fileName);
public:
	int MainMenu();
	UserInterface();
	~UserInterface();
};
