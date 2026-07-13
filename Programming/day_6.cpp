// Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (sorted array)

// Output:
// - Print unique elements only, space-separated

// Example:
// Input:
// 6
// 1 1 2 2 3 3

// Output:
// 1 2 3

// Explanation: Keep first occurrence of each element: 1, 2, 3

#include<vector>
#include<iostream>
using namespace std;

void removeDuplicates(vector<int> arr){
    int count=1;
    int size=arr.size();
    int temp=arr[0];
    int ptr=1;
    while(ptr<size){
        if(temp!=arr[ptr]){
            count++;
        }
        temp=arr[ptr];
        ptr++;
    }
    
}

int main(){

    return 0;
}