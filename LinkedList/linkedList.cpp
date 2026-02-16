#include <iostream>
#include <list>
using namespace std;

               //Print a Linked List//

// class Node {
//     public:
//     int data;
//     Node* next;

//    Node(int val){
//          data = val;
//          next = NULL;
//     }

// };

// class List{
//     Node* head;
//     Node* tail;

//     public :
//     List(){
//         head = tail = NULL;

//     }
//                  //push_front    //O(1)

//         void push_front(int val) {
//         Node* newNode = new Node(val); //dynamic
//         if(head == NULL){
//             head = tail = newNode;
//             return;
//         }
//         else{
//             newNode->next = head;
//             head = newNode;
//         }
//     }
//               //push_back   //O(1)

//     void push_back(int val){
//         Node* newNode = new Node(val); //dynamic
//         if(head == NULL){
//             head = tail = newNode;
//             return;
//         }
//         else{
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }
//            //pop_front  //O(1)

//     void pop_front(){
//         if(head == NULL){
//             cout << "List is empty" << endl;
//             return;
//         }
//         else{
//             Node* temp = head;
//             head = head->next;
//             temp->next = NULL;
//             delete temp;
//         }
//     }

//              //pop_back   //O(n)

//     void pop_back(){
//         if(head == NULL){
//             cout << "List is empty" << endl;
//             return;
//         }
//         else if(head == tail){
//             delete head;
//             head = tail = NULL;
//         }
//         else{
//             Node* temp = head;
//             while(temp->next != tail){
//                 temp = temp->next;
//             }
//             temp->next = NULL;
//             delete tail;
//             tail = temp;
//         }
//     }

//              //printLL  //O(n)

//     void printLL(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout << temp->data << "->";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
// };

// int main(){
//     List ll;

//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);

//     ll.push_back(7);
//     ll.push_back(8);

//     ll.printLL();

//     ll.pop_front();
//     ll.pop_back();

//     ll.printLL();
    

//     return 0;
// }

                //Insert in Middle of LL//

class Node {
    public:
    int data;
    Node* next;

   Node(int val){
         data = val;
         next = NULL;
    }

};

class List{
    Node* head;
    Node* tail;

    public :
    List(){
        head = tail = NULL;

    }
                 //push_front

        void push_front(int val) {
        Node* newNode = new Node(val); //dynamic
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    } 
    
               //insert in middle  //O(n)

    void insert(int val, int pos){
        if(pos < 0){
            cout << "Invalid position" << endl;
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            if(temp == NULL){
                cout << "Position out of bounds" << endl;
                return;
            }
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }         
              //printLL

     void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

                //Search key in LL  //O(n)

    int search(int key){
        Node* temp = head;
        int idx = 0;

        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
         return -1; //key not found
    }
};

int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.printLL();

    ll.insert(4, 2);

    ll.printLL();

   cout << "Index of 4: " << ll.search(4) << endl;
    return 0;
}         

                 
