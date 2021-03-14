

//Demonstration of doubly linked list using template with generic programming 

using namespace std;
#include<iostream>

template <class T>
struct Node
{
    T data;
    struct Node *next;
    struct Node *prev;
};

template <class T>
class DoublyLinked
{

    public:
    struct Node <T> *Head;
    DoublyLinked()       //constructor 
    {
        Head=NULL;
    }
    void InsertFirst(T no)
    {
       struct Node <T> *newn=new Node <T>;
       newn->data=no;
       newn->next=NULL;
       newn->prev=NULL;

       if(Head==NULL)  //list is empty 
       {
           Head=newn;
       }
       else            //list has one or more node 
       {
           newn->next=Head;
           newn->prev=NULL;
           Head=newn;
       }
       
    }
    void InsertLast(T no)
    {
         struct Node <T> *newn=new Node <T>;
       newn->data=no;
       newn->next=NULL;
       newn->prev=NULL;

       if(Head==NULL)  //list is empty 
       {
           Head=newn;
       }
       else            //list has one or more node 
       {
           struct Node <T>*temp=Head;
           while(temp->next!=NULL)
           {
               temp=temp->next;
           }
           temp->next=newn;  
           newn->prev=temp;
       }
    }
    void DeleteFirst()
    {
         if(Head==NULL)
         {
             return;   //list is empty 
         }
         else if(Head->next==NULL)
         {
            Head=Head->next;   
            return;
         }
         else       //more than one node 
         {
             Head=Head->next;
             free(Head->prev);
             Head->prev=NULL;
         }      
    }
    void DeleteLast()
    {
        if(Head==NULL)
         {
             return;   //list is empty 
         }
         else if(Head->next==NULL)
         {
            Head=Head->next;   
            return;
         }
        else
        {
             struct Node <T> *temp=Head;
             while (temp->next->next!=NULL)    // temp reaches second last node
             {
                temp=temp->next;
             }
             free(temp->next);
             temp->next=NULL;
        }
    }
    void Display()
    {
            struct Node <T> *temp=Head;
            while(temp!=NULL)
            {
                cout<<"|->"<<temp->data<<"->|";
                temp=temp->next;
            }
            cout<<"\n";
    }
    int Count()
    {
            struct Node <T> *temp=Head;
            int icnt=0;
            while(temp!=NULL)
            {
                temp=temp->next;
                icnt++;
            }
            return icnt;
    }
    void InsertAtPos(int pos,T no)
    {
            int size=Count();
            int i=0;
            if(pos<1 || pos>(size+1))
            {
                return;
            }
            if(pos==1)
            {
                InsertFirst(no);
            }
            else if(pos==size+1)
            {
                InsertLast(no);
            }
            else
            {
                struct Node <T> *temp=Head;     //100 
                struct Node <T> *newn=new Node<T>;   //500
                newn->data=no;
                newn->next=NULL;
                newn->prev=NULL;
                //100  200  300
                for(i=1;i<pos-1;i++)   //1   2     
                {
                    temp=temp->next;    //200  300
                }
                newn->next=temp->next;      //500->next=300->next=400
                temp->next->prev=newn;      //400->prev=500

                newn->prev=temp;    //500->prev=300
                temp->next=newn;      //300->next=500 
            }
    }
    void DeleteAtPos(int pos)
    {
            int size=Count();
            int i=0;
            if(pos<1 || pos>(size))
            {
                return;
            }
            if(pos==1)
            {
                DeleteFirst();
            }
            else if(pos==size)
            {
                DeleteLast();
            }
            else
            {
                struct Node <T> *temp=Head; //temp =100
                        //pos=4
                //100 200 300 
                 for(i=1;i<pos-1;i++)   //1   2     
                {
                    temp=temp->next;    //200  300
                }
                
              temp->next=temp->next->next;
              free(temp->next->prev);
              temp->next->prev=temp;
            }
            
    }

};


int main()
{
 DoublyLinked <int> iobj ;
 DoublyLinked <float> fobj;
 float no1=0.0;
int choice1=1;
int ch=1;
int ch1=1;
int pos1=0;
 int no=0;
cout<<"doubly linked list using template\n";
while (choice1!=0)
{
 cout<<"enter your choice\n";
cout<<"1.inetger doubly linked\n";
cout<<"2.float doubly linked\n";
cout<<"0.exit:\n";
cin>>choice1;
    switch (choice1)
    {
    case 1:
        cout<<"1.inetger doubly linked\n";
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
        cout<<"thank you for using doubly integer linked list\n";
     break;

    case 2:
        cout<<"2.float doubly linked list:\n";
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
        cout<<"thank you for using doubly float linked list\n";
        break;
    default:
        break;
    }    //end of  outer switch choice 1
}   //end of while(choice1)
cout<<"thank your using doubly liniear linked list application using template\n";


    return 0;
}