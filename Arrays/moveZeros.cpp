/*************  ✨ Codeium Command ⭐  *************/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()!=0){
            for(int i = 0 ; i<nums.size()-1 ; i++){
                for(int j = 0 ; j<nums.size()-i-1 ; j++){
                    if(nums[j]==0){
                        nums[j]=nums[j+1];
                        nums[j+1]=0;
                    }
                }
            }}
    }
};

int main() {
    Solution solution;
    vector<int> nums = {0,0, 1, 0, 3, 12};
    solution.moveZeroes(nums);
    
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
