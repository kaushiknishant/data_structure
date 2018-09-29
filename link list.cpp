/*c++ program implement linklist*/

#include<iostream>
using namespace std;

struct link
{
	int data;
	link *next;
}*head=NULL,*temp,*last,*temp1;

//return no. of nodes in linkedlist

int length(){
	int count=0;
	if(head!=NULL){
		temp=head;
		while(temp!=NULL){
			count++;
			temp=temp->next;
		}
	}
	return count;
}

//push nodes at last position
void push(int k){
	link *node=new link;
	node->data=k;
	node->next=NULL;
	if(head==NULL){
		head=node;
		last=node;
	}
	
	else
	{
		last->next=node;
		last=node;
	}
}	

//insert node at first position

void pushf(int k){
	link *node=new link;
	node->data=k;
	node->next=NULL;
	if(head==NULL){
		head=node;
		last=node;
	}
	else
	{
		node->next=head;
		head=node;
	}
	
}
//delete nodes from start

void dele(){
	if(head!=NULL){
		temp=head;
		head=head->next;
		delete(temp);
	}
}

//delete last node

void delelast()
{
	if(head==NULL)
	{
		//cout<<"empty";
	   return;
	}
	if(head->next==NULL){
		dele();
		return;
	}
	temp1=head->next;
	temp=head; 
	while(temp1->next!=NULL)
	
	{
		temp1=temp1->next; //giving increment by putting the address of temp1 in temp 1 make next one temp1;
		temp=temp->next;  //same here;
    }
		temp->next=NULL;
		last=temp;
		delete(temp1);
    
}

// insert node at desired position

void renty(int pos,int k){
	int l=length();
	if(pos<=0 && head==NULL){
		cout<<"invalid position or linklist not present\n";
		return;
	}
	else if(pos==1){
		pushf(k);
	}
	else if(l+1==pos){
		push(k);
	}
	else{
		int i=1;
		temp=head;
		temp1=head->next;
		while(i<pos-1){	
			temp=temp1;
			temp1=temp1->next;
			i++;
		}
		link *node=new link;
		node->data=k;
		node->next=NULL;
		temp->next=node;
		node->next=temp1;
	}
}

//delete nodes from desired postion

void rdele(int pos)
{
	int l=length();
	if(pos<0 && head==NULL){
		cout<<"link list not present\n";
		return;
	}
	else if( pos==1){
		dele();
	}
	else if(l==pos){
		delelast();
	}
	else{
		int i=1;
		temp=head;
		temp1=head->next;
		while(i<pos-1){
		temp=temp1;
		temp1=temp1->next;
		i++;	
		}
		temp->next=temp1->next;
		delete(temp1);
	}
}

//list traversing
void dis(){
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" \t";
		temp=temp->next;
	}
}

int main()
{
	int k;
	int t;
	while(1)
	{
		cout<<"\n Enter your choice\n";
		cout<<"1. insert\n";
		cout<<"2. insert in front\n";
		cout<<"3. dis\n";
		cout<<"4. exit\n";
		cout<<"5.delete\n";
		cout<<"6.delete_last\n";
		cout<<"7.count_node\n";
		cout<<"8.random entry\n";
		cout<<"9.random delete\n";
		cin>>k;
		switch(k){
			case 1:cin>>t;
				push(t);
				break;
			case 2: cin>>t;
				pushf(t);
				break;
			case 3: dis();
				break;
			case 4: return 0;
				break;
			case 5: dele();
				break;
			case 6: 
				delelast();
				break;
			case 7:
					cout<<length()<<endl;
					break;
			case 8:
				int pos;
				cout<<"enter position\n";
				cin>>pos;
				cout<<"enter data\n";
				cin>>t;
					renty(pos,t);
					break;
			case 9:
			
				cout<<"enter position\n";
				cin>>pos;
					rdele(pos);	
			default: cout<<"wrong choice"<<endl;
			break;
		}
	}
	return 0;
}
