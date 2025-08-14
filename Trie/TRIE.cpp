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
        end = false;
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
bool search(TrieNode* root, string word)
{
    if(word.length() == 0) return root -> end;

    if(root -> children.find(word[0]) != root -> children.end())
    return search(root -> children.at(word[0]), word.substr(1));
    else 
    return false;
}
void deletion(TrieNode* root, string word)
{
    if(word.length() == 0) 
    {
        root -> end = false;
        return;
    }

    if(root -> children.find(word[0]) != root -> children.end())
    deletion(root -> children.at(word[0]), word.substr(1));
    else
    return;
}
int main()
{
    TrieNode* root = new TrieNode('#');

    int n;
    cout << "Enter No. of Strings to be Inserted in TRIE: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string word;
        cout << "Enter String to be inserted in TRIE: ";
        cin >> word;

        insertion(root, word);
    }

    cout << "INSERTED IN TRIE." << endl;

    string word;
    cout << "Enter String to be Searched in TRIE: ";
    cin >> word;

    if(search(root, word)) cout << "FOUND." << endl;
    else cout << "NOT FOUND." << endl;

    string del;
    cout << "Enter String to be Deleted in TRIE: ";
    cin >> del;

    deletion(root, del);

    if(search(root, del)) cout << "FOUND." << endl;
    else cout << "NOT FOUND." << endl;

    return 0;
}