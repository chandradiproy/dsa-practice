#include <iostream>
using namespace std;
void sort(int arr[], int n){
    for(int i = 0 ; i<n ; i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}
void display(int arr[], int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[5] = {8, 3, 7, 1, 5}; // Array of size 5 with random elements

    cout << "Array elements are: ";
    display(arr, 5);

    sort(arr, 5);

    cout << "\nSorted array elements are: ";
    display(arr, 5);

    return 0;
}

