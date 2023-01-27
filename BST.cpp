#include<iostream>
using namespace std;
template<class t>
class bst
{
struct NODE
{
t data;
NODE* left, *right;
};
public:
NODE* createnewnode(t data)
{
NODE* createnewnode = new NODE();
createnewnode->data = data;
createnewnode->left = createnewnode->right = NULL;
return createnewnode;
}
NODE* Insert(NODE* root,t data)
{
if(root == NULL)
{
root = createnewnode(data);
}
else if(data <= root->data)
{
root->left = Insert(root->left,data);
}
else
{
root->right = Insert(root->right,data);
}
return root;
}
void inorder(NODE* root )
{
if(root != NULL)
{
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
}
bst()
{
NODE* root = NULL;
t a,b,c,d,e,f;
cout<<endl<<"Enter the numbers:"<<endl;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;
cin>>f;
root = Insert(root,a);
root = Insert(root,b);
root = Insert(root,c);
root = Insert(root,d);
root = Insert(root,e);
root = Insert(root,f);
cout<<"The binary search tree: "<<endl;
cout<<"Inserted element:";
inorder(root);
cout<<endl;
insertion(root);
}
NODE* insertion(NODE* root)
{
t n;
cout<<"Enter the element to be inserted in the binary search tree:"<<endl;
cin>>n;
root = Insert(root,n);
cout<<" The binary search tree"<<endl;
cout<<"After inserting:";
inorder(root);
}
};
int main()
{
bst<int>a;
cout<<endl<<"---------------------------------------------"<<endl;
bst<char>b;
return 0;
}