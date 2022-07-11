#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
void czas (double cas1, double cas2){
 double time;
 time= (1.0*(cas2-cas1))/CLOCKS_PER_SEC;
 cout<<time<<endl;}
 int fib(int k){
	if(k<3) 
	return 1;
	else return fib(k-1) + fib(k-2);}
int main()
{ //double Liter=1.54e8;
int max = 2147483647;
double czas1,czas2,czas3,czas4;
czas1= clock();
cout << fib(38) << endl;
czas2=clock();
czas(czas1,czas2);}
