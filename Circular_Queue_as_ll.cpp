#include <iostream>

using namespace std;

 class Queue
 {
    Queue * next;
    int val;
    
    public:
    void insert();
    void del();
    void display();
    
 }*front=NULL, *rear=NULL;

void Queue::insert()
{
    Queue * temp;
    temp = new Queue;
    
    if(temp==NULL)
    {
        cout<<"\nOVERFLOW !!\n";
        return;
            
    }
        
    else if(rear==NULL && front==NULL)
    {
        front=temp;
        rear=temp;
        temp->next=front;
    }
    
    else 
    { 
        rear->next=temp;
        rear=temp;
        temp->next=front;
    }
    
    cout<<"Enter value :";
    cin>>temp->val;
}

void Queue::del()
{
    Queue * temp;
    temp=front;
    
    if(front==NULL)
        cout<<"\nUNDERFLOW !!\n";
        
    else if(front==rear)
    {
        cout<<"\nDeleted Element :"<<temp->val<<"\n";
        front=NULL;
        rear=NULL;
        delete temp;
    }
    
    else
    {
        cout<<"\nDeleted Element :"<<temp->val<<"\n";
        front=temp->next;
        delete temp;
    }
        
    
}

void Queue::display()
{
    
    if(front==NULL && rear==NULL)
        cout<<"\nCircular Queue is empty !!\n";
        
    else
    {
        cout<<"Front :"<<front->val;
        cout<<"\nRear :"<<rear->val<<"\n";
    }
}

int main()
{
    Queue obj;
    int ans;
    
    cout<<"Circular Queue as an Linked List\n";
    do
    {
        cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter choice :";
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
                    
            default : cout<<"Enter proper choice !!\n"; 
        }
    }while(ans!=4);
  
   
   return 0;
}










