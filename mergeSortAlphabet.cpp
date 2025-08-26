#include<iostream>
using namespace std;
#include<vector>

void merge(vector<string> &arr , string st , string mid , string end){
    
    vector<string> temp ;
    int i = st , j = mid +1;

    while( i<= mid && j<= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
        } else{
            temp.push_back(arr[j]);
        }
    }

    while(i<= mid){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
        }
    }

    while(j<= end){
        if(arr[i] >= arr[j]){
            temp.push_back(arr[j]);
        }
    }
     for(int indx = 0; indx< temp.size(); indx++){
        arr[indx + st] = temp[indx];
    }
}

void mergeSorting(vector<string> &arr , int st, int end){
    if(st < end){
        int mid = st + (end - mid)/2;

        mergeSorting(arr , st , end);
        mergeSorting(arr , mid+1 , end);

        merge(arr , st , mid , end);

    }
}

int main(){
    vector<string> arr = {"watermealon","cherry", "pinapple" , "guava", "apple"};
     mergeSorting(arr , 0 , arr.size()-1);

  for(string val: arr){
    cout<< val << " ";
  }
  cout << endl;
  return 0;
    
}