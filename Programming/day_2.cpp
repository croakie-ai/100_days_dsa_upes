// Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

// Input:
// - First line: integer n
// - Second line: n space-separated integers
// - Third line: integer pos (1-based position to delete)

// Output:
// - Print the updated array with (n-1) elements, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 2

// Output:
// 10 30 40 50

// Explanation: Delete position 2 (element 20), remaining elements shift left

#include<iostream>
using namespace std;


int main(){
    int arr[4]={10,20,30,40};
    cout<<"Enter the position of element you want to remove: ";
    int pos;
    cin>>pos;
    for(int i=pos;i<4;i++){
        arr[i-1]=arr[i];
    }
    for(int i=0;i<4-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}