#include<iostream>
using namespace std;

int  sumNums(int n){
    if(n == 1){
        //cout<< "1";
        return 1;
    }

    //cout << n << endl;

    return n +  sumNums(n - 1);
  
}

int main(){
    cout << sumNums(11000);
    return 0;

}

// #include<iostream>
// using namespace std;

// int sumNums(int n){
//     if(n == 1){
//         return 1;
//     }
//     return n + sumNums(n - 1);
// }

// int main(){
//     cout << sumNums(5);   // prints 15
//     return 0;
// }
