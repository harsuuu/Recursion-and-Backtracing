#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;    
}*first=NULL;

void create(int A[], int n)
{
    struct Node *temp, *head;  
    {
        int i;
        first=(struct Node*)malloc(sizeof(struct Node));
        first->data=A[0];
        first->next=0;
        head=first;

        for(int i=1; i<5;i++)
        {
            temp=(struct Node*)malloc (sizeof(struct Node));
            temp->data=A[i];
            temp->next=0;
            head->next=temp;
            head=temp;
        }
    }
}

void display(struct Node *head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<endl;
    display(head->next);
}

int main()
{
    int A[]={1,2,3,4,5};
    create (A,5);

    display(first);



    return 0;
}

