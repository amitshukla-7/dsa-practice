#include <iostream>
#include <vector>
using namespace std;

int MooreAlgo(vector<int>nums){     //TC: O(n)
    int n = nums.size();
    int freq = 0; int ans = 0;
    for(int i =0;i<n;i++){
        if(freq==0){
          ans = nums[i];
        }
        if(ans ==nums[i]){
            freq++;}
        else{
            freq--;
        }

    }
    return ans;
   
}
int main(){
    vector<int>vec = {1,1,1,2,2,2,2,2};
    int result = MooreAlgo(vec);
    cout<<"Majority element is: "<<result;

    return 0;
}