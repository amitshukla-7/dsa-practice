#include <iostream>
#include <vector>
using namespace std;

bool canAliceWin(vector<int>& nums) {
    int n = nums.size();
    int singleSum = 0;
    int doubleSum = 0;
    for(int i =0; i<n ; i++){
        if(nums[i] >0 && nums[i] < 10){
            singleSum += nums[i];
            }
            if(nums[i] >= 10 && nums[i]< 100){
                doubleSum += nums[i];
            }
            
        }
    int total = singleSum + doubleSum;
    return max(singleSum,doubleSum) > total - max(singleSum,doubleSum);
}

int main(){
    vector<int> nums = {2,3,4,5,14};
    bool result = canAliceWin(nums);
    cout<<result;
    return 0;
}