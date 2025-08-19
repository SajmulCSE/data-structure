#include <iostream>

using namespace std;
#define size 4;
int top = -1;
int stack[size];

void push()
{
    if (top >= size - 1)
    {
        cout << "Stack Overflow!!!" << endl;
        return;
    }

    int value;
    cin >> value;

    top++;
    stack[top] = value;
}

void pop() {}

void show() {}

int main()
{
    int n, choice;
    while (1)
    {
        cout << "1. Push" << endl
             << "2. Pop" << endl
             << "3. Show" << endl
             << "4. Exit" << endl;

        cin >> choice;

    switch (choice) {
        case 1:
    {
        push();
        break;
    }
    case 2:
    {
        pop();
        break;
    }
    case 3:
    {
        show();
        break;
    }
    case 4:
    {
        return 0;
    }
    }
}

}

