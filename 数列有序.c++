//数列有序
#include<iostream>
using namespace std;
int main()
{
	int n;  
	int m;
	int a[100];
	while(cin>>n)
	{
		cin>>m;
		
		if(n==0&&m==0)
		break;
		
		else
			{
				for(int i=0;i<n;i++)
		  		{
					cin>>a[i];
				}
				int t;
				for(int i=0;i<n;i++)
				{
					if(m<a[i])
					{
						t=a[i];
						a[i]=m;
						m=t;
					}
				}
				for(int i=0;i<n;i++)
				{
					cout<<a[i]<<" ";
					
				}
				cout<<m;
				cout<<endl;
	
			}
	
	}
	
	return 0;
 } 
