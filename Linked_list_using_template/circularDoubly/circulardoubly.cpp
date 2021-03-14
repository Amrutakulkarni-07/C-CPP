//Demonstreation of doubly circular linked list
using namespace std;
#include<iostream>

template <class T>

struct Node 
{
    T data;
    struct Node *next;
    struct Node *prev;
};

template<class T>

class DoublyCircular
{

    public:
    struct Node <T> *Head;
    struct Node <T> *Tail;

    DoublyCircular()
    {
        Head=NULL;
        Tail=NULL;
    }
    void InsertFirst(T no)
    {
      struct Node<T> *newn=new Node<T>;
      newn->data=no;
      newn->next=NULL;
      newn->prev=NULL;
      if(Head==NULL && Tail==NULL)
      {
          Head=newn;
          Tail=newn;
      }
      else
      {
          newn->next=Head;
          Head->prev=newn;
          Head=Head->prev;
      }
      Tail->next=Head;
      Head->prev=Tail;
      
    }
    void InsertLast(T no)
    {
        struct Node<T> *newn=new Node<T>;
      newn->data=no;
      newn->next=NULL;
      newn->prev=NULL;
      if(Head==NULL && Tail==NULL)
      {
          Head=newn;
          Tail=newn;
      }
      else
      {
          Tail->next=newn;
          newn->prev=Tail;
          Tail=Tail->next;    //Tail=newn;
      }
        Tail->next=Head;
        Head->prev=Tail;
    }
    void DeleteFirst()
    {
        if(Head==NULL && Tail==NULL)
        {
            return;
        }
        else
        {
            struct Node<T>*temp=Head;
            Head=Head->next;
            free(temp);
        }
         Tail->next=Head;
        Head->prev=Tail;
        
    }
    void DeleteLast()
    {
        struct Node<T>*temp=Head;
        if(Head==NULL && Tail==NULL)
        {
            return;
        }
        else
        {
            while(temp->next->next!=Head)
            {
               temp=temp->next;
            }
             free(temp->next);
                Tail=temp;
        }
         Tail->next=Head;
        Head->prev=Tail;
        
    }
    void Display()
    {
        if(Head==NULL && Tail==NULL)
        {
            return ;
        }
        do
            {
                cout<<"|"<<Head->data<<"|";
                Head=Head->next;

            } while (Head!=Tail->next); 
            cout<<"\n";  
        
    }
    int Count()
    {
        int icnt=0;
        if(Head==NULL && Tail==NULL)
        {
            return 0;
        }
        do
            {
               icnt++;
                Head=Head->next;

            } while (Head!=Tail->next); 
            return icnt;  
    }
    void InsertAtPos(int pos,T no)
    {
            int size=0;
            int i=0;
        struct Node<T>*temp=Head;
  
        size=Count();
    if(pos<1 || pos>(size+1))
    {
        return;
    }
    else if(pos==1)
    {
        InsertFirst(no);   // (60,40,value);
    }
    else if(pos==size+1)
    {
        InsertLast(no);
    }
    else
        {
            struct Node<T> *newn=new Node<T>;
            newn->data=no;
            newn->next=NULL;
            newn->prev=NULL;
            for(i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            newn->next=temp->next;
            newn->prev=temp;
            temp->next=newn;
            newn->next->prev=newn;
        }
    }
    void DeleteAtPos(int pos)
    {
        int size=0;
        int i=0;
        size=Count();
        struct Node<T>*temp=Head;
        if(pos<1 || (pos>size))
        {
            return;
        }

        else if(pos==1)
        {
            DeleteFirst();
        }
        else if(pos==size)
        {
            DeleteLast();
        }
        else
        {
            for(i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            temp->next =  temp->next->next;
            free(temp->next->prev);
            temp->next->prev = temp;
        }
    }
};
int main()
{
DoublyCircular <int>iobj;
DoublyCircular <float> fobj;
float no1=0.0;
int choice1=1;
int ch=1;
int ch1=1;
int pos1=0;
 int no=0;
cout<<"doubly circular linked list using template\n";
while (choice1!=0)
{
 cout<<"enter your choice\n";
cout<<"1.inetger doubly circular  linked\n";
cout<<"2.float doubly circular  linked\n";
cout<<"0.exit:\n";
cin>>choice1;
    switch (choice1)
    {
    case 1:
        cout<<"1.inetger doubly circular linked\n";
        while(ch!=0)
        {
        cout<<"enter your choice\n";
        cout<<"1.insert first\n";
        cout<<"2.insert last\n";
        cout<<"3.delete first\n";
        cout<<"4.delete last\n";
        cout<<"5.Display\n";
        cout<<"6.count\n";
        cout<<"7.insert at position\n";
        cout<<"8.delete at position\n";
        cout<<"0.exit\n";
        cin>>ch;
                    switch (ch)
                    {
                    case 1:
                        cout<<"enter data:\n";
                        cin>>no;
                        iobj.InsertFirst(no);
                        break;
                    case 2:
                       cout<<"enter data:\n";
                        cin>>no;
                        iobj.InsertLast(no);
                        break;
                    case 3:
                    cout<<"delete first";
                    iobj.DeleteFirst();
                    break;

                    case 4:
                    cout<<"delete last";
                    iobj.DeleteLast();
                    break;

                    case 5:
                    iobj.Display();
                    break;

                    case 6:
                    cout<<"count of node :"<<iobj.Count()<<"\n";
                    break;

                    case 7:
                    cout<<"enter position:\n";
                    cin>>pos1;
                    cout<<"enter data:\n";
                    cin>>no;
                    iobj.InsertAtPos(pos1,no);
                    break;

                    case 8:
                    cout<<"enter position:\n";
                    cin>>pos1;
                    iobj.DeleteAtPos(pos1);
                    break;

                    default:
                        break;
                    }//end of intger switch template
        }    //end of inner while loop and case 1 main for integer object 4
        cout<<"thank you for using doubly circular integer linked list\n";
     break;

    case 2:
        cout<<"2.float doubly circular linked list:\n";
       while(ch1!=0)
        {
        cout<<"enter your choice\n";
        cout<<"1.insert first\n";
        cout<<"2.insert last\n";
        cout<<"3.delete first\n";
        cout<<"4.delete last\n";
        cout<<"5.Display\n";
        cout<<"6.count\n";
        cout<<"7.insert at position\n";
        cout<<"8.delete at position\n";
        cout<<"0.exit\n";
        cin>>ch1;
                    switch(ch1)
                    {
                    case 1:
                        cout<<"enter data:\n";
                        cin>>no1;
                        fobj.InsertFirst(no1);
                        break;
                    case 2:
                       cout<<"enter data:\n";
                        cin>>no1;
                        fobj.InsertLast(no1);
                        break;
                    case 3:
                    cout<<"delete first";
                    fobj.DeleteFirst();
                    break;

                    case 4:
                    cout<<"delete last";
                    fobj.DeleteLast();
                    break;

                    case 5:
                    fobj.Display();
                    break;

                    case 6:
                    cout<<"count of node :"<<fobj.Count()<<"\n";
                    break;

                    case 7:
                    cout<<"enter position:\n";
                    cin>>pos1;
                    cout<<"enter data:\n";
                    cin>>no1;
                    fobj.InsertAtPos(pos1,no1);
                    break;

                    case 8:
                    cout<<"enter position:\n";
                    cin>>pos1;
                    fobj.DeleteAtPos(pos1);
                    break;

                    default:
                        break;
                    }

        }
        cout<<"thank you for using doubly circular float linked list\n";
        break;
    default:
        break;
    }    //end of  outer switch choice 1
}   //end of while(choice1)
cout<<"thank your using doubly circular linked list application using template\n";


    return 0;
}








