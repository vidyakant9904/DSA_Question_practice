#include<iostream>
#include<vector>
using namespace std;

void Min_Max_element_of_Array(vector<int>& arr , int n){
    int min = arr[0];
    int max = arr[1];
    for(int i = 0; i< n ; i++){
        if(min > arr[i]){
            min = arr[i];
        }
        else{
            max = arr[i];
        }
    }
    cout<< " minimum element of array : " << min << endl;
    cout<< " maximum element of array : " << max << endl;

}

int main(){
    vector<int> arr = {12,52,74,89,33,11,5,83};
    int n = arr.size();

    Min_Max_element_of_Array(arr , n);


    return 0;
}