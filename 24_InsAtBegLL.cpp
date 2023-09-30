/* Write a C++ program to Insert an element
 at the beginning of the linear linked list. */

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

        Node *node = start;

        if (node == nullptr)
        {
            cout << endl
                 << endl
                 << "Empty list !" << endl;
        }
        else
        {
            cout << endl
                 << endl
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
             << "Enter the number to insert : ";
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

    void InsAtBeg()
    {

        int x;
        cout << endl
             << endl
             << "Enter the number to insert : ";
        cin >> x;

        Node *newNode = new Node;

        newNode->data = x;

        newNode->next = start;
        start = newNode;
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
             << "Enter 'y' to add another element :";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    while (true)
    {
        cout << endl
             << endl
             << "Enter 'y' to insert at begining : ";
        cin >> ch;

        if (ch != 'y' && ch != 'Y')
        {
            break;
        }

        l.InsAtBeg();
        l.DispLL();
    }

    cout << endl
         << "Exiting...." << endl;

    return 0;
}
