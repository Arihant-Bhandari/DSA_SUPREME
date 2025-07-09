#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class TreeNode
{
    public:
    TreeNode* left;
    int val;
    TreeNode* right;

    TreeNode(int data)
    {
        left = NULL;
        val = data;
        right = NULL;
    }
};
TreeNode* create()
{
    int data;
    cout << "Enter VALUE: ";
    cin >> data;

    if(data == -1) return NULL;

    TreeNode* root = new TreeNode(data);

    cout << "LEFT CHILD of " << root -> val << ": ";
    root -> left = create();

    cout << "RIGHT CHILD of " << root -> val << ": ";
    root -> right = create();

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
void rightview(TreeNode* root, int level, vector<int> &right)
{
    if(root == NULL) return;

    if(level == right.size()) right.push_back(root -> val);

    rightview(root -> right, level + 1, right);
    rightview(root -> left, level + 1, right);
}
int main()
{
    TreeNode* root = create();

    levelorder(root);

    vector<int> right;
    rightview(root, 0, right);
    cout << "RIGHT VIEW of BINARY TREE: ";
    for(auto i : right) cout << i << " ";

    return 0;
}