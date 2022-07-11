#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <ctime>
using namespace std;

int main()
{const int long N = 1000;
int d[N],i,j,k,czas1,czas2;
  srand((unsigned)time(NULL));
  for(i = 0; i < N; i++) d[i] = rand() % 100;
 // for(i = 0; i < N; i++) cout << setw(4) << d[i];
  cout << endl;
czas1 = clock();
  for(j = 0; j < N - 1; j++)
  { k = j;
for(i = j + 1; i < N; i++)
if(d[i] < d[k]) k = i;
    swap(d[k], d[j]);}
  czas2 = clock();
//  cout << "Po sortowaniu:\n\n";
  //for(i = 0; i < N; i++) cout << setw(4) << d[i];
  cout << endl;
  cout << 1.0 * (czas2 - czas1) / CLOCKS_PER_SEC;
  return 0;
}

