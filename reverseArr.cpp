#include<iostream>
using namespace std;

// this is function to reverse the array-----
void reverse(int arr[], int n){
    int start = 0;
    int end = n - 1;
    for(int i=0 ; i < n ; i++){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

// this is function to print array-------
void printArray(int arr[], int n){
    for(int i = 0; i<= n-1; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}


int main(){
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int brr[9] = {9,8,7,6,5,4,3,2,1};

    // this is function call of function printArray
    printArray(arr , 9);
    printArray(brr , 9);
    
    // this is function to call reverse function 
    reverse(arr, 9);
    reverse(arr, 9);
}