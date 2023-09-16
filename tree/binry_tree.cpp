#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node *root = NULL;

void inserNode(Node *current, int data)
{
    Node *node = new Node(data), *temp;
    if (root == NULL)
        root = new Node(data);
    else
    {
        if (data < current->data)
        {
            if (current->left == NULL)
                current->left = node;
            else
                inserNode(current->left, data);
        }
        else if (data > current->data)
        {
            if (current->right == NULL)
                current->right = node;
            else
                inserNode(current->right, data);
        }
    }
}

void preOrder(Node *current)
{
    cout << current->data << " ";
    if (current->left)
        preOrder(current->left);
    if (current->right)
        preOrder(current->right);
}

void inOrder(Node *current)
{
    if (current->left)
        inOrder(current->left);
    cout << current->data << " ";
    if (current->right)
        inOrder(current->right);
}

void postOrder(Node *current)
{
    if (current->left)
        postOrder(current->left);
    if (current->right)
        postOrder(current->right);
    cout << current->data << " ";
}

int main()
{
    int t, temp, i = 0;
    cout << "How many nodes you want to add: ";
    cin >> t;
    while (t--)
    {
        cout << "Node " << ++i << ": ";
        cin >> temp;
        inserNode(root, temp);
    }
    cout << "Pre-order: ";
    preOrder(root);
    cout << endl;
    cout << "In-order: ";
    inOrder(root);
    cout << endl;
    cout << "Post-order: ";
    postOrder(root);
}