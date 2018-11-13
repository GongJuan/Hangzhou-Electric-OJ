#include<iostream>
 #include<stdlib.h>  
 using namespace std;
 int main()
 {
 	int n;
 	int a[100];
 	int t;
 	while(cin>>n)
 	{
 		if(n==0)
 		break;
 		
 		for(int i=0;i<n;i++)
 		{
 			cin>>a[i];
 			
 			
		 }
		 
		 for(int i=0;i<n-1;i++)
		 {
		 	for(int j=0;j<n-1;j++)
		 	{
		 		if(abs(a[j])<abs(a[j+1]))
		 		{
		 			t=a[j];
		 	  a[j]=a[j+1];
		 	  a[j+1]=t;
				 }
		 	  
			 }
		   	
		 
		 	 
		 }
		 for(int i=0; i<n;i++)
		 {
		 	cout<<a[i];
			 if(i!=n-1)
			 cout<<" ";
		 }
		 
		 
		 cout<<endl;
		
	 }
	 

	 return 0;
 }