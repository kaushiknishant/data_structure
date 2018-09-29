

#include<iostream>
#define S 5

using namespace std;

int a[S],r=-1,f=-1;

void push(int n)
{
	if(r==S-1)
	{
	    cout<<"overflow"; 
	
	}
	else if (f==-1 && r==-1)
	{
		f=0;
		r=0;
		a[r]=n;
	}
	else
	{
		a[++r]=n;
	}   
}
void pop()
{
	if((r==-1 && f==-1) && f>r)
	{
		cout<<"queue is underflow ";
	}
	else
	{
		f++;
	}
}
int front()
{
	if((r==-1 && f==-1) && f>r)
	{
		cout<<"queue is underflow";
			
	}
	else
	{
		return a[f];
	}
}
int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
//	push(6);
	pop();
	pop();
	pop();
	pop();
	pop();
	push(6);
	cout<<front()<<endl;
	return 0 ;
}
