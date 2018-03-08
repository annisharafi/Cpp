#include <bits/stdc++.h>
#include <math.h>


using namespace std;
float a[]= {-5,3,0,1};
float fx(float x)
{
    float sum=0;
    for(int i=0; i<4; i++)
    {
        sum+=a[i]*pow(x,i);
    }
    return sum;
}

int main()
{

    float x1=1;
    float x2=2;
    float mid=(x1+x2)/2;
    while( fabs(fx(mid))>0.001)
    {
        if(fx(mid)>0)
        {
            x2=mid;
        }
        else if (fx(mid)<0)
        {
            x1=mid;
        }

        float y=fabs(fx(mid));
        cout<<"x1: "<<x1<<" x2: "<<x2<<"y: "<<y<<endl;
        mid=(x1+x2)/2;



    }
}
