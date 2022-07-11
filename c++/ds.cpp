#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main (){
	int a,b,c;
	srand(time (NULL));
	int tab[11];
	for (int i=0;i<11;i++){
		tab [i]=rand()%20+5;
	}
	for (int a=0;a<11;a++){
		cout<<tab[a]<<endl;
	}
} 
