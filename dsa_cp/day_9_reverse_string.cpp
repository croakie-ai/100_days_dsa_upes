#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;

        while(left<=right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
};

int main(){
    Solution obj;
    vector<char> s={'H','E','L','L','O'};
    obj.reverseString(s);
    for(auto i : s){
        cout<<i;
    }
    return 0;
}