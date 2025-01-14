#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

// int inversionCount(vector<int> &arr)
// {
//     int n = arr.size();
//     // unordered_map<int, int> mp;
//     int count = 0;
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             if(arr[i]>arr[j]){
//                 // cout<<"("<<arr[i]<<", "<<arr[j]<<")"<<endl;
//                 count++;
//             }
//         }
//     }
//     return count;


// }
void merge(vector<int> &arr , int low, int mid, int high, int &count){
    vector<int> temp;
    int i = low, j = mid+1, k = low;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;

        }else{
            temp.push_back(arr[j]);
            count += mid-i+1;
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=high){
        temp.push_back(arr[j++]);
    }
    for(int i = low; i<=high; i++){
        arr[i] = (temp[i-low]);
    }
}

void mergeSort(vector<int> &arr, int low, int high, int &count){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(arr, low, mid, count);
        mergeSort(arr, mid+1, high, count);
        merge(arr, low, mid, high, count);
    }
}
int inversionCount(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    mergeSort(arr, 0, n-1, count);
    return count;


}

int main(int argc, char const *argv[])
{
    vector<int> arr1 = {1, 20, 6, 4, 5};
    cout<<"Inversion Count = "<<inversionCount(arr1)<<" Expected = 5"<<endl;
    
    vector<int> arr2 = {1, 2, 3, 4, 5};
    cout<<"Inversion Count = "<<inversionCount(arr2)<<" Expected = 0"<<endl;
    
    vector<int> arr3 = {5, 4, 3, 2, 1};
    cout<<"Inversion Count = "<<inversionCount(arr3)<<" Expected = 10"<<endl;
    
    vector<int> arr4 = {1};
    cout<<"Inversion Count = "<<inversionCount(arr4)<<" Expected = 0"<<endl;
    vector<int> arr5 = {2,4,1,3,5};
    cout<<"Inversion Count = "<<inversionCount(arr5)<<" Expected = 3"<<endl;

    
    
    return 0;
}
