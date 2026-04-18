// #include <iostream>
// #include <vector>
// using namespace std;

               //Queue using Linked List//

// class Node {
//     public:
//     int data;
//     Node* next;
    
//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class Queue {
//     Node* head;
//     Node* tail;

//     public:
//     Queue() {
//         head = tail = NULL;
//     }

//     void push(int data) { //insert data at tail
//         Node* newNode = new Node(data);

//         if(empty()) {
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     void pop() {
//          if(empty()) {
//             cout << "LL is empty" << endl;
//             return;
//          } else {
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//          }

//     }

//     int front() { 
//         if(empty()) {
//             cout << "LL is empty" << endl;
//             return -1;
//         }
//         return head->data;
//     }

//     bool empty() {
//         return head == NULL;
//     }
// };

// int main() {
//     Queue q;

//     q.push(1);
//     q.push(2);
//     q.push(3);  //1, 2, 3

//     while(!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();
//     }

//     cout << endl;

//     return 0;
// }

    
                  //Queue using STL//

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;  

// int main() {
//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3);  //1, 2, 3

//     while(!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();
//     }

//     cout << endl;

//     return 0;
// }


                              //Deque//

// #include <iostream>
// #include <vector>   
// #include <deque>
// using namespace std;  

// int main(){
//     deque<int> dq;

//     dq.push_back(1);
//     dq.push_back(2);
//     dq.push_back(3);  

//     dq.push_front(4); //4, 1, 2, 3
//     cout << dq.front() << " " << dq.back() << endl; //4, 3

//     dq.pop_back(); //4, 1, 2
//     cout << dq.front() << " " << dq.back() << endl; //4, 2
//     return 0;

// }

                                //Circular Queue//

#include <iostream>
#include <queue>
using namespace std;

class CircularQueue {
    int* arr;
    int currSize, cap;
    int f, r;

    public:
        CircularQueue(int size) {
            cap = size;
            arr = new int[cap];
            currSize = 0;
            f = 0;
            r = -1;
        }

        void push(int data){
            if(currSize == cap) {
                cout << "CQ is FULL" << endl;
                return;
            }
            r = (r + 1) % cap;
            arr[r] = data;
            currSize++;
        }

        void pop() {
            if(empty()) {
                cout << "CQ is EMPTY" << endl;
                return;
            }
            f = (f + 1) % cap;
            currSize--;
        } 

        int front() {
            if(empty()) {
                cout << "Queue is empty" << endl;
                return -1;
            }
             return arr[f];
        }

        bool empty() {
            return currSize == 0;
        }

        void print() {
            for(int i=0; i<cap; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

};

int main() {
    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3); 

    cq.print(); //1, 2, 3

    cq.pop();
    cq.push(5);

    cq.print(); //5, 2, 3

   while(!cq.empty()) {
        cout << cq.front() << " ";
        cq.pop();
   }
   cout << endl;

   return 0;
}


