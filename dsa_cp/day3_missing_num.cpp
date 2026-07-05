#include<vector>
#include<iostream>
using namespace std;

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n=arr.size()+1;
      int xor1=0;
      int xor2=0;
      
      for(int i=1;i<n;i++){
          xor1=xor1^i;
      }
      for(int i=0;i<n-1;i++){
          xor2=xor2^arr[i];
      }
      xor1=xor1^n;
      return xor1^xor2;
        
    }
};

int main(){
    return 0;
}