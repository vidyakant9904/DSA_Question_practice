#include<iostream>
#include<vector>
using namespace std;


    int CountOddEven(vector<int>& arr , int n){
        int EvenCount = 0;
        int OddCount = 0;
        for(int i = 0; i<n ; i++){
            if(arr[i] % 2 == 0){
                EvenCount++;
            }
            else{
                OddCount++;
            }
        }
                    cout<< EvenCount<< " even no. are present" << endl << OddCount<< " odd no. are present ";

        return 0;
    }

int main(){
    vector<int> arr = {2,3,8,6,1,5,9,11,8};
    int n = arr.size();

    int count = CountOddEven(arr , n);
    //cout<< count<< endl;

    return 0;
}