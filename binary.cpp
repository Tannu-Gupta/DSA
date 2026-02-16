//  #include <iostream>
//  #include <vector>
//  using namespace std;

//  int binarySearch(vector<int> arr, int tar){
//     int st=0, end=arr.size()-1 , mid;

//     while(st <= end){
//         int mid = (st + end)/2;

//         if(tar > arr[mid]){
//             st = mid+1;
//         }
//         else if(tar < arr[mid]){
//             st = mid-1;
//         }
//         else {
//             return mid;
//         }


//     }
//         return -1;
//  }

//  int main(){
//     // vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
//     // int target1 = 12;

//     // cout << binarySearch(arr1, target1) << endl;

//     vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
//     int target1 = 0;
//     cout << binarySearch(arr1, target1) << endl;

//     return 0;

// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int recBinarySearch(vector<int> arr, int tar, int st, int end){
//     if(st <= end){
//         int mid = st + (end-st)/2;

//         if(tar > arr[mid]){  //2nd half
//             return recBinarySearch(arr, tar, mid+1, end);
//         }
//         else if(tar < arr[mid]){  //1st half
//             return recBinarySearch(arr, tar, st, mid-1);
//         }
//         else { //mid => ans
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
//     int tar1 = 9;
//     // cout << recBinarySearch(arr1, target1, 0, arr1.size()-1) << endl;
     
//     vector<int> arr2 = {-1, 0, 3, 4, 5, 9, 12}; //even
//     int tar2 = 9;

//     cout << recBinarySearch(arr2, tar2, 0, arr2.size()-1) << endl;
//     return 0;
// }

