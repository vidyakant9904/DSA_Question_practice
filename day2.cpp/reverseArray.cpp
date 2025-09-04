#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr, int n){
    int start = 0;
    int end = n -1;
    while(start < end){
       // for(int i= 0; i<n/2; i++){    -------------> because we have to just swap half on the array than other half will automatically revese
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void printArray(vector<int> & arr, int n ){
    for(int i = 0; i< n ; i++){
        cout<< arr[i] << " ";
    }
     cout<<endl;
}

int main(){
     vector<int> arr = {1,2,3,4,5,6,7,8,9};
     int n = arr.size();

     cout<< "Original Array : " ;
     printArray(arr ,n);

      reverseArray(arr , n);
     cout<< "reversed Array : ";
     printArray(arr , n);
    return 0;
}


     
