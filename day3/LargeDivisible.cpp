#include<iostream>
#include<vector>
using namespace std;

int LargeNum_is_divisible_by_six(vector<int>& arr , int n){
    int largest = arr[0];

    for(int i = 0; i<n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    if(largest%6 == 0){
        cout<<"yes, largest element of this array is divisible by 6"<< endl;
    }
    else{
        cout<< "No, largest element of this array is not divisible by 6";
    }
    return 0;
}

int main(){
    vector<int> arr = {8,7,73,9,2,4,36,45};
    int n = arr.size();

    int result = LargeNum_is_divisible_by_six(arr , n);

    return 0;
}