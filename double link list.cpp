// c++ program to implement doubly likedlist 

#include<iostream>
using namespace std;

// structure which is node structure
struct list
{
	int data;  
	list *next;
	list *prev;
}*head=NULL,*last,*temp,*temp1;

//Return number of node present in list

int length()
{
	int count=0;
	if(head!=NULL)
	{
		temp=head;
		while(temp->next!=NULL)
		{
			count++;
			temp=temp->next;
		}
		
	}
}

// to insert element in list

void push(int k)
{
	list *newnode=new list;
	newnode->data=k;
	newnode->next=NULL;
	newnode->prev=NULL;
	if(head==NULL)
	{
		head=newnode;
		last=newnode;
	}
	else
	{
		last->next=newnode;
		newnode->prev=last;
		last=newnode;
	}
}

//insert element at first position in list

void pushf(int k)
{
   list *newnode=new list;
   newnode->data=k;
   newnode->next=NULL;
   newnode->prev=NULL;
   if(head==NULL)
   {
   	head=newnode;
   	last=newnode;
   }
   else
   {
   	newnode->next=head;
   	newnode->prev=NULL;
   	head=newnode;
   	
   }
}

//delete first node in list
 
void dele()
{
	if(head!=NULL && head->next==NULL){
		temp=head;
		head=NULL;
		delete(temp);
	}
	else{
		temp=head;
		head=head->next;
		head->prev=NULL;
		delete(temp);
	}
}
// delete last node 
void delelast()
{
	if(head==NULL)
	{
		return;
	}
	if(head->next==NULL)
	{
		dele();
		return ;
	}
	temp1=head->next;
	temp=head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
		temp=temp->next;
	
	}
		temp1->prev==NULL;
		temp->next=NULL;
		last=temp;
		delete(temp1);
		
	
}


// display node data 
int dis()
{
	if(head)
		temp=head;
	while(head && temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;	
	}
}

//main function
int main()
{
	int k;
	int t;
	while(1)
	{
		cout<<"\nEnter your choice";
		cout<<"\n1.insert";
		cout<<"\n2.display";
		cout<<"\n3.insert from front";
		cout<<"\n4.delete";
	    cout<<"\n5.delete from last";
		cout<<"\n6.Exit";
		
		cin>>k;
		switch(k)
		{
			case 1:cin>>t;
			       push(t);
			       break;
			case 2:dis();
			       break;
			case 3:cin>>t;
			      pushf(t);
			      break;       
			case 4:dele();
			     break;
		    case 5:delelast();
			     break;					        
			case 6:return 0;
			       break;
		    default:cout<<"\nwrong choice";
			       break;       
				          
		}
	}
	return 0;
}
