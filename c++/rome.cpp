#include <iostream>
#include <string>

using namespace std;

int main(){
const int w[]  ={1000,900,500,400,100,90,50,40,10,9,5,4,1 };
const  string s[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
	cout<<"whisz";
	int n,r=0;
	cin>>n;
	cout<<endl;
	while (n>=1){
	if(n>=w[r]){
			cout<<s[r];
			n-=w[r];
		}
		else r++;
	}
/*	cout<<endl;
	for (r=0;n>0;){
		if(n>=w[r]){
			cout<<s[r];
			n-=w[r];
		}
		else r++;
		
	}*/
}
