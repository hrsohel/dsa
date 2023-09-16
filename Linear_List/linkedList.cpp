#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
    Node(int value)
    {
        data = value;
    }
};

Node *head = NULL;

void insert(int data)
{
    Node *current;
    if (head == NULL)
    {
        head = new Node(data);
    }
    else
    {
        current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new Node(data);
    }
}

void insertAtBegining(int data)
{
    Node *current = new Node(data);
    current->next = head;
    head = current;
}

void insertAfterNode(Node *node, int data)
{
    Node *newNode = new Node(data), *afterNode;
    afterNode = node->next;
    node->next = newNode;
    newNode->next = afterNode;
}

void display()
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " => ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

void updateNode(Node *node, int data)
{
    node->data = data;
}

void removeFirst()
{
    Node *removeNode = head;
    head = head->next;
    delete removeNode;
}

void pup()
{
    Node *current = head, *removeNode;
    while (current->next->next != NULL)
    {
        current = current->next;
    }
    removeNode = current->next;
    current->next = NULL;
    delete removeNode;
}

void removeAfterNode(Node *node)
{
    Node *removeNode = node->next;
    node->next = node->next->next;
}

bool search(int data)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->data == data)
            return true;
        current = current->next;
    }
    return false;
}

int main()
{
    insert(5);
    insert(8);
    insert(4);
    insert(9);
    insertAtBegining(1);
    insertAtBegining(0);
    // display();
    updateNode(head->next->next, 10);
    display();
    removeAfterNode(head->next->next);
    removeFirst();
    display();
    pup();
    // display();
    // removeAfterNode(head->next);
    display();
    search(1) ? cout << "Yes" : cout << "No";
}