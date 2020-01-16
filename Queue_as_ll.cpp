
#include<iostream>

using namespace std;

class Queue
{
    Queue *next;
    int val;
    
public:

    void insert();
    void del();
    void display();
    
}*front=NULL, *rear=NULL;

void Queue::insert()
{
    
    Queue *node;
    node = new Queue;
    
    if(node==NULL)
        cout<<"OVERFLOW !!";
    
    else if(front==NULL && rear==NULL)
    {
        cout<<"Enter value :";
        cin>>node->val;
        
        node->next=rear;
        front=node;
        rear=node;
    }
    
    else
    {
        cout<<"Enter value :";
        cin>>node->val;
        
        node->next=NULL;
        rear->next=node;
        rear=node;
    }

}

void Queue::del()
{
    Queue * temp;
    
    temp=front;
    
   if(front==NULL && rear==NULL)
        cout<<"UNDERFLOW !!";
        
    else if(front==rear)
    {
        cout<<"Deleted Element :"<<temp->val;
        front=NULL;
        rear=NULL;
        delete temp;
    }
    
    else
    {
        cout<<"Deleted Element :"<<temp->val;
        front=front->next;
        delete temp;
    }
}

void Queue::display()
{
    
    if(front==NULL && rear==NULL)
        cout<<"Queue is Empty !!\n";
    
    else
    {
        cout<<"Front :"<<front->val<<"\n";
        cout<<"Rear :"<<rear->val<<"\n";
    }
}

int main()
{
    Queue obj;
    int ans;

    cout<<"Queue as Linked List\n";

    do
    {
        cout<<"\n1.Insert\n2.Del\n3.Display\n4.Exit\nEnter Choice :";
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






