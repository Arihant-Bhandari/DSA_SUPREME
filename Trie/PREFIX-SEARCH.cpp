#include <iostream>
#include <unordered_map>
using namespace std;

class TrieNode
{
    public:
    char ch;
    unordered_map<char, TrieNode*> children;
    bool end;

    TrieNode(char ch)
    {
        this -> ch = ch;
        this -> end = false;
    }
};
void insertion(TrieNode* root, string word)
{
    if(word.length() == 0)
    {
        root -> end = true;
        return;
    }

    if(root -> children.find(word[0]) == root -> children.end())
    root -> children[word[0]] = new TrieNode(word[0]);

    insertion(root -> children.at(word[0]), word.substr(1));
}
TrieNode* search(TrieNode* root, string prefix)
{
    if(prefix.length() == 0)
    return root;

    if(root -> children.find(prefix[0]) != root -> children.end())
    return search(root -> children.at(prefix[0]), prefix.substr(1));
    else
    return root;
}
void findPrefix(TrieNode* root, string &create)
{
    if(root -> end) cout << create << endl;

    for(auto i : root -> children)
    {
        findPrefix(i.second, create.append(1, i.first));
        create = create.substr(0, create.length() - 1);
    }
}
int main()
{
    int n;
    cout << "Enter No. of Strings to be Inserted in TRIE: ";
    cin >> n;

    TrieNode* root = new TrieNode('#');
    
    for(int i = 0; i < n; i++)
    {
        string word;
        cout << "Enter String to be Inserted in TRIE: ";
        cin >> word;

        insertion(root, word);
    }

    string prefix;
    cout << "Enter Prefix to be Searched in TRIE: ";
    cin >> prefix;

    TrieNode* found = search(root, prefix);

    if(found -> ch != prefix[prefix.length() -1]) 
    cout << "NO SUCH PREFIX: " << prefix;
    else
    {
        findPrefix(found, prefix);
    }

    return 0;
}