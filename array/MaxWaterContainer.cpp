#include <iostream>
#include <vector>
using namespace std;

//brute force approach
//TC: O(n^2)

int MaxWater(vector<int>& height){
    int maxWater = 0;
    for(int i= 0;i<height.size();i++){
        for(int j=i+1;j<height.size();j++){
            int width = j-i;
            int ht = min(height[i],height[j]);
            int curr_water = ht * width;

            maxWater = max(maxWater,curr_water);

        }

    }
    return maxWater;

}
//Two pointer approach
//TC: O(n)
int maxContainer(vector<int>& height){
    int n = height.size();
    int Max_water = 0;
    int lp = 0;
    int rp = n-1;
    while(lp<rp){
        int width = rp -lp;
        int ht = min(height[lp],height[rp]);
        int curr_water = ht * width;
        Max_water = max(curr_water,Max_water);
        height[lp]<height[rp]?lp++ : rp--;

    }
   
    return Max_water;

}


int main(){
    vector <int> height = {2,3,4,5,2,5,3};
    
    int max_water = MaxWater(height);
    cout<<"With brute force approach: ";
    cout<<max_water<<endl;
    cout<<"With two pointer approach : ";
    int Max_water = maxContainer(height);
    cout<<Max_water;

    return 0;
}