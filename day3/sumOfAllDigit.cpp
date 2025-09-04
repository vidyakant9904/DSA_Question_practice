#include<iostream>
using namespace std;

int addDigit(int num){
    int sum = 0;
    while(num != 0){
        int digit = num%10;
        sum = sum + digit;
        num = num/10;
    }
    return sum;
}

int main(){
    int num;
    cout<< "enter you number : ";
    cin>> num;

   int result =  addDigit(num);
   cout<< "sum of all digits of "<< num<< " is " << result << endl;
    
    return 0;
}