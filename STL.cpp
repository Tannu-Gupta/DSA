
                        //List (doubly Linked List)//

// #include <iostream>
// #include <vector>
// #include <list>
// using namespace std;

// int main(){
//     list<int> l;
   
//     l.emplace_back(4);  
//     l.push_back(1);
//     l.push_back(2);
//     l.push_front(3);
//     l.push_front(5);

//     l.pop_back();
//     l.pop_front(); 

//     for(int val : l){
//         cout << val << " ";
//     }

//     return 0;
// }


                          //Deque (double ended queue)//

// #include <iostream>
// #include <vector>
// #include <deque>
// using namespace std;

// int main(){
//     deque<int> d = {1, 2, 3};

//     for(int val : d){
//         cout << val << " ";
//     }
//     cout << endl;

//     cout << d[2] << endl; 

//     return 0;

// }                          


                            //Pair//

// #include <iostream>
// #include <vector>
// #include <deque>
// using namespace std;

// int main(){
//     // pair<int, pair<char, int>> p = {8, {'a', 5}};
    
//     // cout << p.first << endl;   //8
//     // cout << p.second.first << endl;  //a
//     // cout << p.second.second << endl; //5

//     vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};

//     vec.push_back({7, 8});
//     vec.emplace_back(9, 10);

//     // for(pair<int, int> p : vec){
//     for(auto p : vec){
//         cout << p.first << " " << p.second << endl;
//     }
//     return 0;
    
// }


                         //Stack//

// #include <iostream>
// #include <vector>  
// #include <stack>
// using namespace std;

// int main(){
//     stack<int> s;

//     s.push(1);
//     s.push(2);  
//     s.push(3);

//     stack<int> s2;

//     s2.swap(s);

//     cout << "s size : " << s.size() << endl; //0
//     cout << "s2 size : " << s2.size() << endl; //3

//     cout << "top = " << s.top() << endl; //3

//     while(!s.empty()){
//         cout << s.top() << " "; //3 2 1
//         s.pop();
//     }
//     cout << endl;
//     return 0;

// }


                           //Queue//

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// int main(){
//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3);

//     cout << "front: " << q.front() << endl; //1

//     while(!q.empty()){
//         cout << q.front() << " "; //1 2 3
//          q.pop();
//      }
//      cout << endl;

//     return 0;

// }

                    //Priority Queue (Max Heap)//

// #include <iostream>
// #include <vector>   
// #include <queue>
// using namespace std;

// int main(){
//     // priority_queue<int> q; //Max Heap
//     priority_queue<int, vector<int>, greater<int>> q; //for reverse order (Min Heap)


//     q.push(5);
//     q.push(3);
//     q.push(10);
//     q.push(4);

    
//     while(!q.empty()){
//         cout << q.top() << " "; //1 2 3
//          q.pop();
//      }
//      cout << endl;

//     return 0;

// }


                            //Map//

// #include <iostream>
// #include <vector>   
// #include <map>
// #include <unordered_map>
// using namespace std;

//int main(){

    // map<string, int> m;

    // m["tv"] = 100;
    // m["laptop"] = 100;
    // m["headphones"] = 50;
    // m["tablet"] = 120;
    // m["watch"] = 80;

    // m.insert({"camera", 25});
    // m.emplace("phone", 200);

    // m.erase("tablet");

    // for(auto p : m){
    //     cout << p.first << " " << p.second << endl;
    // }

    // cout << "count = " << m.count("laptop") << endl; //1
    // cout << "count = " << m["laptop"] << endl; //100

    // if(m.find("camera") != m.end()){
    //     cout << "found camera" << endl;
    // } else {
    //     cout << "camera not found" << endl;
    // }
  
    //return 0;
//}
 

                    //Multi Map//

  // int main(){

  //   multimap<string, int> m;

  //   m.insert({"tv", 100});
  //   m.emplace("laptop", 150);
  //   m.emplace("laptop", 150);
  //   m.emplace("laptop", 150);

    
  //   m.erase(m.find("laptop"));
  //  m.erase("laptop"); //erases all "laptop" entries
  //   for(auto p : m){
  //       cout << p.first << " " << p.second << endl;
  //   }

  //   return 0;
  // }                  

                  //Unorderd Map// (Random order)

