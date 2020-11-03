// Implementation of the stack data structure using C++
// Will be updating this with dynamic memory allocation soon.



#include<iostream>
#include<string>

using namespace std;
// Created a class Stack and added its top and the size of array in which the stack will be implemented.

class Stack{
private:
    int top;
    int arr[5];
// Added a public funtion for the Stack.
public:
    Stack(){
        top = -1; // Initialised the top as -1 because the stack is currently emply.
        for (int i = 0; i < 5; i++) 
        {
            arr[i] = 0; // Used a for loop and Initialised all the elements of the Stack as 0.
        }
    }

// Boolean Funtion isEmpty to check if the stack if empty or not.
    bool isEmpty(){
    if (top == -1) // We check if the top is still -1 (since no value will be inserted). If its -1, then it will be empty.
    {
        return true; // If yes it returns true
    }
    else
    {
        return false; // Else it returns false
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

    int Count(){  // Count funtion which returns the number of elements in the Stack. It is simple and returns the top value + 1 since the stack is initialised from 0.
        return (top+1);
    }

    int Peek(int p){ // Peek function to used to return the element at a specific position p. It takes the input of position p and then returns the value at p.
    {
        if(isEmpty()) // If the stack is empty then it returns "Stack Underflow".
        {
            cout << "Stack Underflow";
            return 0;
        }
        else  // Else it returns the value.
        {
            return arr[p]; 
        }
    }
    }

    void Change(int p, int v) // Change function which is used to change a specific value in the Stack. 
                              // It expects 2 value, the position to be changed "p" and the value "v"
    {
        arr[p] = v;
    }

    void Display() // Display function to display all the elements in the stack.
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
    Stack s; // Created an object s to use the Stack s.

// Display Function to check if the stack works
    s.Display();
}

