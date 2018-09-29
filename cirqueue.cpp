#include<iostream>
#define s 5
using namespace std;
int a[s],r=-1,f=-1;
void push(int n)
{
	if((r==s-1 && f==0) || (f==r+1))
	{
	//	cout<<f;
	//	cout<<endl<<r;
	    cout<<"overflow";
	    
	}
	else if(f==-1 && r==-1)
	{
		f=0;
		r=0;
		a[r]=n;
	}
	else if(f!=0 && r==s-1)
	{
	//	cout<<"hello";
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
	if(f==-1 && r==-1)
	{
		cout<<"underflow";
		
	}
	else if (r==f) 
	{
	
		r=0;
		f=0;
	}
	else
	{
		f++;
	}
}
int display()
{
	if(f==-1 && r==-1)
	{
		cout<<"underflow";
	}
	else if(f>r)
	{
		for(int i=f; i<s; i++)
			cout<<a[i]<<" ";
		for(int i=0; i<=r; i++)
			cout<<a[i]<<" ";
	}
	else
	{
	//	cout<<"hello";
		for(int i=f;i<=r;i++)
			cout<<a[i]<<" ";
	}
}
int main()
{
	int n,k;
	while(1){
		cout<<endl<<"Enter Your Choice"<<endl;
		cout<<"1 for push"<<endl;
		cout<<"2 for pop"<<endl;
		cout<<"3 for dis"<<endl;
		cout<<"4 exit"<<endl;
		cin>>n;
		switch(n){
			case 1:
					cin>>k;
					 push(k);
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: return 0;
					break;
			default : cout<<"wrong choice";
					break;
		}
	}
	return 0;}
