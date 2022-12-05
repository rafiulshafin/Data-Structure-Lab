#include<iostream>
using namespace std;

struct bstNode
{
    int data;
    bstNode* left;
    bstNode* right;

};

bstNode* root;

bstNode* getNewBstNode(int value){
    bstNode* newNode=new bstNode();
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

void PreOrder(bstNode* root){
   
    if(root==NULL){
        return ;
        
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(bstNode* root){
    if(root==NULL){
        return;
    }
    InOrder(root->left);
    
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PostOrder(bstNode* root){
    if(root==NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    
    cout<<root->data<<" ";
}

bstNode* insertData(bstNode* root,int data){
    
    if(root==NULL){
        root=getNewBstNode(data);
    }
    else if(data<=root->data){
        root->left=insertData(root->left,data);

    }
    else
    root->right=insertData(root->right,data);
    return root;
}


int main(){
     root=NULL;
    int t;
    cout<<"How many number do you want to insert in the Binary Tree: "<<endl;
    cin>>t;
    cout<<endl;
    while(t--){
        int n;
        cout<<"Enter the value : "<<endl;
        cin>>n;
        root=insertData(root,n);
    }
    int choice;
    cout<<"1.PreOrder\n2.Inorder\n3.PostOrder"<<endl;
    cout<<"Enter your choice : "<<endl;
     cin>>choice;
    switch(choice){
         case 1:  cout<<"Binary Tree in PreOrder : "<<endl;
         PreOrder(root);
         cout<<endl;
         break;
         
         case 2:
         cout<<"Binary Tree in Inorder : "<<endl;
         InOrder(root);
         cout<<endl;
         break;
         
         case 3:
            cout<<"Binary tree in PostOrder : "<<endl;
            PostOrder(root);
            cout<<endl;
            break;
        default:
            cout<<"error choice."<<endl;
          }
   

}


