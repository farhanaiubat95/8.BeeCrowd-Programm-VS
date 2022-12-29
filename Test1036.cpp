/*Read 3 floating-point numbers. After, print the roots of bhaskara’s formula.
If it's impossible to calculate the roots because a division by zero or
a square root of a negative number, presents the message “Impossivel calcular”.*/

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double  A,B,C,t,r1,r2;
    cin>>A>>B>>C;
    if(A==0 || (B*B-4*A*C)<0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        t=sqrt((B*B)-4*A*C);
        r1=(-B+t) / (2*A);
        r2=(-B-t) / (2*A);
        cout<<fixed; //must
    cout<<setprecision(5)<<"R1 = "<<r1<<endl;
    cout<<setprecision(5)<<"R2 = "<<r2<<endl;
    }
   return 0;
}
