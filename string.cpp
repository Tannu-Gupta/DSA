#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    // char str[]= {'H', 'e', 'l', 'l', 'o', '\0'};
    // cout << str << endl;
    // cout << strlen(str) << endl;
    // cout << str[3] << endl;

    // int arr[] = {1, 2, 3, 4, 5};
    // cout << arr << endl; //prints address of first element

    // char str[100];

    // cout << "enter char array: ";
    // //cin >> str;
    // cin.getline(str, 100, '$'); //for taking input with spaces

    // cout << "output : " << str << endl;

    // char str[12];

    // cout << "enter char array :  ";
    // cin.getline(str, 12);

    // for(char ch : str){
    //     cout << ch << " ";
    // }

    // char str[] = "Tannu Gupta";
    // int len = 0;

    // for(int i=0; str[i] != '\0'; i++){
    //     len++;
    // }
    // cout << "length of string is : " << len << endl;

//     string str = "Tannu Gupta";
//     cout << str << endl;

//     str = "Ashish";
//     cout << str << endl;

//     char chArr[] = "Tannu Gupta";
//    // chArr = "Ashish"; //not allowed
//     cout << chArr << endl;

// string str1 = "Tannu";
// string str2 = "Gupta";

// // string str3 = srt1 + str2; //concatenation
// // cout << str3 << endl;

// cout << (str1 == str2) << endl;
// cout << (str1 < str2) << endl; //compares lexicographically
// cout << (str1 > str2) << endl;

// string str;

// getline(cin, str);

// cout << "output: " << str << endl;
                

                   //Loops//

// string str = "Tannu Gupta";

//  for(int i=0; i<str.length(); i++){
//     cout << str[i] << " ";
//  }
//  cout << endl;

// for(char ch: str){
//     cout << ch << " ";
// }
// cout << endl;


                   //Reverse String//

// string str = "Tannu Gupta";
 

//   reverse(str.begin(), str.end());
//   cout << str << endl;


                       //Palindrome String//

   string str = "racecar";
   
   for(int st=0, end=str.length()-1; st < end; st++, end-- ){
    

        if(str[st] != str[end]){
            cout << "Not a palindrome" << endl;
        } else {
            cout << "Palindrome" << endl;
        }
    
    }
     return 0;
}