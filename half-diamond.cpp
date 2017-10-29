#include<iostream>
#include<stdio.h>

using namespace std;
main()
{
	int a,b;
	char d[50];
	cout<<"masukkan jumlah baris : ";
	cin>>a;
	cout<<"masukkan unsur penyusun : ";
	cin>>d;
	b=a/2+1;
	int c=1;
	for(int i=0; i<b; i++)
	{
		for (int j=b; j>i; j--)
		{cout<<" ";}
		for (int f=1; f>0; f--)
		{cout<<d;}
		if (i!=b)
		{for (int h=1; h<c; h++ )
		{cout<<" ";}
		c++;
		}
		for (int j=0; j<i; j++)
		{cout<<d;
		}
		
		cout<<endl;
		
	}
	c=b-1;
	for (int k=0; k<b-1; k++)
	{
		for (int l=0; l<=k+1; l++)
		{cout<<" ";}
		for(int g=0; g<1; g++)
		{cout<<d;}
		if (k!=b)
		{for (int h=c; h>1; h--)
		{cout<<" ";}
		c--;
		}
		for (int l=b-1; l>k+1; l--)
		{cout<<d;
		}
		cout<<endl;
	}
	
}
