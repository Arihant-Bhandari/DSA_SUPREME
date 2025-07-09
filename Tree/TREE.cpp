#include <iostream>
#include <queue> 
using namespace std;

class TreeNode
{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data)
    {
        this -> val = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

TreeNode* create()
{
    int data;
    cout << "Enter VALUE for NODE: "; 
    cin >> data;

    if(data == -1) return NULL;
    
    TreeNode* root = new TreeNode(data);

    cout << "Enter VALUE for LEFT CHILD of NODE {" << data << "}: \n";
    root -> left = create();
    cout << "Enter VALUE for RIGHT CHILD of NODE {" << data << "}: \n";
    root -> right = create();

    return root;
}
void preorder(TreeNode* root)
{
    if(root == NULL) return;

    cout << root -> val << " "; // root
    preorder(root -> left); // left
    preorder(root -> right); // right
}
void inorder(TreeNode* root)
{
    if(root == NULL) return;

    inorder(root -> left); // left
    cout << root -> val << " "; // root
    inorder(root -> right); // right
}
void postorder(TreeNode* root)
{
    if(root == NULL) return;

    postorder(root -> left); // left
    postorder(root -> right); // right
    cout << root -> val << " "; // root 
}
void levelorder(TreeNode* root)
{
    queue<TreeNode*> que;
    que.push(root);
    que.push(NULL);

    while(que.size() > 1)
    {
        TreeNode* temp = que.front();
        que.pop();

        if(temp == NULL)
        {
            cout << endl;
            que.push(NULL);
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
    TreeNode* root = create();

    cout << "PRE-ORDER TRAVERSAL: \n";
    preorder(root);
    cout << endl << endl;

    cout << "IN-ORDER TRAVERSAL: \n";
    inorder(root);
    cout << endl << endl;

    cout << "POST-ORDER TRAVERSAL: \n";
    postorder(root);
    cout << endl << endl;

    cout << "LEVEL-ORDER TRAVERSAL: \n";
    levelorder(root);
    cout << endl << endl;

    return 0;
}