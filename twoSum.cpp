#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    vector<int> ans;
    unordered_map<int,int> map  ;
    for(int i = 0 ; i<nums.size() ; i++){
        map[nums[i]] = i;
    }
    for(int i = 0 ; i<nums.size() ; i++){
        int reminder = target - nums[i];
        if((map.find(reminder) != map.end()) && (map[reminder]!=i)){
            ans.push_back(i);
            ans.push_back(map[reminder]);
            return ans;
        }
    }
    return {-1,-1};
}


int main(){
    vector<int> nums = {2,8,11,7};
    int target = 9;
    vector<int> ans = twoSum(nums, target);
    for(auto i:ans){
        cout<<i<<" ";
    }
}