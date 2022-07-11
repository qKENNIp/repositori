#include <cstdlib>
#include <iostream>
using namespace std;
typedef unsigned short us;
typedef unsigned long   ul;

int mult(us v[], int len, ul y) {
    ul acc, per = 0;
    for(int i = 0; i < len; i++) {
        acc = (ul)v[i] * (ul)y +per;
        v[i] = acc;
        per = acc >> 16;
    }
    if(per) v[len++] = per;
    return len;}
int fact(us v[], int max_len, ul y) {
    v[0] = 1;
    int len = 1;
    for(ul i = 2; i <= y; i++) {
        len = mult(v, len, i);
        if(len >= max_len) {
            cout << "Vector overflow!!!" << endl;
            exit (1);
        }
    }
    return len;
}

int div_mod_10(us v[], int len, int &mod_rez) {
    ul acc;
    int i_v = len - 1;
    mod_rez = 0;

    while(i_v >= 0) {
        acc = (mod_rez << 16) + v[i_v];
        v[i_v] = acc / 10;
        mod_rez = acc % 10;
        --i_v;
    }
    if(v[len-1] == 0) --len;
    return len;
}
void vector_out(us v[], int len) {
    int xmod;
    int new_len;
    if(len > 0) {
        new_len = div_mod_10(v, len, xmod);
        vector_out(v, new_len);
        cout << xmod;
    }
}
int main() {
    us rezult[200];
    int len = fact(rezult, 200, 100);

    cout << endl << "rezult =  ";
    vector_out(rezult, len);
    cout << endl;
    cout << endl;
    long double f = 1;
    for(int n=2; n<=100; n++) {
        f *= n;
    }
    cout << "f = " << f << endl;
}
