#include <iostream>
#include <queue>
#include <map>
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
    if(root == NULL) return;

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
void topview(TreeNode* root)
{
    if(root == NULL) return;

    map<int, int> mapper;
    queue<pair<TreeNode*, int>> que;

    que.push(make_pair(root, 0));

    while(!que.empty())
    {
        pair<TreeNode*, int> temp = que.front();
        que.pop();

        if(mapper.find(temp.second) == mapper.end()) 
        mapper[temp.second] = temp.first -> val;

        if(temp.first -> left != NULL) que.push(make_pair(temp.first -> left, temp.second - 1));
        if(temp.first -> right != NULL) que.push(make_pair(temp.first -> right, temp.second + 1));
    }

    cout << "TOP VIEW of BINARY TREE: ";
    for(auto i : mapper) cout << i.second << " ";
    cout << endl;
}
int main()
{
    TreeNode* root = create();

    cout << "LEVEL ORDER TRAVERSAL: " << endl;
    levelorder(root);

    topview(root);

    return 0;
}