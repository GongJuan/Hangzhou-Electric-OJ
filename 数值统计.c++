//数值统计
  #include<iostream>
  using namespace std;
  int main()
  {
  	int  n;
  	float m[100];
  	 int a=0,b=0,c=0; 
  	while(cin>>n)
  	{
  		if(n!=0)
  		{
  			for(int i=0;i<n;i++)
  			{
  				cin>>m[i];
  				if(m[i]<0)
  				a++;
  				else if(m[i]==0)
  				b++;
  				else
  				c++;
  				
  				
			  }
			  
  			cout<<a<<" "<<b<<" "<<c<<endl;
  			a=0,b=0,c=0;
		  }
	  }
	  return 0;
  }
 