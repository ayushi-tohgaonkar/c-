

#include <iostream>

using namespace std;



void run();

struct node
{
  int data;
  struct node *left;
  struct node *right;
};


class bst
{
    public:

struct node *newNode(int data)
{
  struct node *node = (struct node *)malloc(sizeof(struct node));
  
 

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}

void traversePreOrder(struct node *t)
{
  if (t != NULL)
  {
   
    cout<<t->data<<endl;
    traversePreOrder(t->left);
    traversePreOrder(t->right);
  }
}
void traverseInOrder(struct node *t)
{
  if (t != NULL)
  {
    traverseInOrder(t->left);
   
   cout<<t->data<<endl;
    traverseInOrder(t->right);
  }
}
void traversePostOrder(struct node *t)
{
  if (t != NULL)
  {
    traversePostOrder(t->left);
    traversePostOrder(t->right);
    
    cout<<t->data<<endl;
  }
}
void run()
{
  struct node *root = newNode(1);

  root->left = newNode(2);
  root->right = newNode(3);
root->left->left = newNode(4);

  cout<<"The preorder traversal of the tree is: ";
  traversePreOrder(root);
  cout<<endl<<"The inorder traversal of the tree is: ";
  traverseInOrder(root);
  cout<<endl<<"The postorder traversal of the tree is: ";
  traversePostOrder(root);  
    
}
};



int main()
{
  bst tree;
  tree.run();
}