#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>=1 && a<=5)
    {
    if(a==1)
    {
        cout<<"Total: R$ "<< setprecision (2) << fixed <<b*4.00<<endl;
    }else  if(a==2)
    {
        cout<<"Total: R$ "<< setprecision (2) << fixed <<b*4.50<<endl;
    }else  if(a==3)
    {
        cout<<"Total: R$ "<< setprecision (2) << fixed<<b*5.00<<endl;
    }else  if(a==4)
    {
        cout<<"Total: R$ "<< setprecision (2) << fixed<<b*2.00<<endl;
    }else  if(a==5)
    {
        cout<<"Total: R$ "<< setprecision (2) << fixed <<b*1.50<<endl;
    }
    }
}
