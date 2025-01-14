#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subArraySumEqualsK(vector<int> &nums, int k){
    int preFixSum = 0, count = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for(auto i : nums){
        preFixSum += i;
        if(mp.find(preFixSum - k) != mp.end()){
            count += mp[preFixSum-k];
        }
        mp[preFixSum]++;
    }
    return count;
}

int main(){
    vector<int> nums = {1,2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 5;
    cout << subArraySumEqualsK(nums, k);
}