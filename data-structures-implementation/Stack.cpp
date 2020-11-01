// Implementation of the stack data structure using C++
// Will be updating this with dynamic memory allocation soon.



#include<iostream>
#include<string>

using namespace std;

class Stack{
private:
    int top;
    int arr[5];

public:
    Stack(){
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty(){
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
    }

    bool isFull(){
    if (top == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
    }

    void Push (int v){
      if (isFull())
      {
          cout << "Stack Overflow";
      }
      else
      {
          top++;
          arr[top] = v;
      }
      }

    int Pop()
    {
        if(isEmpty())
        {
            cout << "Stack Underflow";
        }
        else{
            int pval = arr[top];
            arr[top] = 0;
            top--;
            return pval;
        }
    }

    int Count(){
        return (top+1);
    }

    int Peek(int p){
    {
        if(isEmpty())
        {
            cout << "Stack Underflow";
            return 0;
        }
        else
        {
            return arr[p];
        }
    }
    }

    void Change(int p, int v)
    {
        arr[p] = v;
    }

    void Display()
    {
        cout << "The Values in this stack are: " << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

// Main Program
int main()
{
    Stack s;

// Display Function to check if the stack works
    s.Display();
}

