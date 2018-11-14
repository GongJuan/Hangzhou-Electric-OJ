#include<iostream>
using namespace std;
int main()
{
    int n, a[100], number;
    int b[6] = { 100,50,10,5,2,1 };
    while (cin>>n)
    {
         if(n==0)
		 break;
        number = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (int j = 0; j < 6; j++)
            {
                number += a[i] / b[j];
                a[i] = a[i] % b[j];
            }
        }
        cout << number << endl;
    }
    return 0;
}