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

void insertNode(int data)
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

void diaplay()
{
    Node *current;
    current = head;
    while (current != NULL)
    {
        cout << current->data << " => ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

void pop()
{
    Node *current = head;
    while (current->next->next != NULL)
    {
        current = current->next;
    }
    current->next = NULL;
}

int main()
{
    int n, value, i = 1;
    cout << "How nodes do you want to insert? : ";
    cin >> n;
    while (i <= n)
    {
        cout << "Node: " << i << ": ";
        cin >> value;
        insertNode(value);
        i++;
    }

    diaplay();
    pop();
    diaplay();
}