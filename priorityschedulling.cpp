#include <bits/stdc++.h>
using namespace std;

struct proses{
	int nomorProses;
	int burst;
	int prioritas;
};

bool compare(proses a, proses b)
{
	return (a.prioritas > b.prioritas);     //fungsi untuk membandingkan dan memilih prioritas yang paling besar
}

void waitingTime(proses p[], int n) //untuk menghitung waiting time tiap proses dan juga average time keseluruhan
{
	int WT[n];
	WT[0]=0;
	double sum=0.0;
	double averageTime;
	for(int i =1; i< n; i++)
	{
		WT[i]=p[i-1].burst + WT[i-1];
	}
	cout<<endl;
	cout<<"waiting time : "<<endl;
	for (int i=0; i<n; i++)
	{
		sum+=WT[i];
		cout<<WT[i]<< " ";
	}
	cout<<endl;
	averageTime=double(sum/n);
	cout<<"average time : "<< averageTime<<endl;
}
void turnAroundTime(proses p[], int n)  //menghitung turn around time
{
	int AT[n];
	AT[0]=p[0].burst;

	for(int i=1; i<n; i++)
	{
		AT[i]=AT[i-1]+p[i].burst;
	}
	cout<<"turn around time : "<<endl;
	for(int i=0; i<n;i++)
	{
		cout<<AT[i]<<" ";
	}
}


void prioritas(proses p[], int n)       //menentukan urutan proses berdasarkan prioritas
{
    sort(p, p + n, compare);

    cout<< "urutan dikerjakan proses : "<<endl;
    for (int  i = 0 ; i <  n; i++)
        cout << p[i].nomorProses <<" " ;

    cout<<endl;
}

int main()
{
    proses p[] = {{1, 10, 2}, {2, 5, 0}, {3, 8, 1}};
    int n = sizeof p / sizeof p[0];
    prioritas(p, n);
    turnAroundTime(p,n);
    waitingTime(p, n);
    return 0;

}
