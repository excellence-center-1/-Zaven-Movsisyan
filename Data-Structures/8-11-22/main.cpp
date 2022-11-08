#include <iostream>
#include <queue> 
using namespace std;


class Node{
public:
    int data;
    Node* left;
    Node* right;
};


Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}
    
void printTree(Node* root){
    if(!root) return;
    std::queue<Node*> queue1;
    std::queue<Node*> queue2;
    queue1.push(root);
    while(!queue1.empty() || !queue2.empty()){
        while(!queue1.empty()){
            root = queue1.front();
            cout << root->data << ' ';
            queue1.pop();
            if(root->left) queue2.push(root->right);
            if(root->left) queue2.push(root->left); 
        }
        cout << endl;
        while(!queue2.empty()){
            root = queue2.front();
            cout << root->data << ' ';
            queue2.pop();
            if(root->left) queue1.push(root->left);
            if(root->right) queue1.push(root->right);        
        }
    cout << endl;
    }
}


int main(){
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(4);
    root->left->right = createNode(6);
    root->left->left = createNode(7);
    root->right->left = createNode(8);
    root->right->right = createNode(9);
    printTree(root);
}

