#include<iostream>
using namespace std;

int secondLargest(int arr[], int n){
    int largest = arr[0], secondLargest = -1;
    for(int i = 1 ; i<n ; i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    // return largest;
    return secondLargest;
}
int secondSmallest(int arr[], int n){
    int fsmall = arr[0], ssmall = INT32_MAX;
    for(int i  = 1 ; i<n ; i++){
        if(arr[i]<fsmall){
            ssmall = fsmall;
            fsmall = arr[i];
        }
        if(fsmall>arr[i] && arr[i]<ssmall){
            ssmall = arr[i];
            cout<<ssmall<<endl;
        }
    }
    return ssmall;
}
int main()
{
    int arr[10] = {10, 3, 12, 2, 13, 11, 5, 1, 15, 14};
    cout << "Second largest element in the array is: " << secondLargest(arr, 10) << endl;
    cout << "Second smalles element in the array is: " << secondSmallest(arr, 10) << endl;
    return 0;
}

