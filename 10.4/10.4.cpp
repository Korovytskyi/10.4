#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct base
{
    string name;
    string var;
    string km;
};
int main()
{
    int const MAX = 2; 
    base b[MAX];
    for (int i = 0;i < MAX;++i)
        
    {
        setlocale(LC_CTYPE, "ukr");
        cout << "Марка :" << endl;
        cin >> b[i].name;
        cout << "Вартість :" << endl;
        cin >> b[i].var;
        cout << "Кілометраж :" << endl;
        cin >> b[i].km;
    }

    ofstream outfile;
    outfile.open("Out.txt");
    for (int i = 0;i < MAX;++i)
        cout << b[i].name << " " << b[i].var << " " << b[i].km << endl;

    cin.get();
    return 0;
}