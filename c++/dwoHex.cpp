#include <iostream>	
using namespace std;
void dwoj(int b){
		cout<<endl;
	int wy=0,i=0;
	int A[i];
	while (b){
		wy=(b%2);
		b/=2;
		i++;
		A[i]=wy;}
	for (int z=i;z>0;z--){
		cout<<A[z]<<"";}
	cout<<endl;}
int main(){
	int a;
	a=8923;
	dwoj(a);
		cout<<endl;
	cout<<hex<<a;
	a=589;
	dwoj(a);
		cout<<endl;
	cout<<hex<<a;
	a=2;
	dwoj(a);
	cout<<hex<<a;
return 0;
}
