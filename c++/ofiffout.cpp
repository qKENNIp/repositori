#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  //system("chcp 1251");
  //system("cls");
  char s[80];
  fstream inOut;
  inOut.open("file.txt", ios::out);
  inOut << "������� ������" << endl;
  inOut.seekp(8, ios::beg);
  inOut << "��� ������� ������";
  inOut.close();
  inOut.open("file.txt", ios::in);
  inOut.seekg(-6, ios::end);
  inOut >> s;
  inOut.close();
  cout << s;
  cin.get();
  return 0;
}

