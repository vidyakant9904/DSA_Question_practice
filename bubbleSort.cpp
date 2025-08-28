#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> & arr , int n){
    for(int i= n-2; i>=0; i--){
            bool swapped = 0;
        for(int j = 0; j<= i; j++){
                bool swapped = 1;
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
        if(swapped == 0) 
            break;
    }
}

int main(){
    vector<int> arr = {1,5,85,9,2,77,22,1,4};

    int n = arr.size();
    cout<<" Original array             : " ;
    for(int val : arr){
        cout<< val << " ";
    }
    cout << endl;

    bubbleSort(arr , n);

    cout<< "sorted arry with bubble algo: ";
    for(int val : arr){
        cout<< val<< " ";
    }
    cout<< endl;
    return 0;

}