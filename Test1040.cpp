#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
 float N1,N2,N3,N4,avgr,scr,rcal;
 cin>>N1>>N2>>N3>>N4;
avgr=(N1*2+N2*3+N3*4+N4)/10.0;
cout<<fixed;
cout<<"Media: "<< setprecision(1)<<avgr<<endl;
if(avgr>=7.0)
{   
    cout<<"Aluno aprovado."<<endl;
}else if(avgr<5.0)
{  
    cout<<"Aluno reprovado."<<endl;
}else if(avgr>=5.0 && avgr<=6.9)
{
    cout<<"Aluno em exame."<<endl;
    cin>>scr;
    cout<<"Nota do exame: "<< setprecision(1)<<scr<<endl;
    rcal=(avgr+scr)/2.0;
   if(rcal>=5.0)
   {
     cout<<"Aluno aprovado."<<endl;
   }else if(rcal<=4.9)
   {
    cout<<"Aluno reprovado."<<endl;
   }
   cout<<"Media final: "<< setprecision(1)<<rcal<<endl; 
}
}