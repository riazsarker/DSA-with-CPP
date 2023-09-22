
// C++ implementation to convert the given
// BST to Min Heap
 
#include <bits/stdc++.h>
using namespace std;
 
// Structure of a node of BST
struct Node {
 
    int data;
    Node *left, *right;
};
 


void convert(Node* root,vector<int> &inorder){
    if(root == NULL){
        return;
    }
    
    convert(root->left,inorder);     //Left Call
    inorder.push_back(root->data);   //Root Data
    convert(root->right,inorder);    //Right Call
}
void fill_pre(Node* root,vector<int> &inorder,int &index){
    if(root == NULL){
        return;
    }
    
    root->data = inorder[index++];
    fill_pre(root->left,inorder,index);   //Left Call
    fill_pre(root->right,inorder,index);    //Right call
}
Node* convertBST(Node* root)
{
	vector<int> inorder;
    int i=0;
    
    convert(root,inorder);
    
    fill_pre(root,inorder,i);
    return root;
}