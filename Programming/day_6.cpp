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

vector<int> removeDuplicates(vector<int> arr){
    vector<int> temp;
    int rep=arr[0];
    temp.push_back(arr[0]);
    for(int i=1;i<arr.size();i++){
        if(rep!=arr[i]){
            temp.push_back(arr[i]);
        }
        rep=arr[i];
    }
    return temp;
}

int main(){
    vector<int> array={1, 1, 2, 2, 3, 3};
vector<int> result=removeDuplicates(array);
for(auto i:result){
    cout<<i<< " ";
}
    return 0;
}