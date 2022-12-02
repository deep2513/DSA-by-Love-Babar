#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size){
    for(int i=0; i<size/2; i++){
        swap(arr[i], arr[size-i-1]);
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    } cout << endl;
}

int main(){
    
    int arr[10] = {2, 7, 5, 9, 1, 5, 7, 23, 8, 4645};

    printArray(arr, 10);
    reverse(arr, 10);
    printArray(arr, 10);

    return 0;
}