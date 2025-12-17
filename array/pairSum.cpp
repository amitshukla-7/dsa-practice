#include <iostream>
#include <vector>
using namespace std;

vector<int>BruteForce(vector<int>nums,int target){
    vector<int>ans;                         //TC: O(n^2)
    int n = nums.size();
    for(int i =0; i<n;i++){
        for(int j = i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

vector<int>optimal(vector<int>nums,int target){
    vector<int>ans;                 // TC: O(n)
    int n = nums.size();
    int i =0 ,j = n-1;
    while(i<j){
        int pairsum = nums[i]+nums[j];
        if(pairsum <target){
            i++;
        }
        else if(pairsum>target){
            j--;
            
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
    }
    return ans;

}
int main(){
    vector<int> vec = {10,15,20,2,4};
    int target = 14;
    vector<int>ans= BruteForce(vec,target);
    cout<<ans[0]<<","<<ans[1]<<endl;

    cout<<"using Optimised approach:\n";      
    vector <int> ans2 = optimal(vec,target);
    cout<<ans[0]<<","<<ans[1]<<endl;

    return 0;
}