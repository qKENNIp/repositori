#include <iostream>
#include <fstream>
using namespace std;
int main (){
	
	 ofstream fout;
  fout.open("file.txt");
  fout << "0123456789";
  fout.close();
  int wpis;
	cout<<"Wpis number: ";
	cin>>wpis;
  fstream nambr;
  nambr.open("file.txt",ios::in);
  nambr.seekp (wpis,ios::beg);
  nambr << wpis;
  nambr.close();
  
  
  return 0;
}
