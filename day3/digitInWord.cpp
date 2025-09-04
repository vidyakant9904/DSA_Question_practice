// #include<iostream>
// #include<string>
// using namespace std;

// string digitToWord(int digit){
//     switch(digit){
//         case 0 : return "zero";
//         case 1 : return "one"
//         case 2 : return "two"
//         case 3 : return "Three"
//         case 4  : return "Four"
//         case 5  : return "Five"
//         case 6  : return "Six"
//         case 7  : return "Seven"
//         case 8  : return "Eight"
//         case 9  : return "Nine"
//         default : return "";

//     }
// }

// int convert_digit_into_word(int num){
//     if(num == 0){
//         cout<< "zero" << endl;
//         return;
//     }

//     string result = "";
//     string temp = to_string(num);

//     for(char c: temp){
//         int digit = c - '0';
//         result += digitToWord(digit) + " ";
        
//     }
//     cout<< result << endl;
// }

// int main(){
//     int num;
//     cout<< "enter your number : ";
//     cin>>num;

//     cout<< "Number in words: ";
//     convert_digit_into_word(num); 


//     return 0;
// }


//************ code  from GPT

#include<iostream>
#include<string>
using namespace std;

string digitToWord(int digit) {
    switch(digit) {
        case 0: return "Zero";
        case 1: return "One";
        case 2: return "Two";
        case 3: return "Three";
        case 4: return "Four";
        case 5: return "Five";
        case 6: return "Six";
        case 7: return "Seven";
        case 8: return "Eight";
        case 9: return "Nine";
        default: return "";
    }
}

void convertNumberToWords(int num) {
    if (num == 0) {
        cout << "Zero" << endl;
        return;
    }

    string result = "";
    string temp = to_string(num); // convert number to string to extract digits

    for (char c : temp) {
        int digit = c - '0';           // convert char → int
        result += digitToWord(digit) + " ";
    }

    cout << result << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Number in words: ";
    convertNumberToWords(num);

    return 0;
}

