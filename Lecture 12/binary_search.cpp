#include<bits/stdc++.h>
using namespace std;

int binarySearchIterative(int arr[],int size, int key){
    int i=0;
    int j=size-1;

    while(i<=j){
        int mid = i + (j - i)/2;
        if(arr[mid]==key){
            return key;
        } else if(arr[mid]> key){
            j = mid - 1;
        } else {
            i = mid + 1;
        }
    }

    return -1;
}

int binarySearchRecursive(int arr[], int start, int end, int key){
    if(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==key){
            return key;
        } else if(arr[mid]> key){
            return binarySearchRecursive(arr, start, mid-1, key);
        } else {
            return binarySearchRecursive(arr, mid+1, end, key);
        }
    }
    return -1;
}   

int main(){
    int arr[4] = {1,5,9,34};

    cout << binarySearchIterative(arr, 4, 1) << endl;
    cout << binarySearchIterative(arr, 4, 5) << endl;
    cout << binarySearchIterative(arr, 4, 9) << endl;
    cout << binarySearchIterative(arr, 4, 34) << endl;
    cout << binarySearchIterative(arr, 4, 387) << endl << endl;

    cout << binarySearchRecursive(arr, 0, 3, 1) << endl;
    cout << binarySearchRecursive(arr, 0, 3, 5) << endl;
    cout << binarySearchRecursive(arr, 0, 3, 9) << endl;
    cout << binarySearchRecursive(arr, 0, 3, 34) << endl;
    cout << binarySearchRecursive(arr, 0, 3, 37926) << endl;

    return 0;
}