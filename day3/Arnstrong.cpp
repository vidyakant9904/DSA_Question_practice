#include<iostream>
using namespace std;

int IsArmstrong(int num){
    int original = num;
    int sum = 0;
    while(num != 0){
        int digit = num%10;
        sum += digit*digit*digit;
        num = num/10;
    }
    if(sum == original){
        cout<<"yes,it is a Armstrong number";
    }
    else{
        cout<< "no, it is not a armstrong number";
    }
    
    return 0;
}

int main(){
    int num;
    cout<< "enter your number : ";
    cin>> num;

       IsArmstrong(num);

    return 0;
}