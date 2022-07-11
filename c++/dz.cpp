#include <iostream>
#include <ctime>
#include <cstdlib>

 using namespace std;
int main (){
	int T[]={11,23,34,99,78,12,44,47,82,24,58,1,79};
	int min,max,N;
	N=sizeof(T)/sizeof(int);
	cout<<"T ma "<<N<<" elementow"<<endl;
	min=T[0];
	max=T[0];
 	
	for(int i=0;i<N;i++){
		if (T[i]<min) {
			min=T[i];
		}
	} 
	for(int i=0;i<N;i++){
    	if (T[i]>max) {
     	 max=T[i];
		}
	}
    
	cout<<"MIN= "<<min<<endl;
	cout<<"MAX= "<<max<<endl;
	return 0;
}
