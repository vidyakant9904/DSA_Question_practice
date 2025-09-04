#include<iostream>
using namespace std;

int IsPalindrome(int num){
    int original = num;
    int reverse = 0; 
    while( num != 0){
        int digit = num % 10;
        reverse = reverse*10+ digit;
        num = num/10;
    }
    if(reverse == original){
        cout<< "wow! this is palindrome......"<< endl;
    }
    else{
        cout<< "noops! this is not a palindrome";
    }
    return 0;
}

int main(){
    int num;
    cout<< "enter you number : ";
    cin>> num;

    IsPalindrome(num);

    return 0;
}