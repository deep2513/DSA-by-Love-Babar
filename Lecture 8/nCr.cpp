#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r){

    int num = factorial(n);

    int denom = factorial(r) * factorial(n-r);

    int ans = num / denom;

    return ans;
}

int main(){

    cout << nCr(6,3) << endl;

    return 0;
}