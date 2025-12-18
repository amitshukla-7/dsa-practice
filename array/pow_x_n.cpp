#include <iostream>
using namespace std;

double pow(double x,int n){        //TC : O(n)
    long binform = n;
    double ans = 1;
    if(n<0){
        x = 1/x;
        binform = -binform;
    }
    while(binform>0){
        if(binform % 2==1){
            ans *=x;
        }
        x *=x;
        binform /= 2;
    }
    return ans;
}
int main(){
    int result = pow(3,2);
    cout<<result;
    return 0;
}



