#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums){   //TC : O(n)
    int n = nums.size();
    int low = 0, mid= 0, high = n-1;

    while(mid<= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            mid++; low++;
        }
        else if(nums[mid] ==1){
            mid++;
        }
        else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }

}
int main(){
    vector<int> nums = {2,0,1};
    sortColors(nums);
    for(int val : nums){
        cout<<val<<" ";
    }
    return 0;
}