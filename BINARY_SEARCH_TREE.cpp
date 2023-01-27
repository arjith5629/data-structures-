#include <iostream>  
using namespace std;  
struct Node {  
    int data;  
    Node *left;  
    Node *right;  
};  

Node* create(int item)  
{  
    Node* node = new Node;  
    node->data = item;  
    node->left = node->right = NULL;  
    return node;  
}  


Node* insertion(Node* root, int item) /*Insert a node*/  
{  
    if (root == NULL)  
        return create(item); /*return new node if tree is empty*/  
    if (item < root->data)  
        root->left = insertion(root->left, item);  
    else  
        root->right = insertion(root->right, item);  
    return root;  
}  

void search(Node* &cur, int item, Node* &parent)  
{  
    while (cur != NULL && cur->data != item)  
    {  
        parent = cur;  
        if (item < cur->data)  
            cur = cur->left;  
        else  
            cur = cur->right;  
    }  
} 

Node* findMinimum(Node* cur) 
{  
    while(cur->left != NULL) {  
        cur = cur->left;  
    }  
    return cur;  
}  

void deletion(Node*& root, int item) 
{  
    Node* parent = NULL;  
    Node* cur = root;  
    search(cur, item, parent); 
    if (cur == NULL)  
        return;  
    if (cur->left == NULL && cur->right == NULL)   
    {  
        if (cur != root)  
        {  
            if (parent->left == cur)  
                parent->left = NULL;  
            else  
                parent->right = NULL;  
        }  
        else  
            root = NULL;  
        free(cur);       
    }  
    else if (cur->left && cur->right)  
    {  
        Node* succ  = findMinimum(cur->right);  
        int val = succ->data;  
        deletion(root, succ->data);  
        cur->data = val;  
    }  
    else  
    {  
        Node* child = (cur->left)? cur->left: cur->right;  
        if (cur != root)  
        {  
            if (cur == parent->left)  
                parent->left = child;  
            else  
                parent->right = child;  
        }  
        else  
            root = child;  
        free(cur);  
    }  
}  

Node* findMaximum(Node* cur) 
{  
    while(cur->right != NULL) {  
        cur = cur->right;  
    }  
    return cur;  
}  

void inorder(Node *root)  
{  
    cout<<"THE INORDER IS : \n";
    if (root == NULL)  
        return;  
    inorder(root->left); //traverse left subtree  
    cout<< root->data << "   "; //traverse root node  
    inorder(root->right); //traverse right subtree  
}  


int main()  
{  
  Node* root = NULL,datax = NULL;  
  	int n,d,cha;

    do
    {
   	cout<<"\n\n\nENTER :\n 1.INSERT A NODE . \n 2.DELETE A NODE.\n3.MAXIMUM NODE\n4.DISPLAY NODE\n\t\t :   \t";
   	scanf("%d",&cha);

   	switch(cha)
   	{
       case 1:
       printf("ENTER THE  NODE TO BE INSERTED:\t");
	   scanf("%d",&n);
       root = insertion(root, n);
       break;

       case 2:
       printf("ENTER THE  NODE TO BE DELETED:\t");
	   scanf("%d",&d);
       deletion(root, d); 
       break;
       
       case 3:
       datax = findMaximum(root);
       printf("\nTHE MAXIMUM NODE IS %d",datax->data);
       break;

       case 4:
       inorder(root);
       break;

       default:
       break;
   	}

    } while (cha<=4);

	return 0;

}  

