#include <iostream>
using namespace std;

void ciag (int tabl[],int n){
	int cyf[40],cyf1[40];
	int sum[40];
	for (int i=3;i<n;i++){
			for (int z=40;z>0;z--){
				cyf[z]=tabl[i-1]%10;
				tabl[i-1]/10;	
				cyf1[z]=tabl[i-2]%10;
				tabl[i-2]/10;
				sum[z]=cyf[z]+cyf1[z];
			
				if (sum[z]>=10){
				sum[z]=sum[i]%10;
				sum[z+1]=+sum[z/10];
				}
			}		
 }
}
void wpis ( ){
	
}
void druk ( int sum[]){
	for (int j=0;j<=40;j++) cout<<j<<"|"<<sum[j]<<endl;
}
int main(){
	const int il=200;
	int tab [il];
	tab[1]=1;
	tab[2]=2;
	ciag (tab,il);
	druk (tab);
	return 0;
	
}






