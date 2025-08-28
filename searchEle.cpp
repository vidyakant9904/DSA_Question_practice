#include<iostream>
using namespace std;
#include<vector>


// int  search( int arr[]  , int n){
//     int ans= 89;
//     for(int i =0; i<n ; i++){
//         if(arr[i] == ans)
//         return i;
//     }
//     return -1;  
// }

// int main(){
//     int arr[6] = {8,9,47,2,5,89};

//    int index =  search(arr,6);
//    if(index != -1){
//     cout<< "enlement found at index: " << index <<endl;
//    }else{
//     cout<< "element not found " << endl;
//    }
// return 0;

// }

void reverseArray(int arr[], int n){
    int start = 0;
    int end= n-1;
        while(start < end){
       swap(arr[start] , arr[end]);
       start++;
       end--;
        }
    
}

int printArray(int arr[], int n){
    for (int i=0 ; i<=n-1 ;i++){
        cout<< arr[i] << " ";
      
    }
     cout<< endl;
    
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,n);
    reverseArray(arr , n);  
     printArray(arr,n);
}

