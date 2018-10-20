 //平方和 与立方和
 #include<iostream>
  using namespace std;
  int main()
  {
  	int x,y;
  	int o=0,j=0;
  	while(cin>>x>>y)
  	{
  		if(x>y)
  		{
  			int t;
  			t=x;
  			x=y;
  			y=t;
		  }
  		for(int i=x;i<=y;i++)
  		{
  			if(i%2==0)
  			{
  				o+=i*i;
  			
  				
			  }
  			else
  			{
  				j+=(i*i)*i;
  				
			  }
			 
		  }
		  cout<<o<<" "<<j<<endl;
		  o=0,j=0;
	  }
	  return 0;
  	
  }