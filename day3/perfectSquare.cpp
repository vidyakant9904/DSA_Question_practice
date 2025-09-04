#include<iostream>
#include<cmath>
using namespace std;

int isPrefectSquare(int num){
if(num < 0){
    cout<< "negative number can not be a perfect square";
}

    int root = sqrt(num);
    if(root*root == num){
        cout<<"This number is perfect square"<<endl;
    }
    else{
        cout<< "not it is not a perfect square" << endl;
    }
    return 0;
    
}


int main(){
    int num;
    cout<<"enter your number : ";
    cin>> num;

    isPrefectSquare(num);


    return 0;
}