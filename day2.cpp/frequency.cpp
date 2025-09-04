#include<iostream>
#include<vector>
using namespace std;

void frequency_of_target_element(vector<int>& arr , int target, int n){
    int count = 0;
    for(int i = 0 ; i< n ; i++){
        if(arr[i] == target){
            count++;
        }
    }
     cout<< count;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,7,7,7,7,7,7,7,2,4,2,5,2,5,6,2,8,9,2,4,8,2};
    int n = arr.size();

    int target;
    cout<< "enter the target value : "<<endl;
    cin>>target;

    frequency_of_target_element(arr ,target, n);
    return 0;
}