#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // int a;
    // cin >> a;

    // cout << "Value of n is " << n << endl;

    /*
    if(a>0){
        cout << "A is positive." << endl;
    } else {
        cout << "A is negative." << endl;
    }
    */

    /*
    int a, b;
    cin >> a >> b;

    if(a>b){
        cout << "a is greater." << endl;
    } else {
        cout << "b is greater." << endl;
    } */

    // int a;
    // cin >> a;

    // if(a>0){
    //     cout << "+ve" << endl;
    // } else if(a==0){
    //     cout << "Zero" << endl;
    // } else {
    //     cout << "-ve" << endl;
    // }

    char ch;
    cin >> ch;

    if(ch>='a' && ch<='z'){
        cout << "Lowercase" << endl;
    } else if(ch>='A' && ch<='Z'){
        cout << "Uppercase" << endl;
    } else if(ch>='0' && ch<='9'){
        cout << "Numeric" << endl;
    }

    return 0;
}