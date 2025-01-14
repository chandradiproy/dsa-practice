#include<iostream>
#include<vector>
using namespace std;

int maxProduct(vector<int>& nums) {
    int maxProduct = INT32_MIN, prefix=1, suffex = 1, n = nums.size();
    for(int i = 0 ; i<n ; i++){
        if(prefix == 0) prefix = 1; //left to right
        if(suffex == 0) suffex = 1; //right to left
        prefix *= nums[i];
        suffex *= nums[n-1-i];
        maxProduct = max(maxProduct, max(prefix, suffex));
    }
    
    return maxProduct;
}

int main(int argc, const char** argv) {
    vector<int> nums = {2,-5,-2,-4,3}; //24


    cout<<maxProduct(nums)<<endl;
    return 0;
}
