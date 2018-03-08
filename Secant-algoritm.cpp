#include <bits/stdc++.h>
#include <math.h>
using namespace std;

float a[]= {12,-7,1};
float fx(float x)
{
    float sum=0;
    for(int i=0; i<3; i++)
    {
        sum+=a[i]*pow(x,i);

    }
    return sum;
}

int main()
{
    float x1=3.5,x2=5;
    float xbaru;


    while(fabs(fx(xbaru))>0.00001)
    {
        float y1=fx(x1);
        float y2=fx(x2);
        xbaru= (((x1*y1)-(x2*y1))/(y2-y1))+x1;

        if(fx(xbaru)>0)
        {
            x2=xbaru;
        }
        else if(fx(xbaru)<0)
        {
            x1=xbaru;
        }
        cout<<fabs(fx(xbaru))<<endl;
        //cout<<"x1: "<<x1<<" x2: "<<x2<<endl;


    }

}
