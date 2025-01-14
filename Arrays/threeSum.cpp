#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i = 0; i < n ; i++) {
        if(i>0 && nums[i] == nums[i-1]) {
            continue;
        }
        int j = i+1, k = n-1;
        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum > 0){
                k--;
            }else if(sum < 0){
                j++;
            }else{
                ans.push_back({nums[i], nums[j], nums[k]});
                j++,k--;
                while( j<k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
                
            }
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(nums);

    for (auto& triplet : ans) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
