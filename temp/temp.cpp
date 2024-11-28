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

    multimap<string, string> m;

   // m.emplace(make_pair(("a"), ("aa")));
   //m.emplace(make_pair("b", "ab"));
   
    m.emplace("b", "ab");
    m.emplace("b", "abba");
    m.emplace("a", "aa");
    m.emplace("a", "aaa");
    m.emplace("d", "ddd");
    m.emplace("d", "DDD");
    
    for (const auto & p : m)
    {
     std::cout << p.first  << " => " << p.second << '\n';
    }
   multimap<string, string> mm;
    mm.insert({ "1", "Red" });
    mm.insert({ "1", "Blue" });
    
    multimap<string, string> mp1 = 
    { { "Man", "Singing" },
        { "Man", "Dancing" } };
    mp1.insert({ { "Sal", "Reading" },
                     { "Soya", "Music" },
                     { "Sal", "Painting" },
                     { "Sal", "Arts" } });
    string k = "Man";
    
auto range = mp1.equal_range(k);
std::cout   << k <<  " = " ; 
for (auto i = range.first; i != range.second; ++i)
{
std::cout << i->second << " ";
}
std::cout << endl;

}

