#include <iostream>
#include <queue>
using namespace std;

class TreeNode
{
    public:
    TreeNode* left;
    int val;
    TreeNode* right;

    TreeNode(int val)
    {
        this -> left = NULL;
        this -> val = val;
        this -> right = NULL;
    }
};
TreeNode* insert_bst(TreeNode* root, int data)
{
    if(root == NULL)
    {
        root = new TreeNode(data);
        return root;
    }

    if(data < root -> val)
    root -> left = insert_bst(root -> left, data);
    else
    root -> right = insert_bst(root -> right, data);

    return root;
}
void create_bst(TreeNode* &root)
{
    int data;
    cout << "Enter VALUE: ";
    cin >> data;
    while(data != -1)
    {
        root = insert_bst(root, data);
        cout << "Enter VALUE: ";
        cin >> data;
    }
}
void preorder(TreeNode* root)
{
    if(root == NULL) return;

    cout << root -> val << " ";
    preorder(root -> left);
    preorder(root -> right);
}
void inorder(TreeNode* root)
{
    if(root == NULL) return;

    inorder(root -> left);
    cout << root -> val << " ";
    inorder(root -> right);
}
void postorder(TreeNode* root)
{
    if(root == NULL) return;

    postorder(root -> left);
    postorder(root -> right);
    cout << root -> val << " ";
}
int main()
{
    TreeNode* root = NULL;
    create_bst(root);

    cout << "PREORDER TRAVERSAL: ";
    preorder(root);
    cout << endl;

    cout << "INORDER TRAVERSAL: ";
    inorder(root);
    cout << endl;

    cout << "POSTORDER TRAVERSAL: ";
    postorder(root);
    cout << endl;

    return 0;
}