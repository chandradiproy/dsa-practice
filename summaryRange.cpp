#include "iostream"
#include "vector"
#include "string"
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
            cout<<"Size = "<<nums.size()<<endl;
        if(nums.size() == 0){
            return {};
        }

        if(nums.size() == 1){
            return {to_string(nums[0])};
        }
        int a = 0, b = 0;
        vector<string> res;
        for(int i = 0 ; i<nums.size()-1 ; i++){
            if(i==0){
                a=nums[i];
                b=nums[i];
            }
            if((nums[i+1] - nums[i]) == 1){
                b=nums[i+1];
            }else{
                if(a==b){
                    res.push_back(to_string(a));
                }else{
                    res.push_back(to_string(a)+"->"+to_string(b));
                }
                a=nums[i+1];
                b=nums[i+1];
            }
            
            if(i+1 == nums.size()-1){
                if(a==b){
                    res.push_back(to_string(a));
                }else{
                    res.push_back(to_string(a)+"->"+to_string(b));
                }
            }
            
            
        }
        return res;
    }
};


int main(int argc, char const *argv[])
{
    Solution obj;
    // vector<int> nums = {0,1,2,4,5,7};
    // vector<int> nums = {0,2,3,4,6,8,9};
    vector<int> nums = {-2147483648,-2147483647,2147483647};
    vector<string> range = obj.summaryRanges(nums); 
    for(int i = 0 ; i<range.size() ; i++){
        cout<<range[i]<<" ";
    }

    return 0;
}
