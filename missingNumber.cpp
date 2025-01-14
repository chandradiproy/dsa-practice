
#include <algorithm>
#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    // int missingNumber(vector<int>& nums) {
    //     std::sort(nums.begin(),nums.end());

    //     for(int i = 0 ; i<nums.size()-1 ; i++){
    //         if(nums[i+1] - nums[i] != 1 ){
    //             return nums[i]+1;
    //         }
    //     }
    //     return nums.size();
    // }
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expected_sum = (n*(n+1))/2;
        int sum=0;
        for(int num : nums){
            sum+=num;
        }
        return expected_sum-sum;

        
    }
};


/*************  ✨ Codeium Command ⭐  *************/
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums = {0,1};

    // cout<<nums.size()<<endl;
    cout<<s.missingNumber(nums);
    return 0;
}
