#include <iostream>
using namespace std;

#define MAX 10

class Stack 
{
private:
    int arr[MAX];
    int top;

public:
    Stack() : top(-1) {} // Constructor initializes top to -1

    void push(int num) 
    {
        if (top == MAX - 1) 
            cout << "STACK OVERFLOW\n";
        else 
        {
            arr[++top] = num;
            cout << "Element inserted: " << num << endl;
        }
    }

    void pop() 
    {
        if (top == -1) 
            cout << "STACK UNDERFLOW\n";
        else 
            cout << "Element deleted: " << arr[top--] << endl;
    }

    void peep() const // const indicates the function does not modify any instance variables of class
    {
        if (top == -1)
            cout << "Stack Empty\n";
        else 
            cout << "Element at top: " << arr[top] << endl; // displays top element
    }

    void size() const 
    {
        cout << "Current stack size: " << (top + 1) << endl;
    }

    void display() const 
    {
        if (top == -1) 
            cout << "Nothing to Display\n";
        else 
        {
            cout << "Stack elements:\n";
            for (int i = top; i >= 0; i--) 
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() 
{
    Stack st;
    int ch, num;
    cout << "1 for PUSH\n";
    cout << "2 for POP\n";
    cout << "3 for PEEP\n";
    cout << "4 for SIZE\n";
    cout << "5 for DISPLAY\n";
    cout << "6 for EXIT\n";
    while (true) 
    {
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch) 
        {
            case 1:
                cout << "Enter the number to be inserted: ";
                cin >> num;
                st.push(num);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.peep();
                break;
            case 4:
                st.size();
                break;
            case 5:
                st.display();
                break;
            case 6:
                return 0;
            default:
                cout << "Wrong Choice\n" << endl;
        }
    }
}
