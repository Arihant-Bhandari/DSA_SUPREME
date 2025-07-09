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
int search(int post[], int size, int target)
{
    for(int i = 0; i < size; i++) if(post[i] == target) return i;
    return -1;
}
TreeNode* construct(int pre[], int post[], int &pre_in, int post_s, int post_e, int size)
{
    if(pre_in >= size|| post_s > post_e) return NULL;

    TreeNode* root = new TreeNode(pre[pre_in++]);

    int split = search(post, size, root -> val);

    root -> left = construct(pre, post, pre_in, post_s, split - 1, size);
    root -> right = construct(pre, post, pre_in, split + 1, post_e, size);

    return root;
}
int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    int preorder[n];

    cout << "PREORDER: " << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter ELEMENT for index " << i << ": ";
        cin >> preorder[i];
    }

    cout << "POSTORDER: " << endl;

    int postorder[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter ELEMENT for index " << i << ": ";
        cin >> postorder[i];
    }

    int pre_in = 0;
    int post_s = 0;
    int post_e = n - 1;

    TreeNode* root = construct(preorder, postorder, pre_in, post_s, post_e, n);

    levelorder(root);
    return 0;
}