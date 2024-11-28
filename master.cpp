#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
int main()
{
    multimap<string, string> m;
   // m.emplace(make_pair(("a"), ("aa")));
   //m.emplace(make_pair("b", "ab"));
    m.emplace("b", "ab");
    m.emplace("b", "abba");
    m.emplace("a", "aa");
    m.emplace("a", "aaa");
    m.emplace("d", "ddd");
    m.emplace("d", "DDD");
    for (const auto& p : m){
        std::cout << p.first << "=> " << p.second << '\n';
}
    for (auto& it : m) {
        if (it.first == "d" && it.second == "DDD") 
        {
            cout  << "it first \n";
        }
    }
    
    for (auto & p : m)
    {
     std::cout << p.first  << "=> " << p.second << '\n';
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

    return 0;
}
