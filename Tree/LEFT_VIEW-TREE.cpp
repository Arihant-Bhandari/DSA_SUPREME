#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class TreeNode
{
public:
    TreeNode *left;
    int val;
    TreeNode *right;

    TreeNode(int data)
    {
        left = NULL;
        val = data;
        right = NULL;
    }
};
TreeNode *create()
{
    int data;
    cout << "Enter VALUE: ";
    cin >> data;
    if (data == -1) return NULL;

    TreeNode *root = new TreeNode(data);

    cout << "LEFT CHILD of " << root -> val << ": ";
    root->left = create();

    cout << "RIGHT CHILD of " << root -> val << ": ";
    root->right = create();

    return root;
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

    cout << root -> val << " ";

    preorder(root -> left);

    cout << root -> val << " ";
    
    preorder(root -> right);    
}
void postorder(TreeNode* root)
{
    if(root == NULL) return;

    preorder(root -> left);
    preorder(root -> right);

    cout << root -> val << " ";
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
void leftview(TreeNode* root, int level, vector<int> &left)
{
    if(root == NULL) return;

    if(level == left.size()) left.push_back(root -> val);

    leftview(root -> left, level + 1, left);
    leftview(root -> right, level + 1, left);
}
int main()
{
    TreeNode* root = create();

    cout << "LEVEL ORDER TRAVERSAL: " << endl;
    levelorder(root);

    vector<int> left;
    leftview(root, 0, left);
    cout << "LEFT VIEW of BINARY TREE: ";
    for(auto i : left) cout << i << " ";

    return 0;
}