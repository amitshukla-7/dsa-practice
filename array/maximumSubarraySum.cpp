#include <iostream>
#include <vector>
using namespace std;

void bruteForce(int arr[],int size){         // using brute force
                                             //TC : O(n^2)
    
    int maxSum = INT_MIN;

    for(int st= 0; st<size;st++){
        int current_sum = 0;
        for(int end = st;end<size;end++){
            current_sum += arr[end];
            maxSum = max(maxSum,current_sum);

        }
        
    }
     cout<<"The maxsum is: "<<maxSum<<endl;

}

void kadaneAlgo(int arr[],int size){          //TC : O(n)
    int maxSum = INT_MIN ,curr_sum = 0;
    for(int i = 0;i<size;i++){
        curr_sum += arr[i];
        maxSum = max(maxSum,curr_sum);
        if (curr_sum<0){
            curr_sum = 0;
        }
    }
    cout<<"The maxsum is: "<<maxSum;
}

int main(){   
    
    
    int arr[5] = {-3,4,9,-1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Output using brute force: \n";
    bruteForce(arr,size);

    cout<<"Output using Kadane's Algorithm: \n";
    kadaneAlgo(arr,size);


    
    return 0;
}