
                  //Pirme Number//

// #include <iostream>
//  using namespace std;

//  string isPrime(int n){
//     for(int i=2; i*i <=n; i++){
//         if(n % i == 0){
//             return "Non Prime";
//         }
//     }
//     return "Prime";
//  }

//  int main(){
//     int n = 47;
//     cout << isPrime(n) << endl;
//     return 0;
//  }

                    //Sieve of Eratosthenes//

                      //Digits in a Number//

// #include <iostream>
// using namespace std;

//  void printDigits(int n) {
//         while(n != 0){             TC = O(log n)
//             int digit = n % 10;
//             cout << digit << " ";

//             n = n / 10;
//         }
//     }

//     int main(){
//     int n = 3568;

//     printDigits(n);
//     return 0;
// }

// void printDigits(int n) {
//     int count = 0;

//         while(n != 0){
//              int digit = n % 10;
//              count++;

//              n = n / 10;
//          }
//          cout << count << endl;
//      }

//      int main(){
//         int n = 3568;

//         printDigits(n);
//         return 0;
//      }


// void printDigits(int n) {
//     int sum = 0;

//         while(n != 0){
//              int digit = n % 10;
//              sum += digit;

//              n = n / 10;
//          }
//          cout << sum << endl;
//      }

//      int main(){
//         int n = 3568;

//         printDigits(n);
//         return 0;
//      }

// #include <cmath>

//      int main(){
//         int n = 3568;

//         cout << (int)(log10(n) + 1) << endl;      //no. of digits
//         return 0;
//      }


                     //Armstrong Number//

// #include <iostream>
// using namespace std;
    
// bool isArmstrong(int n){
//     int copyN = n;
//     int sumOfCubes = 0;

//     while(n != 0){
//         int digit = n % 10;
//         sumOfCubes += (digit * digit * digit);

//         n = n / 10;
//     }

//     return sumOfCubes == copyN;


// }


// int main(){
//    // int n = 153;
//     int n = 111;
//     if(isArmstrong(n)) {
//         cout << "Armstrong Number" << endl;
//     }
//     else{
//         cout << "Not an Armstrong Number" << endl;
//     }
//     return 0;
// }


                       //HCF or GCD (Euclid's Algorithm)//

// #include <iostream>
// using namespace std;   


//Method 1
// int gcd(int a, int b){
//     while(a>0 && b>0){
//         if(a > b){
//             a = a % b;
//         } else {
//             b = b % a;
//         }

//     }
//         if(a == 0)  return b;
//         else return a;
//         return 0;
//     }

//Method 2
// int gcdRec(int a, int b){
//     if(b == 0) return a;

//     return gcdRec(b, a % b);
// }

// int lcm(int a, int b){
//     int gcd = gcdRec(a, b);
//     return (a*b) / gcd;
// }

//     int main(){
//         cout << gcdRec(20, 28) << endl;
//         // cout << gcdRec(6, 12) << endl;
//         // cout << gcdRec(0, 24) << endl;

//         cout << lcm(20, 28) << endl;
//         return 0;
//     }






