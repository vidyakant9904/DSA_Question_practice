// 2-> find the maximum and minimum value of the array

#include<iostream>
using namespace std;

void maxminValue(int arr[] , int n){
    // let us assume firt value of array is the maximum and minimum value 
    int maxValue = arr[0];
    int minValue = arr[0];

    for(int i=1; i<n ; i++){
        if(minValue > arr[i]){
           minValue = arr[i]; // update the value of minValue
        }
        if(maxValue < arr[i]){
            maxValue = arr[i]; // update the value of maxValue
        }
       
    }
        cout<< "minimum value is -> " << minValue << endl;
        cout<< "maximum value is -> " << maxValue << endl;  
}

int main(){
   int  arr[] = {64,9,36,51,33,40,10};

   // here with the help of this formula we can calculate the size of an array ------ sizeof(arr) is the size of entire array 
   int n = sizeof(arr)/sizeof(arr[0]);
   maxminValue(arr, n);
}
