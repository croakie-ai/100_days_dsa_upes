#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;
class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            int size=nums.size();
            unordered_map<int,int> mpp;
            for(int i=0;i<size;i++){
                int another=target-nums[i];
                if(mpp.find(another)!=mpp.end()){
                    return {mpp[another],i};
                }
                mpp.insert(nums[i],i);
            }
            return {};
        }
};

int main(){


    return 0;
}