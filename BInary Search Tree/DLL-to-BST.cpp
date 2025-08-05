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
TreeNode* create(TreeNode* &head, int n)
{
    if(head == NULL || n <= 0) return NULL;

    TreeNode* leftsub = create(head, n / 2);

    TreeNode* root = head;
    root -> left = leftsub;

    head = head -> right;

    TreeNode* rightsub = create(head, n - n / 2 - 1);

    root -> right = rightsub;

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
    TreeNode* first = new TreeNode(1);
    TreeNode* second = new TreeNode(2);
    TreeNode* third = new TreeNode(3);

    first -> left = NULL;
    first -> right = second;
    second -> left = first;
    second -> right = third;
    third -> left = second;
    third -> right = NULL;
    
    TreeNode* head = first;

    TreeNode* root = create(head, 3);

    levelorder(root);

    return 0;
}