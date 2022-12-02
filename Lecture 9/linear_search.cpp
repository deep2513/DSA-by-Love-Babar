#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int key, int size){
    for(int i=0; i<size; i++){
        if(key==arr[i]) return i;
    }

    return -1;
}

int main(){
    
    int arr[10] = {5, 7, -2, 5, 2, 9, 67, -5, 8, 10};

    int key;
    cin >> key;

    cout << linearSearch(arr, key, 10);

    return 0;
}