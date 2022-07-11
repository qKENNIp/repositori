#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 double i=0.0,a,xn,x=0.0,b;
 
 cout<<"Napisz a"<<endl;
 cin>>a;
 cout<<"Napisz xn"<<endl;
 cin>>xn;
 b=sqrt(a);
 while(b!=x)
 {
  x=(1.0/2.0)*(xn+a/xn);
  xn=x;
  i++;
  
  
  cout<<"i= "<<i<<"||"<<"x= "<<x<<endl;
 };
 
 return 0;
}
