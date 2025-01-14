#include<iostream>
#include<vector>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int size1 = nums1.size();
    int size2 = nums2.size();
    vector<int> res;
    int i=0,j=0;

    while(i<size1 && j<size2){
        if(nums1[i]!=nums2[j]){
            // cout<<nums1[i]<<" "<<nums2[j]<<endl;
            i++;
        }
        if(nums1[i]==nums2[j]){
            res.push_back(nums1[i]);
            // cout<<nums1[i]<<" "<<nums2[j]<<endl;
            i++;
            j++;
        }
    }
    return res;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 4};
    vector<int> nums2 = {2, 2, 4};
    vector<int> res = intersection(nums1, nums2);
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}

