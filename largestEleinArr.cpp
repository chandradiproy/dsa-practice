#include<iostream>
using namespace std;

int largest(int arr[], int n){
    int largest = arr[0];
    for(int i = 0 ; i<n ; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[10] = {1,2,3,4,15,6,7,8,9,10};
    cout << "Largest element in the array is: " << largest(arr, 10) << endl;
    return 0;
}
