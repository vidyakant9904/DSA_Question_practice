#include<iostream>
using namespace std;

// int addAllDigit(vector<int> arr){
//     int
// }

int main(){
    // int digit;
    
    // int num;
    // cout<< " Enter you ;


    int n ;
     cout<< "enter the number";
     cin>> n

    int sum = 0;
    while(n != 0){
        int digit = n%10;
       sum = sum+digit;
        n /=10;
        n = n/10;

    }
    return 0;

}