#include<iostream>
#include<vector>
using namespace std;

int frequency_of_even_number(vector<int>& arr ,int n){
    int count = 0;
    for(int i = 0; i<n ; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
   // cout<<count<<" even numbers are present in this array"; ----> this syntax when we use the " void "s
   return count;
}



int main(){
    vector<int> arr = { 5,8,7,9,6,4,5,3,5,8,55,14,23,85};
    int  n = arr.size();

   int even_numbers =  frequency_of_even_number(arr , n);
   cout<< even_numbers << " even no. are present in this array";
    return 0;
}