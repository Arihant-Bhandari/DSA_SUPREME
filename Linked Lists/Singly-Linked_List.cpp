#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}
int length(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp -> next;
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
        tail = newNode;
    }
}
void insertPosition(Node* &head, Node* &tail, int position, int data)
{
    int len = length(head);

    // if(position < 1)
    // cout << "ERROR" << endl;

    if(position <= 1)
    insertHead(head, tail, data);
    else if(position > len)
    insertTail(head, tail, data);
    else
    {
        Node* newNode = new Node(data);

        // Node* prev = NULL;
        // Node* curr = head;

        // while(position != 1)
        // {
        //     prev = curr;
        //     curr = curr -> next;
        //     position--;
        // }

        // prev -> next = newNode;
        // newNode -> next = curr;

        Node* prev = head;

        while(position != 2)
        {
            prev = prev -> next;
            position--;
        }

        newNode -> next = prev -> next;
        prev -> next = newNode;
    }
}
void deleteNode(Node* &head, Node* &tail, int position)
{
    if(head == NULL)
    {
        cout << "ERROR: Cannot Delete because Linked List is empty." << endl;
        return;
    }
    if(head == tail)
    {
        Node* temp = head;

        delete head;

        head = NULL;
        tail = NULL;
        return;
    }

    int len = length(head);
    if(position == 1)
    {
        Node* temp = head;
        head = temp -> next;
        temp -> next = NULL;

        delete temp;
    }
    else if(position == len)
    {
        Node* temp = head;

        while(temp -> next != tail)
        temp = temp -> next;

        temp -> next = NULL;
        delete tail;

        tail = temp;
    }
    else
    {
        Node* prev = NULL;
        Node* curr = head;

        while(position != 1)
        {
            prev = curr;
            curr = curr -> next;
            position--;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}
int main()
{
    // Node* head = NULL;
    // Node* tail = NULL;

    // insertTail(head, tail, 1);

    // print(head);
    // cout << "X" << endl;
    // cout << "Length: " << length(head) << endl;

    // insertTail(head, tail, 6);
    // print(head);
    // cout << "X" << endl;

    // insertHead(head, tail, 0);
    // print(head);
    // cout << "X" << endl;

    // deleteNode(head, tail, 1);
    // print(head);
    // cout << "X" << endl;

    // deleteNode(head, tail, length(head));
    // print(head);
    // cout << "X" << endl;

    // deleteNode(head, tail, 1);
    // print(head);
    // cout << "X" << endl;

    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node *head = first;
    Node *tail = fifth;

    print(head);
    cout << "X" << endl;

    cout << "Length: " << length(head) << endl;

    insertHead(head, tail, 0);

    print(head);
    cout << "X" << endl;

    insertTail(head, tail, 6);

    print(head);
    cout << "X" << endl;

    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;

    return 0;
}