#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
int main (){
	string imie;
	int ls=0;
	vector <string> imiona ;
	ifstream dane;
	dane.open("IMIONA.IN",ios_base::in);
	if (dane.is_open ()){
		while (dane>>imie){
			ls=ls+1;
			string::iterator iznakM=find ((imie.begin()),imie.end(),'-');
			while (iznakM!=imie.end()){
				imie.erase(iznakM);
				iznakM=find (imie.begin(),imie.end(),'-');
				
					}
				for(int i=0;i<imie.size();i++){
					imie [i]=tolower(imie[i]);
					imie [0]=toupper(imie[0]);
					
					imiona.push_back(imie);
				}
		
			
		}
		dane.close();
	}else cout<<"bland owtarcia dysku";
	cout<<"przeczytano "<<ls<<" danych";
	sort(imiona.begin(),imiona.end());
	//for(int i=0;i<imiona.size();i++){
	//cout<<imiona[i]<<endl;	
	//}
	cout<<imiona[0]<<endl;
	for (int i=1;i<imiona.size();i++){
		if (imiona[i-1]!=imiona[i]) cout<<imiona [i]<<endl;
	}
	ofstream listal("imionaWy.txt");
		cout<<imiona[0]<<endl;
	for (int i=1;i<imiona.size();i++){
		if (imiona[i-1]!=imiona[i]) listal<<imiona [i]<<endl;
	}
	
	
}
