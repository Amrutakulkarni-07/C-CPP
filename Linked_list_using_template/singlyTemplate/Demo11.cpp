
//demonstration of singly liniear linked list using template
//class for array

using namespace std;
#include<iostream>

template <class T>
 struct node
{
	T data;
	struct node *next;
};

template <class T>
class SinglyLinkedList
{
	public:
	struct node <T> *Head;
	
	SinglyLinkedList()
	{
		Head=NULL;
	}
	void InsertFirst(T no)
	{
		struct node <T> *newn=new node <T>;
		newn->data=no;
		newn->next=NULL;
		if(Head==NULL)
		{
			Head=newn;
		}
		else
		{
			newn->next=Head;
			Head=newn;
		}
	}
	
	void InsertLast(T no)
	{
		struct node <T> *newn=new node<T>;
		newn->data=no;
		newn->next=NULL;
		if(Head==NULL)
		{
			Head=newn;
		}
		else
		{
			struct node <T> *temp=Head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
		}
	}
	void DeleteFirst()
	{
		if(Head==NULL)   //list is empty
		{
			return;
		}
		else if(Head->next==NULL)     //list contain one onde 
		{
			delete Head;
			Head=NULL;
		}
		else                                //list contain more than one node 
		{
			struct node<T> *temp=Head;
			Head=Head->next;
			delete temp;
		}
	}
	
	void DeleteLast()
	{
		
		if(Head==NULL)                    //list contain no node 
		{
			return;
		}
		else if(Head->next==NULL)               //list contain one node  first node is last node 
		{
			delete Head;
			Head=NULL;
		}
		else                       
		{
			struct node<T> *temp=Head;
			// 100 200 
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			delete(temp->next);       //200->next   //we need to delte node at 300 
			temp->next=NULL;
		}
	}
	int  count()
	{
		int icnt=0;
		struct node <T> *temp=Head;
		
		while(temp!=NULL)
		{
			
			temp=temp->next;
			icnt++;
		}
		return icnt;
	}
	void InsertAtPos(int pos,T no)
	{
		int size=0;
        int i=0;
        struct node<T> *temp=Head;  //to travel upto position
        struct node<T> *newn=NULL;   //newn node which has to be inserted 

       size=count();           //(100)  

       if((pos<1)|| (pos>(size+1)))
       {
           return;
       }
       else if(pos==1)
       {
           /* code */
           InsertFirst(no);        //(60,no)
       }
	   else if(pos==size+1)
	   {
		   InsertLast(no);
	   }
       else
       {
           newn=new node<T>;
           newn->data=no;
           newn->next=NULL;
           for(i=1;i<pos-1;i++)
           {
               temp=temp->next;
           }
           newn->next=temp->next;
           temp->next=newn;
       }
	}
	
	
	void DeleteAtPos(int pos)
	{
		int size=0;
        int i=0;
        struct node<T> *temp=Head;  //to travel upto position

		 struct node <T> *temp2=NULL;
       size=count();           //(100)  

       if((pos<1)|| (pos>(size)))
       {
           return;
       }
       else if(pos==1)
       {
           /* code */
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
           temp2=temp->next;            //temp2=400
            temp->next=temp2->next;       //300->next=500
            free(temp2);                //temp2 delete 400 delete
       }
	}
	void Display()
	{
		struct node <T> *temp=Head;
		cout<<"elements of linked list are:\n";
		while(temp!=NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
		cout<<"\n";
	}
	
};

int main()
{
	SinglyLinkedList <float>obj1;
    int pos=0;
    obj1.InsertFirst(51.23);
    obj1.InsertFirst(21.45);
    obj1.InsertFirst(11.78);
    
    obj1.Display();
	
    cout<<"insert at pos:\n";
	cout<<"enter pos\n";
	cin>>pos;
	obj1.InsertAtPos(pos,111.12);
	cout<<"after insert at pos\n";
	obj1.Display();
	
	
	cout<<"delete at pos:\n";
	cout<<"enter pos\n";
	cin>>pos;
	obj1.DeleteAtPos(pos);
	cout<<"after delete at pos\n";
	obj1.Display();
    SinglyLinkedList <char>obj2;
    
    obj2.InsertFirst('C');
    obj2.InsertFirst('B');
    obj2.InsertFirst('A');
	obj2.Display();
    obj2.InsertLast('D');
    obj2.InsertLast('E');
	obj2.InsertLast('F');
	
	obj2.Display();
	
	obj2.DeleteFirst();
	cout<<"after delete first\n";
	obj2.Display();
	
	obj2.DeleteLast();
	cout<<"after delete last\n";
	obj2.Display();
	
	
		return 0;
}