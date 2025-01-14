#include<iostream>
#include<vector>
using namespace std;

int longestSubArrWithKSum(vector<int> arr, int k){
    int i =0 , j=1, sum=arr[0];
    int maxLen = 0, n = arr.size();
    while(j<n){
        while(sum>k && i<=j){
            sum-=arr[i];
            i++;
        }
        if(sum == k){
            maxLen = max(maxLen, j-i+1);
        }
        j++;
        if(j<n) sum+=arr[j];
    }
    return maxLen;
}



int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 5;
    cout<<longestSubArrWithKSum(arr, k)<<endl;

}