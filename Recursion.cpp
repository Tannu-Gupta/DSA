
               //Recursion//

//  #include <iostream>
//  using namespace std;

//  void printNums(int n){
//  if(n == 1){    //Base case
//     cout << "1\n";
//     return;
//  }
//     cout << n << " ";

//     printNums(n-1);
// }

// int main(){
//     int n;
//     cout << "Enter numbers:";
//     cin >> n;

//     printNums(n);

//     return 0;
// }


                        //Factorial//

// #include <iostream>
// using namespace std;

// int factorial(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

// int main(){

//    cout <<  factorial(5);
//  return 0;
// }

                    //Sum of N numbers//

// #include <iostream>
// using namespace std;

// int sum(int n){
//     if(n == 0){
//         return 0;
//     }

//     return n + sum(n-1);
// }

// int main(){
//     cout << sum(5);
//     return 0;
// }


                         //Chexk if array is sorted//

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isSorted(vector<int> arr, int n){
//     if(n == 0 || n == 1){
//         return true;
//     }

//     if(arr[n-1] < arr[n-2]){
//         return false;
//     }

//     return isSorted(arr, n-1);
// }

// int main(){
//     vector<int> arr = {13, 2, 5, 9, 7};
//     cout << isSorted(arr, arr.size());
//     return 0;
// }


                          //Print all subsets//

// #include <iostream>
// #include <vector>
// using namespace std;

// void printSubsets(vector<int> &arr, vector<int> &ans, int i) {
//     if(i == arr.size()){
//         for(int val : ans){
//             cout << val << " ";
//         }
//         cout << endl;
//         return;
//    }

//    //include
//    ans.push_back(arr[i]);
//    printSubsets(arr, ans, i+1);

//    ans.pop_back(); //backtrack
//    //exclude
//     printSubsets(arr, ans, i+1);
// }

// int main(){
//     vector<int> arr = {1, 2,3};
//     vector<int> ans;

//     printSubsets(arr, ans, 0);
//     return 0;
// }



                     //Rat in A Maze//

#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans ){

    int n = mat.size();
    if(r<0 || c<0 || r>=n || c>=n || mat[r][c] == 0 || mat[r][c] == -1){
        return;
    }

    if(r == n-1 && c == n-1){
        ans.push_back(path);
        return;
    }

    mat[r][c] = -1; //visit

    helper(mat, r+1, c, path + 'D', ans); //down
    helper(mat, r-1, c, path + 'U', ans); //up
    helper(mat, r, c-1, path + 'L', ans); //left
    helper(mat, r, c+1, path + 'R', ans); //right

    mat[r][c] = 1; //unvisit

}

vector<string> findPath(vector<vector<int>> &mat){
    int n = mat.size();

    vector<string> ans;
    string path = "";
    

    helper(mat, 0, 0, path, ans);
    return ans;
}


int main(){
    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

    vector<string> ans = findPath(mat);
    for(string path : ans){
        cout << path << endl;

    }
   
    return 0;
}
   // Time Complexity => 4^(n^2)
    