#include <iostream>
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
void inorder(TreeNode* root, TreeNode* &head)
{
    if(root == NULL) return;

    inorder(root -> right, head);

    root -> right = head;
    if(head != NULL) head -> left = root;

    head = root;
    
    inorder(root -> left, head);
}
int main()
{
    TreeNode* root = NULL;
    create_bst(root);

    TreeNode* head = NULL;
    inorder(root, head);

    TreeNode* curr = head;

    while(curr != NULL)
    {
        cout << curr -> val << " -> ";
        curr = curr -> right;
    }
    cout << "X";

    return 0;
}