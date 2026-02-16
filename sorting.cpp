
                     //Bubble Sort//


// #include <iostream>
// #include <vector>
// using namespace std;

// void bubbleSort(int arr[], int n){ //O(n^2) : nlogn
//     for(int i=0; i<n-1; i++){
//         bool isSwap = false;

//         for(int j=0; j<n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//                 isSwap = true;
//             }
//         }

//         if(!isSwap) { //array is already sorted
//             return;
//         }
//     }
// }

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main(){
//     int n = 5;
//     int arr[] = {4, 1, 5, 2, 3};
//     bubbleSort(arr, n);
//     printArray(arr, n);
//     return 0;
// }

                        //Selection Sort//

// #include <iostream>
// #include <vector>
// using namespace std;

// void selectionSort(int arr[], int n){ 
//     for(int i=0; i<n-1; i++){
//         int smallestIndex = i;
    
//      for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[smallestIndex]){
//                 smallestIndex = j;
//             }
//         }

//         swap(arr[i], arr[smallestIndex]);
//     }
// }

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main(){
//     int n=5;
//     int arr[] = {4, 1, 5, 2, 3};

//     selectionSort(arr, n);
//     printArray(arr, n);

// return 0;
// }



                 //Insertion Sort//

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int arr[], int n){

    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr; //placing the current in its correct position
    }

}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
}

int main(){
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
     
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
                