// int main(){
//   unordered_map<string, int> m;

//   m.emplace("tv", 100);
//   m.emplace("laptop", 100);
//   m.emplace("headphones", 100);
//   m.emplace("watch", 100);

//   for(auto p : m){
//       cout << p.first << " " << p.second << endl;
//   }
//   return 0; 
// }  

                      //Set//

// #include <iostream>
// #include <vector>
// #include <set>
// #include <unordered_set>
// using namespace std;

// int main(){
//     set<int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);

//     // s.insert(1);
//     // s.insert(2);
//     // s.insert(3);

//     cout << "lower bound = " << *(s.lower_bound(3)) << endl; //3
//     cout << "upper bound = " << *(s.upper_bound(3)) << endl;
//     cout << s.size() << endl; //5

//     for(auto val : s){
//         cout << val << " "; 
//     }
//     cout << endl;

//     return 0;
// }


                //Multi Set//

// int main(){
//     multiset<int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);

//     s.insert(1);
//     s.insert(9);
//     s.insert(3);

//     for(auto val : s){
//         cout << val << " "; 
//     }
//     cout << endl;

//     return 0;
// }

                //Unordered Set// (Random order)

// int main(){
//     unordered_set<int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);

//     s.insert(1);
//     s.insert(9);
//     s.insert(3);

//     for(auto val : s){
//         cout << val << " "; 
//     }
//     cout << endl;

//     return 0;
// }                


                //Sorting//

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     // int arr[5] = {3, 5, 1, 8, 2};
//     // sort(arr, arr + 5); //O(n log n)

//     // vector<int> vec = {3, 5, 1, 8, 2};
//     // sort(vec.begin(), vec.end());

//     //  vector<int> vec = {3, 5, 1, 8, 2};
//     //  sort(vec.begin(), vec.end(), greater<int>());

//     vector<pair<int, int>> vec = {{3, 4}, {1, 2}, {5, 0}, {2, 8}};
//     sort(vec.begin(), vec.end());


//      for(auto p : vec){
//         cout << p.first << " " << p.second << endl;
//     }
//     cout << endl;
//     return 0;
// }


                               //Custom comparator//

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std; 

// bool comparator(pair<int, int> p1, pair<int, int> p2){
//     if(p1.second < p2.second) return true;
//     if(p1.first > p2.second) return false;

//     if(p1.first < p2.first) return true;
//     else return false;
// }

// int main(){
//     vector<pair<int, int>> vec = {{3, 4}, {1, 0}, {5, 0}, {2, 8}};
//     sort(vec.begin(), vec.end(), comparator);

//     for(auto p : vec){
//         cout << p.first << " " << p.second << endl;
//     }   
//     return 0;
// }


                           //Algorithms//
                           
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

          //Reverse//

// int main(){
//     vector<int> vec = {3, 5, 1, 8, 2};

//     // reverse(vec.begin(), vec.end());
//     reverse(vec.begin()+1, vec.begin()+3);

//     for(int val : vec){
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;

// }

          //Next Permutation//

//int main(){
    // string s = "bca";
    // next_permutation(s.begin(), s.end());
    // prev_permutation(s.begin(), s.end());

    // cout << s << endl;

//     cout << max(4, 5) << " " << min(6, 10) << endl;

//     int a=5, b=10;
//     swap(a, b);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     return 0;

// }

int main(){
    // vector<int> vec = {1, 2, 3, 6, 9, 4};

    // cout << *(max_element(vec.begin(), vec.end())) << endl;
    // cout << *(min_element(vec.begin(), vec.end())) << endl;

    // cout << binary_search(vec.begin(), vec.end(), 6) << endl;

    int n = 15; //1111 in binary
    long int n2 = 15;
    long long int n3 = 15;
    
    cout << __builtin_popcount(n) << endl; //number of set bits in n
    cout << __builtin_popcount(n2) << endl;
    cout << __builtin_popcount(n3) << endl;

    return 0;
}

