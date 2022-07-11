#include <iostream> //
#include<string>

using namespace std ;

int main ( ) {
	
float l1;
cout<<"rozmiar float = "<<sizeof(l1)<<endl;

double l2;
cout<<"rozmiar double = "<<sizeof(l2)<<endl;

int l3= 2147483647;
cout<<"rozmiar int = "<<sizeof(l3)<<endl;

int l4[7];
cout<<"rozmiar int[7] = "<<sizeof(l4)<<endl;

char l5;
cout<<"rozmiar char = "<<sizeof(l5)<<endl;

string s="asdqw???ddfgf " ;
cout<<"rozmiar stringu "<<s<<sizeof(s)<<" ale ma znakow "<<s.size()<<endl;

short l6;
cout<<"rozmiar short = "<<sizeof(l6)<<endl;

bool l7;
cout<<"rozmiar bool = "<<sizeof(l7)<<endl;

void* l8;
cout<<"rozmiar void* = "<<sizeof(l8)<<endl;

long long ll;
cout<<"rozmiar long long = "<<sizeof(ll)<<endl;

long double ld;
cout<<"rozmiar long double = "<<sizeof(ld)<<endl;
 return 0;
}

