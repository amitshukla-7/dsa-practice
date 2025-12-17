#include <iostream>
#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        int original = n*(n+1)/2;
         for(int val: nums){
            ans +=val;
         }

         return original - ans;
    }
};
int main(){

    std::vector<int>nums = {0,1};
    Solution s;
    int result =s.missingNumber(nums);
    std::cout<<result;

    
    return 0;
}