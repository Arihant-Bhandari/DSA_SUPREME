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
bool search(TreeNode* root, int target)
{
    if(root == NULL) return false;
    if(root -> val == target) return true;

    if(target < root -> val) return search(root -> left, target);
    else return search(root -> right, target);
}
int main()
{
    TreeNode* root = NULL;
    create_bst(root);

    int target;
    cout << "Enter TARGET: ";
    cin >> target;

    if(search(root, target))
    cout << "FOUND.";
    else
    cout << "NOT FOUND.";

    return 0;
}