#include <iostream>
#include <vector>
using namespace std;

vector<int> BruteForce(vector<int>& nums){ //TC: O(n^2)
    vector<int> ans(nums.size(),1);
    
    for(int i = 0; i<nums.size();i++){
        for(int j =0;j<nums.size();j++){
            if(i != j){
                ans[i] *= nums[j];
            }
        }
        
    }
    return ans;
    

}

vector<int> optimal(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,1);

    for(int i=1; i<n; i++){
        ans[i] = ans[i-1] * nums[i-1];

    }
    int suffix = 1;
    for(int i = n-2 ; i>=0 ; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    return ans;
}


int main(){
    vector<int> nums = {2,3,9,5,3};
    vector<int> result = BruteForce(nums);
    cout<<"With brute force approach: \n";
    for(int val: result){
        cout<<val<<" ";
    }
    cout<<endl;
    
    vector<int>result2 = optimal(nums);
    cout<<"With optimal approach: \n";
    for(int val: result2){
        cout<<val<<" ";
    }
    
    return 0;
}