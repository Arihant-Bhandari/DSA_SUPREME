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
TreeNode* createInorderBST(int arr[], int left, int right)
{
    if(left > right) return NULL;

    int mid = left + (right - left) / 2;

    TreeNode* root = new TreeNode(arr[mid]);

    root -> left = createInorderBST(arr, left, mid - 1);
    root -> right = createInorderBST(arr, mid + 1, right);

    return root;
}
int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter VALUE at index " << i << ": ";
        cin >> data;

        arr[i] = data;
    }

    TreeNode* root = createInorderBST(arr, 0, n - 1);

    levelorder(root);
 
    return 0;
}