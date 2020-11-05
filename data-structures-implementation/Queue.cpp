#include<iostream>
using namespace std;

class Queue{ // We create a class queue containing the private members as the front of the queue(fr) and rear of the queue (rear) 
private:   // As well as the size of the queue which we implement as an array.
    int fr;
    int rear;
    int arr[5];

public:  // We start off with the queue function initialising the queue's front and back as -1 each.
    // Then we run a quick for loop which initialises all the elements of the queue as 0.
    Queue()
    {
        fr = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty() // The isEmpty function is used to check if the queue is empty or not.
    {
        if (fr == -1 && rear == -1) // we check if the front and the back of the queue are both -1 (i.e. as initialised) we conclude the queue as empty.
        {
             return true;
        }
        else
        {
             return false;
        }
    }

    bool isFull() // we check if the back of the queue is 4 (i.e. the max index of the array) if it is 4 then, we conclude the queue as full.
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

    void Enqueue(int val) // Enqueue function is used to add an element in the queue. This function expects a value val.
    {
        if(isFull()) // We first check if the queue is full. If its full then we return.
        {
            cout << "Queue is full";
        }

        else if(isEmpty()) // Then we check if the queue is empty. 
        {
            rear = 0; // If it is empty we set the rear and front values as 0. Henceforth starting the queue element adding.        
            fr = 0;
            arr[rear] = val; // Then we add the value we get from the function to the index of rear.
        }

        else // If its neither empty nor full and instead has a few elements in it then,
        {
            rear++; // We first increment the rear from its previous value.
            arr[rear] = val; // Then we add the value we get from the function to the index of rear.
        }
    }

    int Dequeue() // Dequeue function is used to delete an element from the queue.
    {
        if(isEmpty()) // We first check if the queue is empty. If its empty then we return.
        {
            cout << "Queue is Empty";
            return 0;
        }

        else if(fr == rear) // We then check if the queue's front and rear are the same.
        {
            int x = arr[fr]; // if they are, we then initialise and integer x and store the value of front there.
            rear = -1; // we then set the index of rear as -1
            fr = -1; // and the value of index is set as -1 as well
            arr[fr] = 0; // we then set the value at the index of fr as 0 thus succesfully dequeuing.
            return x; // we then return the value of the variable we just dequeued.
        }

        else // if none of the above then the queue has a few elements
        {
            int x = arr[fr]; // we initialise x and store the value in front in it. 
            arr[fr] = 0; // we then set the value of front to 0.
            fr++; // we increment front by one
            return x; // and then we return the output of the value of front we stored in x.
        }
    }

    void Count() // The count function is used to count the number of elements in the queue. It uses a simple formula
    {
        cout << (rear - fr) + 1; // eg. Front = 0,  Rear = 3. Count = (3-0) + 1 = 4.
    }

    void Display()  // The display function is used to display all the elements in the queue. 
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << endl;;
        }
    }
};

// Main Driver Function (FOR TESTING MY PROGRAM)
int main()
{
    int v; // we initialise v for enqueuing
    Queue Q1; // set an object of queue as Q1
    
    // we then enqueue elements to the queue
    for (int i = 0; i < 5; i++)
    {
        cin >> v;
        Q1.Enqueue(v);
    }
    
    // we then dequeue two elements 
    Q1.Dequeue();
    Q1.Dequeue();
    
    // we then display the elements in the queue.
    Q1.Display();
    
    // then we check if the queue is full or not
    cout << Q1.isFull();
}
