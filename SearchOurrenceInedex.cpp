#include<iostream>
#include<vector>
using namespace std;

pair<int, int>  OcurrenceIndex(vector<int> & arr , int n , int key){
    int start = 0;
    int end = n-1;
    int first = -1  , last  = -1;


    // ************ for first index 
    start = 0 , end = n -1;
    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }


    // ****************** for last index 
    start = 0; end = n-1;
    
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            last = mid;
            start = mid + 1;
            
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return {first ,last};

}

int main (){
    vector<int> arr = {3,3,9,11,13,13,13,15,15,15};
    int n = arr.size();

    int key ;
    cout<< " enter the number for which first and last occurance you want : ";
    cin>> key;

    // to print first and last index
    pair<int,int> result = OcurrenceIndex(arr, n, key);

    if (result.first == -1) {
        cout << "Element not found..!" << endl;
    } else {
        cout << "First occurrence index: " << result.first << endl;
        cout << "Last occurrence index: " << result.second << endl;
    }

}