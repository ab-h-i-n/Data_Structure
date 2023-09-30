/* 25. Write a C++ program to Insert an element after
a particular element in the linear linked list */

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
    Node *start;

public:
    LinkedList()
    {
        start = nullptr;
    }

    void DispLL()
    {
        if (start == nullptr)
        {
            cout << endl
                 << "Empty List!" << endl;
        }
        else
        {
            Node *node = start;
            cout << endl
                 << "List : ";
            while (node != nullptr)
            {
                cout << node->data << "\t";
                node = node->next;
            }
        }
    }

    void CreateLL()
    {
        int x;
        cout << endl
             << "Enter the element to insert : ";
        cin >> x;

        Node *newNode = new Node;
        newNode->data = x;
        newNode->next = nullptr;

        if (start == nullptr)
        {
            start = newNode;
        }
        else
        {
            Node *temp = start;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    Node *SearchNode(int x)
    {
        Node *temp = start;

        while (temp != nullptr)
        {
            if (temp->data == x)
            {
                return temp;
            }
            else
            {
                temp = temp->next;
            }
        }

        cout << endl
             << "Element not found!..Re-Try..!" << endl;
        return nullptr;
    }

    void InsAftElem()
    {
        int x;
        cout << endl
             << "Enter the number to insert : ";
        cin >> x;

        int xi;
        Node *node;
        while (true)
        {

            cout << endl
                 << "After which element to insert : ";
            cin >> xi;

            node = SearchNode(xi);

            if (node != nullptr)
            {
                break;
            }
        }

        Node *newNode = new Node;
        newNode->data = x;
        newNode->next = node->next;

        node->next = newNode;
    }
};

int main()
{
    LinkedList l;
    char ch;

    do
    {

        l.CreateLL();
        l.DispLL();

        cout << endl
             << endl
             << "Enter 'y' to insert another element : ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    while (true)
    {
        cout << endl
             << endl
             << "Enter 'y' to insert after a particular element : ";
        cin >> ch;

        if (ch == 'y' || ch == 'Y')
        {
            l.InsAftElem();
            l.DispLL();
        }
        else
        {
            cout << endl
                 << endl
                 << "Exiting..." << endl;
            exit(0);
        }
    }
    return 0;
}
