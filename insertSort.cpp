#include<iostream>
#include<vector>
using namespace std;

void insertSort(vector<int> & arr , int n){
    for(int i = 1; i < n; i++){
        for(int j = i; j> 0; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }else
            break;
        }
    }
}

// **************** it is same but the sorting will start from the second last element i.e this time we will compare bigger no. with the smaller one and so on .......................
// void insertSort(vector<int> & arr , int n){
    
//         for(int i = n-2; i >= 0; i--){
//         for(int j = i; j< n-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j] , arr[j+1] );
//             }else
//             break;
//         }
//     }
// }

int main(){
    vector<int> arr = {4,5,8,22,44,2,11,44,2};

    int n = arr.size();

    cout<< "original array : ";
    for(int val : arr){
        cout<< val << " ";
    }
    cout << endl;

      insertSort(arr , n);

    cout<< "sorted array   : ";
    for(int val: arr){
        cout<< val << " ";
    }
    cout<< endl;
    return 0;
}


