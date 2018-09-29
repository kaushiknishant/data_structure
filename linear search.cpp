#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100],i,n,nishant=0;
    int x=50;
    cout<<"no.of elements in array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cout<<"enter the elments of array:";
    	cin>>ar[i];
	}
    for(i=0;i<n;i++)
	{
	//	cout<<ar[i]<<" ";
		if(ar[i]==x)
		{
		    cout<<i<<endl;
		    nishant=1;
		    break;
	    }
    
    }
	   if(!nishant)
	    {
			cout<<"not matched"<<endl;
			
     	} 
    return 0;
}
