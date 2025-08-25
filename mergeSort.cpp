#include<iostream>
using namespace std;
#include<vector>

void merge(vector<int> &arr , int st , int mid, int end){
    vector<int> temp;
    int i = st , j = mid+1;

    while(i<= mid && j<= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<= end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int indx = 0; indx< temp.size(); indx++){
        arr[indx + st] = temp[indx];
    }
}

void mergeSorting(vector<int> &arr , int st, int end){
  if(st < end){
    int mid = st + (end - st)/2;

    mergeSorting(arr, st , mid); // for left half
    mergeSorting(arr, mid+1 , end); // for right half

    merge(arr,st , mid, end );
  }
}

int main(){
  vector<int> arr = {5,2,4,7,1,3,2,6};
  mergeSorting(arr , 0 , arr.size()-1);

  for(int val: arr){
    cout<< val << " ";
  }
  cout << endl;
  return 0;
}