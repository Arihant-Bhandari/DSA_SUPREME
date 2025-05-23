#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node()
    {
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}
int length(Node *&head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}
void insertHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);

        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);

        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}
void insertTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);

        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void insertPosition(Node *&head, Node *&tail, int data, int position)
{
    int len = length(head);
    if (position <= 1)
        insertHead(head, tail, data);
    else if (position > len)
        insertTail(head, tail, data);
    else
    {
        Node *newNode = new Node(data);
        Node *prevnode = NULL;
        Node *currnode = head;

        while (position != 1)
        {
            prevnode = currnode;
            currnode = currnode->next;
            position--;
        }

        prevnode->next = newNode;
        newNode->prev = prevnode;

        newNode->next = currnode;
        currnode->prev = newNode;
    }
}
void deleteNode(Node *&head, Node *&tail, int position)
{
    int len = length(head);
    if (head == NULL)
    {
        cout << "ERROR: Cannot Delete since Linked List is empty." << endl;
        return;
    }
    if (head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;

        delete temp;
    }
    else if (position == len)
    {
        Node *temp = tail->prev;
        temp->next = NULL;
        tail->prev = NULL;

        delete tail;

        tail = temp;
    }
    else
    {
        Node *prevn = NULL;
        Node *currn = head;
        // Node* nextn = head -> next;

        // while(position != 1)
        // {
        //     prevn = currn;
        //     currn = nextn;
        //     nextn = nextn -> next;
        //     position--;
        // }

        // prevn -> next = nextn;
        // currn -> prev = NULL;
        // currn -> next = NULL;
        // nextn -> prev = prevn;

        // delete currn;

        while (position != 1)
        {
            prevn = currn;
            currn = currn->next;
            position--;
        }

        prevn->next = currn->next;
        currn->next->prev = currn->prev;
        currn->prev = NULL;
        currn->next = NULL;

        delete currn;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertHead(head, tail, 5);
    insertHead(head, tail, 4);
    insertHead(head, tail, 3);
    insertHead(head, tail, 1);

    print(head);
    cout << "X" << endl;

    insertTail(head, tail, 6);

    print(head);
    cout << "X" << endl;

    insertPosition(head, tail, 2, 7);

    print(head);
    cout << "X" << endl;

    deleteNode(head, tail, length(head));

    print(head);
    cout << "X" << endl;

    deleteNode(head, tail, 1);

    print(head);
    cout << "X" << endl;

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    return 0;
}