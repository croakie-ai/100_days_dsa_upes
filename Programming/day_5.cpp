// Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

// Input:
// - First line: integer p (number of entries in server log 1)
// - Second line: p sorted integers representing arrival times from server 1
// - Third line: integer q (number of entries in server log 2)
// - Fourth line: q sorted integers representing arrival times from server 2)

// Output:
// - Print a single line containing all arrival times in chronological order, separated by spaces

// Example:
// Input:
// 5
// 10 20 30 50 70
// 4
// 15 25 40 60

// Output:
// 10 15 20 25 30 40 50 60 70

// Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed

#include<iostream>
#include<vector>
using namespace std;
vector<int> merge_two_arrays(vector<int> log1, vector<int> log2){
    vector<int> temp;
    int size1=log1.size();
    int size2=log2.size();
    int left=0;
    int right=0;
    while(left<size1&&right<size2){
        if(log1[left]>log2[right]){
            temp.push_back(log2[right]);
            right++;
        }
        if(log1[left]<log2[right]){
            temp.push_back(log1[left]);
            left++;
        }
    }
    while(left<size1){
        temp.push_back(log1[left]);
        left++;
    }
    while(right<size2){
        temp.push_back(log2[right]);
            right++;
    }
return temp;
}

int main(){
   vector<int> log1={10,20,30,50,70};
   vector<int> log2={15,25,40,60};

vector<int> merged= merge_two_arrays(log1,log2);
cout<<"Merged Array:"<<endl;
for(auto i:merged){
    cout<<i<<" ";
}

    return 0;
}