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

pair<int, bool> heapify(TreeNode* root)
{
    if(root == NULL) return make_pair(INT_MIN, true);

    if(root -> left == NULL && root -> right == NULL) return make_pair(root -> val, true);

    auto left = heapify(root -> left);
    auto right = heapify(root -> right);

    if(root -> val > left.first && root -> val > right.first && left.second && right.second)
    return make_pair(root -> val, true);
    else
    return make_pair(max(root -> val, max(left.first, right.first)), false);
}
bool validate(TreeNode* root)
{
    return heapify(root).second;
}
int main()
{
    TreeNode* root = create();

    if(validate(root))
    cout << "Valid HEAP: CBT behave as HEAP.";
    else
    cout << "Invalid HEAP: CBT does not behave as HEAP.";

    return 0;
}