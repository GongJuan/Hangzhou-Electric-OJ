/青年歌手大奖赛，评委会打分 
 #include<iostream>
 #include <cstdio>
 //#include <iomanip>
 using namespace std;
 int main()
 {
 	int n;
 	int a[100];
    while(cin>>n)
    {
    	if(n>2&&n<100)
    	{
    		
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
		}
		int max,min;
		max=a[0];
		min=a[0];
		for(int i=0;i<n;i++)
		{
			if(max<a[i])
			max=a[i];
			if(min>a[i])
			min=a[i];	
		}
		int sum=0;
		for(int i=0;i<n;i++)
		sum+=a[i];
		sum=sum-max-min;
		n-=2;
		double avg;
		avg=(1.0)*sum/n;
	 printf( "%.2f\n ",avg); 
	//cout<<setprecision(2)<<std::fixed<<avg<<endl;
		sum=0;
	}
}
	return 0;
 }
