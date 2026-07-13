#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=-1;

        for(int j=0;j<nums.size();j++){
            if(nums[j]==0){
                i=j;
                break;
            }
        }
        if(i==-1){
            return ;
        }
        for(int m=i+1;m<nums.size();m++){
            if(nums[m]!=0){
                swap(nums[i],nums[m]);
                i++;
            }
        }

    }
};

int main(){
    return 0;
}