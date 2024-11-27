#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <vector>
#include<fstream>
#include <algorithm>
#include <cmath>
using namespace std;
Car::Car(string _marka, string _model, string _color, int _year, int _power, int _speed)
{
	ifstream fin; vector<string> marka_lst; fin.open("marka_lst.txt");
	string br;
	while (!fin.eof())
	{ fin >> br;  marka_lst.push_back(br); }
	fin.close();
	for (size_t i = 0; i < size(marka_lst); i++)
	{ if (_marka == marka_lst[i])
		{ marka = _marka; break; }
		else { marka = "(New)" + _marka; }
	}
string model_lst[] = {/*BMW*/ "M3", "M4", "M5","M8","E60","E34", "E39","E38","Mini",
		/*Lada*/ "Granta", "Priora", "Vesta", "Largus", "ВАЗ-2107", "Niva", "Oka", "ВАЗ-2109", "Kalina",
		/*Audi*/ "A1", "A3", "A4", "A5", "A6", "A7", "Q3", "S3", "TT", "RS3", "Q6",
		/*Tesla*/ "Cybertruck", "Model S", "Model 3", "Model Y","Model X" };
	for (size_t i = 0; i < size(model_lst); i++)
	{ if (_model == model_lst[i])
		{ model = _model; break; }
		else { model = "(New)" + _model; }
	}
	string color_lst[] = { "Чёрный", "Белый", "Красный", "Синий", "Зелёный", "Жёлтый", "Серый" };
	for (size_t i = 0; i < size(color_lst); i++)
	{ if (_color == color_lst[i]) 
		{ color = _color; break; }
		else  { color = "(New)" + _color; }
	}
	if (_year > 1980 && _year < 2025)
	{ year = _year; }
	else { year = 0; }
	if (_power > 60 && _power < 800)
	{ power = _power; }
	else { power = 0; }
	if (_speed > 90 && _speed < 250)
	{ speed = _speed; }
	else { speed = 0; }
}
void Car::SetCarColor(string col)
{ color = col; }
void Car::Vivod()
{ cout << marka << " " << model << " " << color << " " << year << " " << power << " " << speed << endl;
}