#include<iostream>

using namespace std;

class Stack
{
    Stack * next;
    int no;

public:
    void push();
    void pop();
    void Top();

}*top=NULL;

void Stack::push()
{
    Stack * node;
    node = new Stack;

    if(node==NULL)
        cout<<"OVERFLOW !!";

    else
    {
        node->next=top;
        top=node;
        cout<<"Enter value to insert :";
        cin>>node->no;
    }
}

void Stack::pop()
{
    Stack * temp;
    temp=top;

    if(temp==NULL)
        cout<<"UNDERFLOW !!";

    else
    {
        cout<<"Poped value :"<<temp->no;
        top=temp->next;
        delete temp;
    }
}

void Stack::Top()
{
    if(top==NULL)
        cout<<"List is empty !!";

    else
    {
        cout<<"\nTop :"<<top->no<<"\n";
    }
}

int main()
{
    Stack obj;
    int ans;

    cout<<"Stack as Linked List\n";

    do
    {
        cout<<"\n1.Push\n2.Pop\n3.Top\n4.Exit\nEnter Choice :";
        cin>>ans;
        switch(ans)
        {
            case 1: obj.push();
                break;

            case 2: obj.pop();
                break;

            case 3: obj.Top();
                break;

            case 4: ans=4;
        }
    }while(ans!=4);

    return 0;
}









