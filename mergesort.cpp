//  #include <iostream>
//  #include <vector>
//  using namespace std;

//     //O (nlogn) TC
//     //O (n) SC

//  void merge(vector<int> &arr, int st, int mid, int end){  //O(n)
//     vector<int> temp;
//     int i=st, j=mid+1;

//     while(i <= mid && j <= end){
//         if(arr[i] <= arr[j]){
//             temp.push_back(arr[i]);
//             i++;
//         } else {
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }

//     while(i <= mid){
//         temp.push_back(arr[i]);
//         i++;
//     }

//     while(j <= end){
//         temp.push_back(arr[j]);
//         j++;
//     }

//     for(int idx=0; idx<temp.size(); idx++){
//         arr[idx+st] = temp[idx];
//     }


//  }

//  void mergeSort(vector<int> &arr, int st, int end){   //O(logn)
//     if(st < end){
//         int mid = st + (end-st)/2;

//         mergeSort(arr, st, mid); //left half
//         mergeSort(arr, mid+1, end); //right half

//         merge(arr, st, mid, end);
//     }
//  }

//  int main(){
//     vector<int> arr = {12, 31, 35, 8, 32, 17};

//     mergeSort(arr, 0, arr.size()-1);

//     for(int val : arr){
//         cout << val << " ";
//   }
//     cout << endl;
//      return 0;
//  }



                     //Count Inversions//

// #include <iostream>
// #include <vector>
// using namespace std;

//    //TC : O(n^2)
// int main(){
//    vector<int> arr = {6, 3, 5, 2, 7};

//    int invCount = 0;
//    for(int i=0; i<arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[i] > arr[j]){
//                 invCount++;
//             }
//         }
//    }
//     cout << "Inversion Count : " << invCount << endl;
//     return 0;
// }

          //Method 2 : Using Merge Sort

 #include <iostream>
 #include <vector>
 using namespace std;

    //O (nlogn) TC
    //O (n) SC

 int merge(vector<int> &arr, int st, int mid, int end){  //O(n)
    vector<int> temp;
    int i=st, j=mid+1;
    int invCount = 0;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
            invCount += (mid - i + 1); //All the elements from i to mid will be greater than arr[j]
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0; idx<temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
    return invCount;


 }

 int mergeSort(vector<int> &arr, int st, int end){   //O(logn)
    if(st < end){
        int mid = st + (end-st)/2;

       int leftInvCount = mergeSort(arr, st, mid); //left half
       int rightInvCount = mergeSort(arr, mid+1, end); //right half

       int invCount = merge(arr, st, mid, end);

         return leftInvCount + rightInvCount + invCount;
    }
    return 0;
 }

 int main(){
    vector<int> arr = {6, 3, 5, 2, 7};

    int ans = mergeSort(arr, 0, arr.size()-1);
    cout << " inv count : " << ans << endl;
    
 return 0;
 }





