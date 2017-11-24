#include<bits/stdc++.h>
using namespace std;
main()
{
	int a,b;
	cin>>a;
	for( int i=2; i<=a; i++)
	{
		if (a%i==0)
		{
			 b++;
		}
	}
	
	if(  b==1)
	{cout<<"bilangan prima";
	} else { cout<<"bukan bilangan prima";
	}
}
