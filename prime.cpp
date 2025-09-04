#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     int num;
//     cout << "enter you number : ";
//     cin>> num;

//     if(num%num == 0 && num%1 ==0){
//         cout<< " this is a prime number";
//     }
//     else{
//         cout << " it not a prime number";
//     }
// }


// question 1-> WAP to get the sum of the digits of number

// int main(){
//     int num;
//     cout<<"enter your number: ";
//     cin>>num;

//     int sum = 0;
//     while(num != 0){
//        int digit = num%10;
//        sum = sum+ digit;
//        num = num/10;  //this division is because to remove the last digit from the numbre after taking modulous;
//     }
    
//     cout <<"sum of all digits is: "<< sum<< endl;

// }






// quesiton 2-> WAP to get febonacci series;

// void febSeries(vector<int>& arr, int n){
//     //int n = arr.size();
//     arr[0] = 0;
//     arr[1] = 1;
//     for(int i = 2; i< n; i++){
//         arr[i] = arr[i-1] + arr[i-2];
//     }
// }

// int PrintArray(vector<int> &arr, int n){
//     for(int i=0; i<n ; i++){
//         cout<< arr[i] << " ";
//     }
//     cout<< endl;// to print arrya in horizontal line;
// }

// int main(){
//     int n ;
//     cout << "enter the number upto which febonacci series you want: ";
//     cin>> n;
 
//     vector<int>arr(n);
//     febSeries(arr, n);
//     PrintArray(arr , n);

//     return 0;
// }






// question 2-> WAP to find wehther a 3-digit given number is Armstrong or not? i.e 153 => 1^3+5^3+3^3

// int main(){
//     int num ;
//     cout<< "enter you number: ";
//     cin>> num;

//     int sum = 0;
//     while(num != 0){
//         int digit = num %10;
//         sum = sum + digit*digit*digit;
//         num = num/10;
//     }   
    
//         if(sum == num){
//             cout << "This number is Armstrong number";
//             cout<< endl;
//         }
//         else{
//             cout<< "it is not a Armstrong number";
//         }; 

// };
