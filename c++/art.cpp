#include <iostream>
using namespace std;
int main() {
    int asum = 0, bsum = 0;
    int a[6][6] =
    {
    {1},
    {5,4},
    {2,7,4},
    {5,4,3,9},
    {4,1,8,1,3},
    {8,6,1,7,2,4}
    };
    int b[8][8] =
    {
    {6},
    {4,5},
    {9,6,2},
    {5,4,7,4},
    {8,7,9,2,1},
    {7,9,5,3,9,7},
    {5,7,6,1,8,4,1},
    {8,2,4,5,9,2,5,1}
    };
    for (int i = 0;i <= 5;i++) {
        cout << endl;
        for (int j = 0;j <= i;j++) {
            cout << a[i][j];
            asum += a[i][j];
        }
    }
    cout << endl <<"SUMMA masiwa a= "<< asum;
    for (int o = 0;o <=7;o++) {
        cout << endl;
        for (int p = 0;p <= o;p++) {
            cout << b[o][p];
            bsum = bsum + b[o][p];
        }
    }cout << endl << "SUMMA masiwa b= "<<bsum;
    cout << endl << "Summa= " << asum + bsum;
}
