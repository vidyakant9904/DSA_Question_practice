#include<iostream>
using namespace std;

int n_square_sum(int n){
    int sum = 0;
//     for(int i = 0; i<=n; i++){
//         sum = sum + i*i;
//    }
//    cout<<"sum of first n natural number square : "<< sum<<endl;

      // using formula
  int formulSum = (n*(n+1)*(2*n+1))/6;
  // int formulaSum = (n * (n + 1) * (2 * n + 1)) / 6;
    cout<<"sum of first n natural number square : "<< formulSum<<endl;

   return sum;

}

int main(){
    int n;
    cout<< "enter your number : ";
    cin>>n;

    n_square_sum(n);


    return 0;
}