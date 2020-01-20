#include <iostream>

using namespace std;

const int max_size=5;

 class Queue
 {
    int queue[max_size];
    int front, rear;
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
    if((rear+1)%max_size==front)
    {
        cout<<"\nOVERFLOW !!\n";
        return;
            
    }
        
    else if(rear==-1)
    {
        front++;
        rear++;
    }
    
    else if(rear==max_size-1 && front!=rear)
       { 
           rear=0;
          
       }
        
    else 
       {    
           rear=(rear+1)%max_size;
       }
    
    cout<<"Enter value :";
    cin>>queue[rear];
}

void Queue::del()
{
    if(front==-1)
        cout<<"\nUNDERFLOW !!\n";
        
    else if(front==rear)
    {
        cout<<"\nDeleted Element :"<<queue[front]<<"\n";
        front=-1;
        rear=-1;
    }
    
    else
    {
        cout<<"\nDeleted Element :"<<queue[front]<<"\n";
        front++;
    }
        
    
}

void Queue::display()
{
    if(front==-1 && rear==-1)
        cout<<"\nCircular Queue is empty !!\n";
        
    else
    {
        cout<<"Front :"<<queue[front];
        cout<<"\nRear :"<<queue[rear]<<"\n";
    }
}

int main()
{
    Queue obj;
    int ans;
    
    cout<<"Circular Queue as an Array\n";
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










