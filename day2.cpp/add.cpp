#include<iostream>
#include<vector>
using namespace std;

 void Add_all_Element_of_Array(vector<int>& arr ,int n){
    int sum  = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    cout<< " sum of all Element of array : "<< sum <<endl;
}

void printArray(vector<int>& arr , int n){
    for(int i =0 ; i<n ; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int n = arr.size();

   cout<< "Original Array : ";
   printArray(arr , n);

  Add_all_Element_of_Array(arr , n);
    return 0;
}