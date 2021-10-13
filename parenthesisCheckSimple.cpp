#include <iostream>
#include <stdio.h>
using namespace std;

struct node
{
    char data;
    node *next;
};
struct Stack
{
    node *top = NULL;
};
bool isEmpty(Stack *s)
{
    if (s->top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(Stack *s)
{
    node *t = new node;
    if (t == NULL)
    {
        free(t);
        return true;
    }
    else
    {
        free(t);
        return false;
    }
}
void push(char element, Stack *s)
{

    if (isFull(s))
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    node *temp = new node;
    temp->data = element;
    temp->next = s->top;
    s->top = temp;
}
char pop(Stack *s)
{
    if (isEmpty(s))
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        node *p = s->top;
        char x = s->top->data;
        s->top = s->top->next;
        free(p);
        return x;
    }
}
int countNode(Stack *s)
{
    node *p = s->top;
    int count = 0;
    while (p)
    {
        count++;
        p = p->next;
    }
    return count;
}
char peek(int pos, Stack *s)
{
    if (pos < 0 || pos > countNode(s))
    {
        cout << "Invalid position" << endl;
    }
    else if (isEmpty(s))
    {
        cout << "Empty Stack" << endl;
    }
    else
    {
        node *p = s->top;
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        return p->data;
    }
}
char stackTop(Stack *s)
{
    if (isEmpty(s))
    {
        cout << "Stack empty" << endl;
    }
    else
    {
        return s->top->data;
    }
}
void display(Stack *s)
{
    if (isEmpty(s))
    {
        cout << "Nothing to display" << endl;
        return;
    }
    else
    {
        node *p = s->top;
        while (p)
        {
            cout << p->data << endl;
            p = p->next;
        }
    }
}
bool parenthesisCheck(string exp)

{
    Stack *s = new Stack;
    int i = 0;
    while (exp[i] != '\0')
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(exp[i], s);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(s))
            {
                // cout << i << endl;
                cout << "Stack Empty midway" << endl;
                return false;
            }
            //ASCII VALUES ->(-40 ,)-41 , [-91,]-93,{-123 AND }-125
            else if ((int)exp[i] - (int)stackTop(s) > 2 || (int)exp[i] - (int)stackTop(s) < 1)
            {
                cout << "Closing bracket do not match " << endl;
                return false;
            }
            else
            {
                int x = pop(s);
            }
        }

        i++;
    }
    if (isEmpty(s))
    {
        cout << "Balanced" << endl;
        return true;
    }
    else
    {
        cout << "Not Balanced" << endl;
        return false;
    }
}
int main()
{
    Stack *s = new Stack;
    string str;
    cout << "Enter the expression" << endl;
    cin >> str;
    cout << parenthesisCheck(str);

    return 0;
}