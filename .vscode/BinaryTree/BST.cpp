#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

//Insert in BST
Node* insert(Node* root, int val) {
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

void inorder(Node* root) {   //sorted oder
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//Search in BST
bool search(Node* root, int key) {
    if(root == NULL){
        return false;
    }

    if(root->data == key){
        return true;
    }

    if(key < root->data){
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

//Delete Node in BST
Node* findMin(Node* root){
    while(root != NULL && root->left != NULL){
        root = root->left;
}
 return root;
}

Node* deleteNode(Node* root, int key) {
    if(root == NULL){
        return NULL;
    }

    if(key < root->data){
        root->left = deleteNode(root->left, key);
    } else if(key > root->data){
        root->right = deleteNode(root->right, key);
    } else {
        // Node to be deleted found

        // Case 1: No child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // Case 2: One child
        else if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Two children
        else {
            Node* temp = findMin(root->right); // Find minimum in right subtree
            root->data = temp->data; // Replace data
            root->right = deleteNode(root->right, temp->data); // Delete the duplicate node
        }
    }
    return root;
}

Node* buildBST(vector<int> arr) {
    Node* root = NULL;

    for(int val : arr){
        root = insert(root, val);
    }
    return root;
}

                         //Merge 2 BST

   void inorder(Node* root, vector<int>& arr) {
    if(root == NULL){
        return;
    }

    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}

    Node*buildBSTFromSorted(vector<int> arr, int st, int end){
    if(st > end){
        return NULL;
    }

    int mid = st + (end - st) / 2;
    Node* root = new Node(arr[mid]);
    root->left = buildBSTFromSorted(arr, st, mid-1);
    root->right = buildBSTFromSorted(arr, mid+1, end);

    return root;
}
    
     Node* merge2BST(Node* root1, Node* root2){
     vector<int> arr1, arr2;
      inorder(root1, arr1);
      inorder(root2, arr2);

      vector<int> temp; //merged sorted array
        int i=0, j=0;

      while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            temp.push_back(arr1[i++]);
        } else {
            temp.push_back(arr2[j++]);
        }
    }

       while(i < arr1.size()){
        temp.push_back(arr1[i++]);
       }

       while(j < arr2.size()){
        temp.push_back(arr2[j++]);
       }

       return buildBSTFromSorted(temp, 0, temp.size()-1);
       

}


int main() {
    // vector<int> arr = {3, 2, 1, 5, 6, 4};

    //  Node* root = buildBST(arr);
    // // inorder(root);
    // // cout << endl;

    // // cout << search(root, 5) << endl; //1 true
    // // cout << search(root, 10) << endl; //0 false

    // cout<<"before deletion: ";
    // inorder(root);
    // cout << endl;

    // // deleteNode(root, 6);
    // // deleteNode(root, 2);
    // deleteNode(root, 5);


    // cout << "after deletion: ";
    // inorder(root);
    // cout << endl;


    //for merge 2 BST
    vector<int> arr1 = {8, 2, 1, 10};
    vector<int> arr2 = {5, 3, 0};

    Node* root1 = buildBST(arr1);
    Node* root2 = buildBST(arr2);

    Node* mergedRoot = merge2BST(root1, root2);
    cout << "Merged BST Inorder: ";
    vector<int> seq;
    inorder(mergedRoot, seq);
    for(int val : seq){
        cout << val << " ";
    }
    cout << endl;


    return 0;
}