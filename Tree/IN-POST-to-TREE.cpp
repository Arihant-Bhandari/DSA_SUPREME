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
int search(int in[], int size, int target)
{
    for(int i = 0; i < size; i++) if(in[i] == target) return i;
    return -1;
}
TreeNode* construct(int in[], int post[], int &post_in, int in_s, int in_e, int size)
{
    if(post_in < 0 || in_s > in_e) return NULL;

    TreeNode* root = new TreeNode(post[post_in--]);

    int split = search(in, size, root -> val);

    root -> right = construct(in, post, post_in, split + 1, in_e, size);
    root -> left = construct(in, post, post_in, in_s, split - 1, size);
    
    return root;
}
int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    int inorder[n];

    cout << "INORDER: " << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter ELEMENT for index " << i << ": ";
        cin >> inorder[i];
    }

    cout << "POSTORDER: " << endl;

    int postorder[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter ELEMENT for index " << i << ": ";
        cin >> postorder[i];
    }

    int post_in = n - 1;
    int in_s = 0;
    int in_e = n - 1;

    TreeNode* root = construct(inorder, postorder, post_in, in_s, in_e, n);

    levelorder(root);
    return 0;
}