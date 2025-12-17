#include <iostream>
using namespace std;

int BinToDecimal(int BinNum){
    
    int ans = 0 ,pow = 1;
    
    while (BinNum > 0){
        int rem = BinNum % 10;
        ans += rem * pow;

        BinNum /=10;
        pow *=2;
    }
    return ans;

}
int main(){
    cout<<BinToDecimal(1011111);
return 0;
}