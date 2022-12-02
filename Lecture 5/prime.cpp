#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    bool ans = true;

    for(int i=2; i<n; i++){
        if(n%i==0){
            ans = false;
            break;
        }
    }

    if(ans==false)
        cout << "Number is not prime.";
    else 
        cout << "Number is prime.";

    return 0;
}