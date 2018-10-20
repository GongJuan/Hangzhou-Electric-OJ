#include<iostream>
 using namespace std;
 int main()
 {
 	int n,m;
 	while(cin>>n>>m)
 	{
 		int a,b,c;
 		int sum=0;
 		int team=0;
 		int z[100];
 		for(int i=n,f=0;i<=m;i++)
 		{
 			a=i/100%10;
 			b=i/10%10;
 			c=i%10;
 			sum=a*a*a+b*b*b+c*c*c;
 			if(sum==i)
 			{
 					team++;
 					z[f++]=i;
			 }
			
 		
 			
 		
		 }
		 if(team!=0)
		 {
		 	for(int j=0;j<team;j++)
		 	{
		 		
		 		cout<<z[j]<<" ";
			 }
			 
		 }
		 else
		 cout<<"no"<<endl;
		 
	 }
	 return 0;
 }
 