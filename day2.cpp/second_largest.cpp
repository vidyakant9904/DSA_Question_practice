#include<iostream> 
#include<vector> 
using namespace std;

void second_largest_element_of_Array(vector<int> arr , int n){
    int firstMax = arr[0];
    int secondMax = arr[0];
    for(int i =1; i<n ; i++){
        if(arr[i] > firstMax){
          firstMax = arr[i];
        }
    }
    for(int i =0; i<n ; i++){
        if( arr[i] > secondMax && arr[i] != firstMax){
         secondMax = arr[i];
        }
    }
    cout<<" first largest element is : " << firstMax << endl << " second largest element of array is : " << secondMax;
}

int main(){
    vector<int> arr = {4,85,63,2,4,5,6,88,91,21};
    int n = arr.size();

    second_largest_element_of_Array(arr , n);
    return 0;
}