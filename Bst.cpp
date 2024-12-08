#include<bits/stdc++.h>
using namespace std;
class Node {
public:
int data;
Node* left, *right;

//constructor
Node(int x){
data= x;
left = right = NULL;
}
};

Node* insert(Node* root , int target){
   if(!root) { //if it is null then chala do is line ko
      Node* temp = new Node(target);
      return temp;
   }
   //left side
   if(target < root->data){
      root->left = insert(root->left, target);
   }
   //right side
   else{
      root->right = insert(root->right, target);
   }
   return root;
}

//inorder traverse
void inorder(Node* root){
   // base case
   if(root == NULL) return ;

   //left
   inorder(root->left);
   //node
   cout<<root->data << "  ";
   //right
   inorder(root->right);
  
}

//Binary search tree(BST)
int  searchBST(Node* root, int val) {
      if(root == NULL ) return 0;
      if(root->data == val) return 1;
      else if(val < root->data) {
        return searchBST(root->left , val);
      }   
      else {
        return searchBST(root->right , val);
      }     
    }
int main(){
   int arr[]= {8,6,12,4,7,9,14,3,5};
   int size= sizeof(arr)/sizeof(int);
   Node* root=NULL;
   for(int i=0; i<size ; i++){
      root = insert(root , arr[i]);
   }

   //inorder traverse
   inorder(root);

   //BST
   cout<<endl;
   cout<<searchBST(root, 12);
   return 0;
}

// output:
// 3  4  5  6  7  8  9  12  14  
// 1
 