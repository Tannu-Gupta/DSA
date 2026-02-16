
                      //2D Arrays//

// #include <iostream>
//  using namespace std;

//  int main(){
//     //int arr = {1, 2, 3, 4, 5};

//     int matrix[4][3] = {{1, 2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
//     int rows = 4;
//     int cols = 3;

//     // matrix[2][1] = 18;
//     // cout << matrix[2][1] << endl;

//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
// }
//    return 0;
//    }


//  int main(){
   
//     int matrix[4][3];
//     int rows = 4;
//     int cols = 3;

//     //Taking input in 2D array
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cin >> matrix[i][j];
//         }
        
//     }

//     //output
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//  return 0;
// }


                       //Linear Search//

// #include <iostream>
// #include <deque>
// using namespace std;    

// bool linearSearch(int mat[][3], int rows, int cols, int key){
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if(mat[i][j] == key){
//                 return true;
//         }
//     }
// }

//     return false;
// }

// int main(){
     
//     int matrix[4][3] = {{1, 2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
//     int rows = 4;
//     int cols = 3;

//     cout << linearSearch(matrix, rows, cols, 7) << endl;
 
//     return 0;
// }


                        //Maximum Row Sum//

// #include <iostream>
// using namespace std;

// int getMaxSum(int mat[][3], int rows, int cols){
//     int maxRowsSum = INT8_MIN;

//     for(int i=0; i<rows; i++){
//         int rowSum = 0;
//         for(int j=0; j<cols; j++){
//             rowSum += mat[i][j];
//         }
//         maxRowsSum = max(maxRowsSum, rowSum);
//     }
//     return maxRowsSum;
// }

// int main(){
//     int matrix[3][3] = {{1, 2,39}, {4,5,6}, {7,8,9}};
//     int rows = 3;
//     int cols = 3;

//     cout << getMaxSum(matrix, rows, cols) << endl;
//     return 0;
// }

                          //Maximum Column Sum//
// #include <iostream>
// using namespace std;

// int getMaxColSum(int mat[][3], int rows, int cols){
//     int maxColSum = INT8_MIN;

//     for(int j=0; j<cols; j++){
//         int colSum = 0;
//         for(int i=0; i<rows; i++){
//             colSum += mat[i][j];
//         }
//         maxColSum = max(maxColSum, colSum);
//     }
//     return maxColSum;
// }

// int main(){
//     int matrix[3][3] = {{1, 2,3}, {4,5,6}, {7,8,9}};
//     int rows = 3;
//     int cols = 3;

//     cout << getMaxColSum(matrix, rows, cols) << endl;
//     return 0;
// }



                           //Diagonal Sum//

// #include <iostream>
// using namespace std;   

// int diagonalSum(int mat[4][4], int n){
//     int sum = 0;

//     for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//         if(i == j){
//             sum += mat[i][j];
//         } else if(j == n-i-1){
//             sum += mat[i][j];
//         }

//        }
       
//     }
//     return sum;
// }


// int main(){
//     int matrix[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13, 14, 15,16}};
//     int n = 4;

//     cout << diagonalSum(matrix, n) << endl;
//     return 0;
// }


//Method 2:
// #include <iostream>
// using namespace std;

// int diagonalSum(int mat[4][4], int n){
//     int sum = 0;

//     for(int i=0; i<n; i++){
//         sum += mat[i][i];
      
//          if(i != n-i-1){
//             sum += mat[i][n-i-1];
//         }

//        }
       
//     return sum;
// }

// int main(){
//     int matrix[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13, 14, 15,16}};
//     int n = 4;

//     cout << diagonalSum(matrix, n) << endl;
//     return 0;
// }


                       //2D Vector//

#include <iostream>
#include <vector>  
using namespace std;

int main(){
    // vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};

    // cout << mat[1][1] << endl; //5

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> mat = {{1,2,3}, {4,5,6, 12, 43}, {7,8,9}}; //3*3

    //rows => mat.size();
    //cols => mat[i].size();

    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }


    return 0;

}



   