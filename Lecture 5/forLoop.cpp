#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    cout << "printing count from 1 to n "<< endl;

    for(int i=1; i<=n; i++){
        if(i==10) continue;
        cout << i << " ";
        // if(i==5) break;
    }

    return 0;
}