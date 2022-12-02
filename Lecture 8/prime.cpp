#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){

    int a = 2;

    while(a<n){
        if(n%a==0){
            return false;
        }
        a++;
    }

    return true;
}

int main(){

    cout << isPrime(5) << endl;
    cout << isPrime(6) << endl;
    cout << isPrime(7) << endl;
    
    return 0;
}