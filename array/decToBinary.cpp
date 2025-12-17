#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0,pow = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum = decNum/2;
        ans += (rem*pow);
        pow *= 10;
    }
    return ans;

}
int main(){
    cout<<decToBinary(597);
    return 0;
}