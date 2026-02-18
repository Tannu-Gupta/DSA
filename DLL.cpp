 #include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
    Node* head;
    Node* tail;

    public:
    DoublyList(){
        head = tail = NULL;
    }

        //push_front
    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
        head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

      //push_back
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

       //pop_front
    void pop_front(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        head = head->next;

        if(head != NULL){
        head->prev = NULL;
        }

        temp->next = NULL;
        delete temp;
    }

         //pop_back
    void pop_back(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }   
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;

        if(tail != NULL){
        tail->next = NULL;
        }
        
        temp->prev = NULL;
        delete temp;
    }

       //printLL
    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    DoublyList dll;

    dll.push_front(1);
    dll.push_front(2);  
    dll.push_front(3);

    dll.push_back(4);
    dll.push_back(5);

    dll.printLL();

    dll.pop_front();
    dll.pop_back();

    dll.printLL();

    return 0;
}