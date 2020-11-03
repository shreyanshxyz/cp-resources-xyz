#include<iostream>
using namespace std;

class Queue{
private:
    int fr;
    int rear;
    int arr[5];

public:
    Queue()
    {
        fr = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (fr == -1 && rear == -1)
        {
             return true;
        }
        else
        {
             return false;
        }
    }

    bool isFull()
    {
        if (rear == 4)
        {
             return true;
        }
        else
        {
             return false;
        }
    }

    void Enqueue(int val)
    {
        if(isFull())
        {
            cout << "Queue is full";
        }

        else if(isEmpty())
        {
            rear = 0;
            fr = 0;
            arr[rear] = val;
        }

        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    int Dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty";
            return 0;
        }

        else if(fr == rear)
        {
            int x = arr[fr];
            rear = -1;
            fr = -1;
            arr[fr] = 0;
            return x;
        }

        else
        {
            int x = arr[fr];
            arr[fr] = 0;
            fr++;
            return x;
        }
    }

    void Count()
    {
        cout << (rear - fr) + 1;
    }

    void Display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << endl;;
        }
    }
};

int main()
{
    int v;
    Queue Q1;
    for (int i = 0; i < 5; i++)
    {
        cin >> v;
        Q1.Enqueue(v);
    }
    Q1.Dequeue();
    Q1.Dequeue();
    Q1.Display();
    cout << Q1.isFull();
}
