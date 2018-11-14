 #include<iostream>
 #include<cmath>
 using namespace std;
 int main()
 {
 	int n,m;
 	int a[100][100];
 
 	int b=0,c=0,max;
 	while(cin>>n>>m)
 	{
 		for(int i=1;i<=n;i++)
 		
 			for(int j=1;j<=m;j++)
 			{
 				cin>>a[i][j];
			 }
		
			  max=a[1][1];
			  for(int i=1;i<=n;i++)
			  for(int j=1;j<=m;j++)
			  	if(abs(a[i][j])>abs(max))
			 {
			 
			 	max=a[i][j];
			 	b=i;
			 	c=j;
			 }
			 	
			 
		 cout<<b<<" "<<c<<" "<<max<<endl;
	  
	
	 }
	 
	 return 0;
 	
  } 

  