#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:
    int removeElements(vector<int>&nums, int val)
    {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};

int main(){
    vector<int> nums={3,2,2,3};
    Solution obj;
    cout<<obj.removeElements(nums,3);
    return 0;
}