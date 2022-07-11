#include <iostream>
using namespace std;
int main(){
double sum,a=1.0,n;
cin>>n;
for (int i=1;i<=n;i++){
	a=1.0/i;
	sum=sum+a;
	cout<<i<<"|Suma = "<<sum<<endl;
}

	return 0;
}

