#include<iostream>
#include<climits>
using namespace std;
   int main(){
     int arr[7] = {45,85,45,36,88,2,74};
     int n = 7;

    //to search largest element form the array
int ans = INT_MIN;
   for(int i = 0; i <= n-1; i++){
    if(arr[i] >= ans){
        ans = arr[i];
    }
}

// to search second largest element from the same array
int second = -1;
    for(int i = 0; i<= n-1; i++){
        if(arr[i]  != ans){
            second = max(second, arr[i]);
        }
    }

int third = -1;
    for(int i=0; i<= n-1; i++){
        if(arr[i] !=  ans && arr[i] != second ){
            third  = max(third, arr[i]);
        }
    }

    cout << " largest element in this array: " << ans <<endl;
    cout<< " second largest element in this array: " << second << endl;
    cout<< " third largest element in this array: " << third << endl;

   return 0;


   }