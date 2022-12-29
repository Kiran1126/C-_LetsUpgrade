#include<iostream>
using namespace std;
int main()
{
	int i,n,flag=0;
	cout<<"\nEnter the number :";
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
	    if(n%i==0)
		{
		    flag=1;
			break;		
		}
		else 
		   flag=0;   
	}
	if(flag==0)
	    cout<<n<<" is Prime number";
	else
    	cout<<n<<" is Not Prime number";
	return 0;   
}
