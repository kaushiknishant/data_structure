#include<iostream>
using namespace std;
int main()
{
	int a[10],middle,search,first,last,n,i;
	cout<<"no. of elements:";
	cin>>n;
	cout<<"enter the elements in ascending order:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the value you want to search:";
	cin>>search;
	first=0;
	last=n-1;
//	middle=(first+last)/2;
	while(first<=last)
	{
		middle=(first+last)/2;
	if(a[middle]<search)
	        {
		        first=middle+1;
	        }
	else if(a[middle]==search)
	        {
		        cout<<"location of"<<search<<"is"<<middle+1;
	          	break;
	        }
	else
	        {
		        last=middle-1;
	  	
		    }
		   	
    }
    if(first>last)

	    cout<<"not found";
	
return 0; 	
}

