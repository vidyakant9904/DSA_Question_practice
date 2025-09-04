#include<iostream>
#include<vector>
using namespace std;

double AverageNumInArray(vector<int>& arr , int n){
    double sum = 0;
    for(int i = 0; i<= n-1 ; i++){
       sum += arr[i];

    }
    double avg = sum/n;
    return avg;
    
}

int main(){
   // vector<int> arr = { 8,5,7,6,9,2,4,6};
    vector<int> arr = {5,2,3,5,4,5,4,1};
    int n = arr.size();

   double result =  AverageNumInArray(arr , n);
   cout<<"Average number in the array is : "<< result<< endl;
   

    return 0;
}