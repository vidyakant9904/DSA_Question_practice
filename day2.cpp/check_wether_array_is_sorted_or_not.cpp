#include<iostream>
#include<vector>
using namespace std;

bool is_array_sorted_or_not(vector<int>& arr , int n){
    for(int i = 0; i<n-1 ; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int n = arr.size();

   if(is_array_sorted_or_not(arr , n)){
     cout<< " Array is sorted"<< endl;
   }
   else{
     cout << " Array is  not sorted";
} 

    return 0;
}
