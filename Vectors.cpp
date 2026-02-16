
                   //VECTORS//

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
// vector<int> vec = {1, 2, 3};
// cout << vec[0] << endl;
// cout << vec[1] << endl;
// cout << vec[2] << endl;
// return 0;
// } 

    // vector<int> vec (5, 3); //5 size, all elements are 3
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;
    
    // vector<int> vec (5, 1);
    // for(int i : vec){
    //     cout << i << endl;
    // }

    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    // for(char val : vec){  //for each loop
    //     cout << val << endl;
    // }

                    //VECTOR FUNCTIONS//
    //SIZE
    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    // cout << "size = " << vec.size() << endl; //size of vector
    
           //PUSH_BACK
    // vector<int> vec;

    // vec.push_back(25);
    // vec.push_back(35);
    // vec.push_back(45);
    // cout << "after push back size = " << vec.size() << endl;

    // vec.pop_back();   //delete last element
    // cout << "after pop back size = " << vec.size() << endl;

    // cout << vec.front() << endl;
    // cout << vec.back() << endl;
    // cout << vec.at(1) << endl; //index 1

                     //STATIC & DYNAMIC ALLOCATION//

    // vector<int> vec;
    
    // vec.push_back(0);
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3); //if we add one more element, capacity will be doubled
    // vec.push_back(4);

    // cout << vec.size() << endl; 
    // cout << vec.capacity() << endl; 
     
              //Single number problem

    // #include <iostream>
    // using namespace std;
    // #include <vector>
    // class Solution {
    //     public:
    //     int singleNumber(vector<int>& numbs){
    //         int ans = 0;

    //         for(int val : numbs){
    //             ans = ans ^ val;
    //         }
    //         return ans;
    //     }
    // };



     // SUBARRAY//
//  #include <iostream>
//  #include <vector>
//  using namespace std;

//  int main(){
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};

//     for(int st=0; st<n; st++){
//         for(int end=st; end<n; end++){
//             for(int i=st; i<=end; i++){
//                 cout << arr[i] ;
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//         return 0;
//  }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> vec; 

//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.emplace_back(6);
//     vec.pop_back();


//     cout << vec.size() << endl; //3
//     cout << vec.capacity() << endl; //4

//     for(int val : vec){
//         cout << val << " "; 
//     }
//     cout << endl;

//     cout << "val at idx 2: " << vec[2] << " or " << vec.at(2) << endl;

//     cout << "front" << vec.front() << endl;
//     cout << "back" << vec.back() << endl;
//     return 0;




// }

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};

    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    for(auto it = vec.rbegin(); it != vec.rend(); it++){
        cout << *(it) << " ";
    }
}