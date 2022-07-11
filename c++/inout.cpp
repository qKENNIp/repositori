#include <fstream>	
#include <iostream>
#include <string>
using namespace std ;

int main ( ) {

ifstream myFile ; // o-i
myFile.open ( "HelloFile.txt" , ios_base :: in) ; //out - in

if (myFile.is_open( )) {

cout << " Otworzenie pliku zako?czy?o si? powodzeniem" << endl ;
string fileContents ;
while (myFile.good ( ) ) {
getline (myFile, fileContents) ;
cout << fileContents << endl ;

cout <<"Zakonczono odczyt z pliku, plik zostanie zamkni?ty"<<endl ;
myFile.close ( ) ;
}
}
						

else {cout << "B??d open ( ) : sprawd? , czy plik znajduje si? '+w odpowiednim katalogu " ""<< endl ;}
} 





