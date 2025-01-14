#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j = i+1;j < n; j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int l = j+1 , k=n-1;
                while(l<k){
                    int sum = nums[i]+nums[j]+nums[l]+nums[k];
                    if(sum == target){
                        ans.push_back({nums[i],nums[j],nums[l],nums[k]});
                        l++,k--;
                        while(l<k && nums[l] == nums[l-1] ) l++;
                        while(l<k && nums[k] == nums[k+1] ) k--;
                    }else if(sum<target){
                        l++;
                    }else{
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {2,2,2,2,2};
    int target = 0;
    Solution obj;
    vector<vector<int>> ans = obj.fourSum(nums, target);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}