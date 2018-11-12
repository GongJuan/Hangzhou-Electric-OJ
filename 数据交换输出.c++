#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		break;
		else
		{
		
		int a[100];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		int min=a[0];
		int t;
		for(int i=0;i<n;i++)
		{
			if(min>a[i])
			min=a[i];
			
		}
		for(int i=0;i<n;i++)
		{
		  if(min==a[i])	
		  t=i;
		}
		int temp;
		temp=a[0];
		a[0]=a[t];
		a[t]=temp;
		 for (int i = 0; i < n; i++)
        {
            cout << a[i];
            if (i != n - 1)
                cout << " ";
            else
                cout << endl;
        }
    

		
	}
	}
	return 0;
 }