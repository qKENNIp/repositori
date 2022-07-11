#include<iostream>
#include<vector> 
using namespace std;
void licz (int liczba,vector<int> v1)
{	int przen=0 ;
	v1.push_back(1);
	for(int i=2;i<=liczba;i++){
		for(int j=0;j<v1.size();j++){
			int liczbtemp=v1[j]*i;
			cout<<liczbtemp<<endl;
			v1[j]=(liczbtemp+przen)%10;
			przen=(liczbtemp+przen)/10;
		}
	}
	while(przen==0){
v1.push_back(przen%10);przen=przen/10;}

for(int i=v1.size()-1;i>=0;i--) cout<<v1[i];cout<<endl;
}


int main(){

	vector<int> v2;
	licz(100,v2);
	
}
