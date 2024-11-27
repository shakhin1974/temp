#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <vector>
#include <fstream>
#include <algorithm>
#include"temp.h"
class Car
{
private:
	string marka;
	string model;
	string color;
	int year;
	int power;
	int speed;

public:
	Car(string, string, string, int, int, int);
	void SetCarColor(string);
	void Vivod();
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Car Lada("Lada", "Kalina", "Белый", 2020, 110, 180);
	Lada.Vivod();
	Lada.SetCarColor("Чёрный");
	Lada.Vivod();
	Car Audi("Audi", "A1", "Серый", 2020, 150, 200);
	Audi.Vivod();
	Car BMW("BMW", "Mini", "Серый", 2020, 150, 200);
	BMW.Vivod();


}

