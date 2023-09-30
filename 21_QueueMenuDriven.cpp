/*Write a program to implementation of
queue using arrays (linear queue ) menu driven program*/

#include <iostream>
#define MAX 5
using namespace std;

class Queue
{

    int f;
    int r;
    int q[MAX];
    int n;

public:
    Queue()
    {
        f = r = -1;
    }
    void DispQ()
    {

        if (f == -1 || f > r)
        {
            cout << endl
                 << endl
                 << "Queue is empty!" << endl;
        }
        else
        {
            cout << endl
                 << endl
                 << "Queue : ";
            for (int i = f; i <= r; i++)
            {
                cout << q[i] << "\t";
            }
        }
    }

    void ReadQ()
    {
        while (true)
        {
            cout << endl
                 << "Enter the size of queue : ";
            cin >> n;

            if (n < 1 || n > MAX)
            {
                cout << endl
                     << endl
                     << "Invalid size!" << endl;
            }
            else
            {
                break;
            }
        }
        cout << endl
             << "Enter the element of the queue : ";
        for (r = 0; r < n; r++)
        {
            cin >> q[r];
        }
        r--;
        f = 0;
        DispQ();
    }

    void InsQ()
    {

        if (r == MAX - 1)
        {
            cout << endl
                 << endl
                 << "Cant insert more elemets or Queue is full!" << endl;
            return;
        }

        int x;
        cout << "Enter the element : ";
        cin >> x;
        q[++r] = x;

        cout << endl
             << endl
             << "Element " << x << " has been inserted!" << endl;
        DispQ();
    }

    void DelQ()
    {

        if (f == -1)
        {
            cout << endl
                 << endl
                 << "Queue is empty!" << endl;
            return;
        }

        int x = q[f++];

        cout << endl
             << endl
             << "Element " << x << " has been deleted!" << endl;
        DispQ();
    }
};

int main()
{

    Queue q;

    q.ReadQ();

    int ch;
    while (true)
    {
        cout << endl
             << endl;
        cout << "1.Insert" << endl
             << "2.Delete" << endl
             << "0.Exit" << endl
             << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            q.InsQ();
            break;
        case 2:
            q.DelQ();
            break;
        case 0:
            cout << endl
                 << endl
                 << "Exiting...." << endl;
            exit(0);
            break;
        default:
            cout << endl
                 << endl
                 << "Invalid choice!" << endl;
            break;
        }
    }

    return 0;
}
