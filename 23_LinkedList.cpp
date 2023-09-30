/*Write a C++ program to create linear linked list and print the same. (do not enter the size of
the list in advance dynamic concept). */

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

    void CreateLL()
    {
        int x;
        cout << endl
             << "Enter the number to insert: ";
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

    void DispLL()
    {
        Node *node = start;
        if (node == nullptr)
        {
            cout << endl
                 << endl
                 << "Empty list!" << endl;
        }
        else
        {
            cout << endl
                 << "List : ";
            while (node != nullptr)
            {
                cout << node->data << "\t";
                node = node->next;
            }
        }
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
             << "Do you want to insert another number (enter 'y' for continue): ";
        cin >> ch;
    } while (ch == 'y');
    cout << endl
         << endl
         << "Exiting....." << endl;
    return 0;
}
