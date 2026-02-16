//  #include <iostream>
//  using namespace std;

//  int main(){

    // int marks[5] = {99, 100, 54 , 36, 88};
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl; 

    // int size = 5;
    // cout << sizeof(marks) << endl;    //20
    // cout << sizeof(marks) / sizeof(int) << endl;   //5

              //Smallest /largest number in an array
   
    // int nums[] = {5, 15, 22, 1, -15, -24};
    // int size = 6;
    
    // int smallest = INT8_MAX;
    // int largest = INT8_MIN;
    
    // for(int i=0; i<size; i++){
    //     // if(nums[i] < smallest){
    //     //     smallest = nums[i];
    //     // }
     
    //     smallest = min(nums[i], smallest);
    //     largest = max(nums[i], largest);
    // }
    // cout << "smallest is " << smallest << endl;
    // cout << "largest is " << largest << endl;

               //PASS BY REFERENCE//

//     void changeArr(int arr[], int size){
//         cout << "Inside the function\n";
//         for(int i=0; i<size; i++){
//             arr[i] = 3* arr[i];
//         }
//     }

//     int main(){
//     int arr[] = {1, 2, 3, 4, 5};

//     changeArr(arr, 5);
//     cout << "in main\n";

//     for(int i=0; i<5; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
//  }

                 //Linear Search//

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int size, int target){
//     for(int i=0; i<size; i++){
//         if(arr[i] == target){    //FOUND
//             return i;
//         }
//     }
//     return -1; //NOT FOUND
// }

// int main(){
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int size = 7;
//     int target = 8;

//     cout << "Target found at index " << linearSearch(arr, size, target) << endl;
//     return 0;
// }

                    //REVERSE AN ARRAY//

#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz){
    int start = 0;
    int end = sz - 1;

    while (start < end){
    
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    reverseArray(arr, size);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
