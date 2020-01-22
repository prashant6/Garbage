
#include <iostream>

using namespace std;

class qu1
{
    qu1 * n1;
    int val1;

    public:
    void enq1(int);
    int deq1();
}*f1=NULL, *r1=NULL, *q1=NULL;


void qu1::enq1(int a)
{
    qu1 *pt1;
    pt1 = new qu1;
    pt1->n1=NULL;

    if(pt1==NULL)
        cout<<"OVERFLOW !!";

    else if(f1==NULL)
    {
        f1 = pt1;
        r1 = pt1;
        q1 = pt1;

        pt1->val1=a;
    }

    else
    {
        r1->n1=pt1;
        r1=pt1;
        pt1->val1=a;

    }

}


int qu1::deq1()
{
    int a;
    qu1 * t1;
    t1=f1;

    if(t1==NULL)
        cout<<"UNDERFLOW !!";

    else if(f1==r1)
    {
        a = t1->val1;
        f1=NULL;
        r1=NULL;
        q1=NULL;

        delete t1;
        return a;
    }

    else
    {
        a = t1->val1;
        f1=f1->n1;

        delete t1;
        return a;
    }

}


class qu2
{
    qu2 *n2;
    int val2;

    public:
    void enq2(int);
    int deq2();
}*f2=NULL, *r2=NULL, *q2=NULL;


void qu2::enq2(int a)
{
    qu2 *pt2;
    pt2 = new qu2;
    pt2->n2=NULL;

    if(pt2==NULL)
        cout<<"OVERFLOW !!";

    else if(f2==NULL)
    {
        f2 = pt2;
        r2 = pt2;
        q2 = pt2;

        pt2->val2=a;
    }

    else
    {
        r2->n2=pt2;
        r2=pt2;
        pt2->val2=a;
    }

}


int qu2::deq2()
{
    int a;
    qu2 * t2;
    t2=f2;

    if(t2==NULL)
        cout<<"UNDERFLOW !!";

    else if(f2==r2)
    {
        a = t2->val2;
        f2=NULL;
        r2=NULL;
        q2=NULL;

        delete t2;
        return a;
    }

    else
    {
        a = t2->val2;
        f2=f2->n2;

        delete t2;
        return a;
    }

}

int main()
{
    int val, nos, garbage;
    qu1 obj1;
    qu1 *temp=f1;
    qu2 obj2;

    cout<<"Enter no of values to be pushed :";
    cin>>nos;

    while(nos!=0)
    {
        cout<<"Enter val :";
        cin>>val;

        if(q1==NULL)
            obj1.enq1(val);

        else
        {
            while(q1!=NULL)
            {
                obj2.enq2(obj1.deq1());
            }

            obj1.enq1(val);

            while(q2!=NULL)
            {
                obj1.enq1(obj2.deq2());
            }
        }

        nos--;
    }

    while(q1!=NULL)
    {
        garbage = obj1.deq1();
        cout<<"values in stack :"<<garbage<<"\n";

    }

    return 0;
}







