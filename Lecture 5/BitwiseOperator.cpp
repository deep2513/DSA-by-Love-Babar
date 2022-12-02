#include<iostream>
using namespace std;

int main(){
    
    int a = 4;
    int b = 6;
    int i = 1;

    cout << "a & b " << (a & b) << endl;
    cout << "a | b " << (a | b) << endl;
    cout << "~a " << ( ~a ) << endl;
    cout << "a ^ b " << (a ^ b) << endl;

    cout << "5 << 1 = " << (5 << 1) << endl;
    cout << "15 >> 1 = " << (15 >> 1) << endl;
    cout << "15 >> 2 = " << (15 >> 2) << endl;

    cout << (i++) << endl;
    cout << (++i) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;
    return 0;
}