#include <iostream>
#include <iomanip>
using namespace std;

void druk(int T[50][50],int N ){
		for(int i=0;i<N;i++){	
		
		for(int j=0;j<N;j++)
			cout<<setw(2)<<T[i][j]<<" ";
			cout<<endl;
	}cout<<endl;
}
void ustaw (int s[50][50],int a,int b,int k,int N){
if (s[a][b]==0 && a>=0 && a<N && b>=0 && b<N)	s[a][b]=k+1;
}

int main (){
	int s[50][50]={0};
	int N=20, k=1,sazera=1,a,b;
	s[1][2]=k;
	
	do{
		for(int i=0;i<N;i++)
		for(int j=0;j<N;j++){
		if (s[i][j]==k){
				a=i+2;b=j+1;//1
			ustaw(s,a,b,k,N);
				a=i+2;b=j-1;//2
			ustaw(s,a,b,k,N);
				a=i-2;b=j+1;//3
			ustaw(s,a,b,k,N);
				a=i-2;b=j-1;//4
			ustaw(s,a,b,k,N);
				a=i+1;b=j+2;//5
			ustaw(s,a,b,k,N);
				a=i+1;b=j-2;//6
			ustaw(s,a,b,k,N);
				a=i-1;b=j+2;//7
			ustaw(s,a,b,k,N);
				a=i-1;b=j-2;//8
			ustaw(s,a,b,k,N);
			 }
			
			}
			druk(s,N);
			sazera=0;
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++){
				if (s[i][j]==0){
					sazera=1;break;
				}
			}
			k=k+1;
		
	}while (sazera);
	return 0;
}
