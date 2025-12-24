#include <iostream>
#include <vector>
#include <Algorithm>
using namespace std;

    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        long long totalApples = 0;
        for (int a : apple) {
            totalApples += a;
        }

        sort(capacity.begin(), capacity.end(), greater<int>());

        long long currentCapacity = 0;
        int boxesUsed = 0;

        for (int cap : capacity) {
            currentCapacity += cap;
            boxesUsed++;
            if (currentCapacity >= totalApples) {
                return boxesUsed;
            }
        }

        return boxesUsed;
    }

int main(){
    vector<int> vec = {1,2,3};
    vector<int> capacity= {4,3,1,5,2};
    int result = minimumBoxes(vec,capacity);
    cout<<result;
    return 0;
}
