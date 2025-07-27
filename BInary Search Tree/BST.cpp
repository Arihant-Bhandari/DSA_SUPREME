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
TreeNode* maxValue(TreeNode* root)
{
    if(root == NULL) return root;

    while(root -> right != NULL)
    root = root -> right;

    return root;
}
TreeNode* minValue(TreeNode* root)
{
    if(root == NULL) return root;

    while(root -> left != NULL)
    root = root -> left;

    return root;
}
TreeNode* delete_bst(TreeNode* root, int target)
{
    if(root == NULL) return root;

    if(root -> val == target)
    {
        if(root -> left == NULL && root -> right == NULL)
        {
            delete root;
            return NULL;
        }
        else if(root -> left == NULL && root -> right != NULL)
        {
            TreeNode* temp = root -> right;
            delete root;
            return temp;
        }
        else if(root -> left != NULL && root -> right == NULL)
        {
            TreeNode* temp = root -> left;
            delete root;
            return temp;
        }
        else
        {
            TreeNode* temp = maxValue(root -> left);

            root -> val = temp -> val;

            root -> left = delete_bst(root -> left, temp -> val);
        }
    }

    if(target < root -> val) 
    root -> left = delete_bst(root -> left, target);
    if(root -> val < target) 
    root -> right = delete_bst(root -> right, target);

    return root;
}
void levelorder(TreeNode* root)
{
    queue<TreeNode*> que;
    que.push(root);
    que.push(NULL);

    while(!que.empty())
    {
        TreeNode* temp = que.front();
        que.pop();

        if(temp == NULL) 
        {
            cout << endl;
            if(!que.empty()) que.push(NULL);
        }
        else
        {
            cout << temp -> val << " ";
        
            if(temp -> left != NULL) que.push(temp -> left);
            if(temp -> right != NULL) que.push(temp -> right);
        }
    }
}
int main()
{
    TreeNode* root = NULL;
    create_bst(root);

    levelorder(root);
    return 0;
}