// Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the reversed array, space-separated

// Example:
// Input:
// 5
// 1 2 3 4 5

// Output:
// 5 4 3 2 1

// Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays
#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-i-1]);
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    reverseArray(arr,5);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}