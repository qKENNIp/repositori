#include <iostream>
using namespace std;

int main()
{    //1
    int a;
    char b;
    char c;
    char d;
    cout << "Podaj a" << endl;
    cin >> a;
    switch (a)
    {
    case 8:
    {
        cout << "Podaj b,c" << endl;
        cin >> b;
        cin >> c;
        cout << c << " " << b;
        break;
    }
    case 4:
    {
        cout << "Podaj list"<<endl;
        cin >> d;
        if(int(d)>15)
        {
            cout << "wiecej" << endl;
        }
        else cout << "mniej"<<endl;
    }
    }}
