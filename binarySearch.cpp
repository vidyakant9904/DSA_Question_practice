#include<iostream>
#include<vector>
using namespace std;

void binarySearch(vector<int> & arr ,int n, int key){
    int start =  0;
    int end = n-1;
    int mid;

    while(start <= end){
        int mid = (start + end)/2;

        if(arr[mid] == key){
            cout<<"number found at index: "<< mid << endl; 
            return;
        }
        else if(arr[mid] < key){
              start = mid + 1; 
            //end = mid - 1;   *********** commented logic will be for a descending order array but work same;
        }
        else{
             end = mid - 1;
           // start = mid + 1;
        }
    }
    cout<< " number not found"<< endl;

}

int main(){
    vector<int> arr = {7,9,12, 12 , 12 ,14,24,27,31,40,41,57};
  //  vector<int> arr = {45,22,21,14,5,2,1};
    int n = arr.size();

    int key ;
    cout<< "which number you want to search: ";
    cin>> key;
    cout<< endl;

    binarySearch(arr , n , key);
}