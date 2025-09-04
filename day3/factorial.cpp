#include<iostream>
using namespace std;

int factorial(int n){
int fact = 1;
  for(int i = 1; i<=n ; i++){
    fact = fact*i;
  }
  cout<<"factorial of number "<< n<< " is "<< fact<<endl;
  return 0;
}

int main(){
    int n ;
    cout<< "enter your number : ";
    cin>> n;
    factorial(n);

    return 0;
}