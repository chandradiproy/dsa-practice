#include <iostream>
#include <vector>
#include <algorithm> // for reverse
using namespace std;
void reverseArr(vector<int> &nums, int start, int end) {
    while(start<end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;end--;
    }
}

void rotate(vector<int> &nums, int k) {
    k = k%nums.size();
    reverseArr(nums, 0 , nums.size()-1);
    reverseArr(nums,0,k-1);
    reverseArr(nums,k,nums.size()-1);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 5;
    rotate(nums, k);
    for (auto num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
