#include<iostream>
#include<vector>
using namespace std;

// void select(vector<int> & arr, int n){
//      for(int i= 0; i< n-1; i++){
//         int minIndex = i;
//         for(int j = i+1; j< n; j++){
//             if(arr[j]< arr[minIndex]){
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);
//      }
// }

// int main(){
//     vector<int> arr = {10,7,5,9,2,85,1};

//     int n = arr.size();

//         cout << "Original array: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << endl;

//     select(arr, n);

//     cout << "Sorted array: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << endl;
 
//     return 0;
// }


void maxSelect(vector<int> & arr,int n){
    for(int i = 0; i< n-1; i++){
       int  maxIndex = i;
       for(int j = i+1; j< n; j++){
        if(arr[j]> arr[maxIndex]){
            maxIndex = j;
        }
       }
       swap(arr[i], arr[maxIndex]);
    }
}

int main(){
    vector<int> arr = {10,4,8,2,12,6};

    int n = arr.size();

    
        cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    maxSelect(arr, n);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}