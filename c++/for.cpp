#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
 using namespace std;
 int main( ){
 cout<<"Counting forward \n" ;
  for(int i=0;i<10;--i){
  	cout<<i<<"  ";
  }
	  cout<"\n\nCounting backward ";
	  for (int i=9;i>=0;--i){
	  	cout<<i<<" ";
	  }
	  cout<<"\n\nCoutnting ny fives :\n" ;
	  for (int i=0; i<=50;i+=5){
	  	cout<<i<<" ";
	  }
	  cout<<"\n\nCounting with null statements :\n";
	  int count =0;
	  for ( ;count<10;){
	  	cout<<count<<" ";
	  	count++;
	  }
	  cout<<"\n\counting with nested for loops :\n";
	  const int Rows =5;
	  const int Col= 3;
	  for (int i=0;i<Rows;++i){
	  	for (int j;j<Col;++j){
	  		cout<<i<<"."<<j<<"  ";
	  	}cout<<endl;
	  }

 	//str99 gk
 	return 0;
 	
 }
