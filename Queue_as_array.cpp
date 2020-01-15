#include<iostream>

using namespace std;

const int max_size=5;
class Queue
{
    int front, rear;
    int queue[max_size];
public:
    void insert();
    void del();
    void display();

    Queue()

    {
        front=-1;
        rear=-1;
    }
};

void Queue::insert()
{
    if(rear==max_size-1)
        cout<<"Queue is full";

    else if(rear==-1 && front==-1)
    {
        front++;
        rear++;
        cout<<"Enter value to insert :";
        cin>>queue[rear];
    }

    else
    {
        rear++;
        cout<<"Enter value to insert :";
        cin>>queue[rear];
    }

}

void Queue::del()
{
    if(front>rear || front==-1)
    {
        cout<<"Queue is empty !!";
        front=-1;
        rear=-1;
    }

    else if(front==rear)
    {
        cout<<"Deleted element :"<<queue[front];
        front=-1;
        rear=-1;
    }
    else
    {
        cout<<"Deleted element :"<<queue[front];
        front++;
    }
}

void Queue::display()
{
    if(front==-1 && rear==-1)
        cout<<"Queue is empty !!";

    else
    {
        cout<<"\nFront :"<<queue[front]<<"\n";
        cout<<"\nRear :"<<queue[rear]<<"\n";
    }
}

int main()
{
    Queue obj;
    int ans;

    cout<<"Queue as Linked List\n";

    do
    {
        cout<<"\n1.Insert\n2.del\n3.Display\n4.Exit\nEnter Choice :";
        cin>>ans;
        switch(ans)
        {
            case 1: obj.insert();
                break;

            case 2: obj.del();
                break;

            case 3: obj.display();
                break;

            case 4: ans=4;
                break;

            default: cout<<"Enter proper choice !!";
        }
    }while(ans!=4);

    return 0;
}








