#include<iostream>
using namespace std;
int a[6],t=0;
void push(int n)
{
	if(t==6)
	{
		cout<<"overflow";
		
	}
	else
	{ 
	a[t]=n;
	t++;
	}
}

void pop()
{
	if(t==0)
	{
		cout<<"underflow";
	}
	else
	{
	t--;
	}
}

int top()
{
if(t==0)
{

return -1;
}

else
{
return a[t-1];
}

}

int main()
{
	for(int i=0;i<6;i++)
	push(i);
	cout<<top();
	
    pop();
	cout<<top();
	pop();
	cout<<top();
	pop();
	cout<<top();
	
	
}
