
#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

     // Binary Tree 
     // Preorder Traversal: Root -> Left -> Right
     //TC :O(n)

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
}; 

static int idx = -1;
Node* buildTree(vector<int> preOrder) {
    idx++;

    if(preOrder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);  //Left
    root->right = buildTree(preOrder); //Right

    return root;

}

//preorder Traversal: Root -> Left -> Right

void preorder(Node* root){   //O(n)
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left); 
    preorder(root->right);
}

//Inorder Traversal: Left -> Root -> Right
void inorder(Node* root){  //O(n)
    if(root == NULL){
        return ;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//Postorder Traversal: Left -> Right -> Root
void postorder(Node* root){  //O(n)
    if(root == NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

//Level Order Traversal: Level by Level
void levelorder(Node* root){  //O(n)
   queue<Node*> q;
   q.push(root);
   q.push(NULL);

   while(q.size() > 0){
    Node* curr = q.front();
    q.pop();

    if(curr == NULL){
        if(q.size() > 0){
            cout << endl;
            q.push(NULL);
            continue;
        } else {
            break;
        }
    }
    cout << curr->data << " ";

    if(curr->left != NULL){
        q.push(curr->left);
    }
    if(curr->right != NULL){
        q.push(curr->right);
   }
}

}

//Height of Binary Tree
int height(Node* root){   //O(n)

    if(root == NULL){
        return 0; 
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return (max(leftHeight, rightHeight) + 1);
}

//Count of Node
int count(Node* root){ //O(n)
    if(root == NULL){
        return 0;
    }

    int leftCount = count(root->left);
    int rightCount = count(root->right);

    return (leftCount + rightCount + 1);
}

//Sum of Node
int sum(Node* root){  //O(n)
    if(root == NULL){
        return 0;
    }

    int sumLeft = sum(root->left);
    int sumRight = sum(root->right);

    return (sumLeft + sumRight + root->data);
}


         //Top view of Binary Tree


void topView(Node* root){  //O(nlogn)
   queue<pair<Node*, int>> q; //(node, HD)
   map<int, int> m; //HD, node val>
   q.push({root, 0});
   

   while(q.size() > 0){
    Node* curr = q.front().first;
    int currHD = q.front().second;
    q.pop();

    if(m.find(currHD) == m.end()){
        m[currHD] = curr->data;
    }

    if(curr->left != NULL){
        q.push({curr->left, currHD-1});
    }
    if(curr->right != NULL){
        q.push({curr->right, currHD+1});
    }
  }

    for(auto it : m){
     cout << it.second << " ";
    }

    cout << endl;
}

//Kth Level of binary tree
void kthLevel(Node* root, int k){  //O(n)
    if(root == NULL){
        return ;
    }

    if(k == 1){
        cout << root->data << " ";
        return;
    }

    kthLevel(root->left, k-1);
    kthLevel(root->right, k-1);
}

    

int main(){
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preOrder);
    // cout << root->data << endl;
    // cout << root->left->data << endl;
    // cout << root->right->data << endl;

    preorder(root);
    cout << endl;

    inorder(root);
    cout << endl;

    postorder(root);
    cout << endl;

    levelorder(root);
    cout << endl;

    cout << "Height of the binary tree: " << height(root) << endl;
    cout << "Count of nodes: " << count(root) << endl;
    cout << "Sum of nodes: " << sum(root) << endl;

    topView(root);

    kthLevel(root, 2);

    return 0;
}


         
