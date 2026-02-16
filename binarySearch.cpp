//  #include <iostream>
//  #include <vector>
//  using namespace std;

//  int binarySearch(vector<int> arr, int tar) {

//     int st=0, end=arr.size()-1;

//     while(st <= end){
//         // int mid = (st + end)/2;
//         int mid = st + (st - end)/2; //to prevent overflow
    
//     if(tar > arr[mid]){
//         st = mid + 1;
//     }
//     else if(tar < arr[mid]){
//     end = mid - 1;
// }
//     else{
//         return mid;
//     }

// }
// return -1;
 
// }

// int main(){
//     vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; //odd
//     int tar1 = 12;

//     cout << binarySearch(arr1, tar1) << endl;

//     vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; //even
//     int tar2 = 0;

//     cout << binarySearch(arr2, tar2) << endl;

//     vector<int> arr3 = {-1, 0, 3, 5, 9, 12}; //even
//     int tar3 = 32;

//     cout << binarySearch(arr3, tar3) << endl;
// }


// int recBinarySearch(vector<int> arr, int tar, int st, int end){
//     if(st <= end){
//         int mid = st + (end-st)/2;

//         if(tar > arr[mid]){
//             return recBinarySearch(arr, tar, mid+1, end);
//         }
//         else if(tar < arr[mid]){
//             return recBinarySearch(arr, tar, st, mid-1);
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }
    
// int main(){
//     vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
//     int tar1 = 5;

//     cout << recBinarySearch(arr1, tar1, 0, arr1.size()-1) << endl;
//     return 0;

// }

                 //Book Allocation Problem//

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
//     int students=1, pages=0;

//     for(int i=0; i<n; i++){
//         if(arr[i] > maxAllowedPages){
//             return false;
//         }

//         if(pages + arr[i] <= maxAllowedPages){
//             pages += arr[i];
//         } else{
//             students++;
//             pages = arr[i]; 
//         }
//     }

//     return students > m ? false : true;
// }

// int allocateBooks(vector<int>  &arr, int n, int m){
//     if(m > n){
//         return -1;
//     }

//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }

//     int ans = -1;
//     int st = 0, end=sum; //range of possible answers

//     while(st <= end){
//         int mid = st + (end-st) / 2;

//         if(isValid(arr, n , m, mid)) { // left
//             ans = mid;
//             end = mid - 1;
//         } else { //right
//             st = mid + 1;
//         }

//     }

//     return ans;
// }

// int main(){
//     vector<int> arr = {2, 1, 3, 4};
//     int n = 4, m = 2;

//     cout << allocateBooks(arr, n, m) << endl;
//     return 0;
// }



                 //Painter's Partition Problem//

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){
//     int painters = 1, time = 0;

//     for(int i=0; i<n; i++){
//         if(time + arr[i] <= maxAllowedTime){
//             time += arr[i];
//         } else{
//             painters++;
//             time = arr[i];
//         }

//     }
//     return painters > m ? false : true;
// }


// int minTimeToPoint(vector<int> &arr, int n, int m){  //O(log(sum) * N)
//     int sum = 0, maxVal =INT_FAST16_MIN;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//         maxVal = max(maxVal, arr[i]);
//     }

//     int st = maxVal, end = sum, ans = -1;

//     while(st <= end){
//         int mid = st + (end - st) / 2;

//         if(isPossible(arr, n, m, mid)){ //left
//             ans = mid;
//             end = mid - 1;
//         } else{ //right
//             st = mid + 1;
//         }
        
        
//     }
//     return ans;

// }

// int main(){
//     vector<int> arr = {40, 30, 10, 20};
//     int n=4, m=2;

//     cout << minTimeToPoint(arr, n, m) << endl;
//     return 0;
// }
                 
                 
                                   //Aggresive Cows Problem//

// #include <iostream>
// #include <vector> 
// #include <algorithm>

// using namespace std;

// bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist){
//     int cows = 1, lastStallPos = arr[0];

//     for(int i=1; i<N; i++){
//         if(arr[i] - lastStallPos >= minAllowedDist){
//             cows++;
//             lastStallPos = arr[i];
//         }

//             if(cows == C){
//                 return true;
//             }
//         }
//         return false;
//     }


// int getDistance(vector<int> &arr, int N, int C){
//     sort(arr.begin(), arr.end());

//     int st = 1, end = arr[N-1] - arr[0], ans = -1;

//     while(st <= end){
//         int mid = st + (end - st) / 2;

//         if(isPossible(arr, N, C, mid)) { 
//             ans = mid;
//             st = mid + 1;
//         } else {
//             end = mid -1;
//         }



//     }
//     return ans; 
// }

// int main(){
//     int N = 5, C = 3;
//     vector<int> arr = {1, 2, 8, 4, 9};

//     cout << getDistance(arr, N, C) << endl;
//     return 0;

// }

                              //Sorting Alogrithms//

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> arr, int n){ //O(n^2) : nlogn
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

int main(){
    int n = 5;
    vector<int> arr = {4, 1, 5, 2, 3};
    bubbleSort(arr, n);
    return 0;
}

