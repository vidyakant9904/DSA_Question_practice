#include<iostream>
using namespace std;
int  sqrRoot( int target){
    int start = 1 , end = target;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if( mid*mid == target){
            return mid;
        }
        else if( mid*mid < target){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
}

int main(){
    int n ;
    cout<< "enter a number : ";
    cin>> n;

    cout <<" square root is " << sqrRoot(n) << endl;
    return 0;
}