/*You must make a program that read a float-point number and
print a message saying in which of following intervals the number
belongs: [0,25] (25,50], (50,75], (75,100].
If the read number is less than zero or greather than 100,
the program must print the message “Fora de intervalo” that means "Out of Interval".

The symbol '(' represents greather than. For example:
[0,25] indicates numbers between 0 and 25.0000, including both.
(25,50] indicates numbers greather than 25 (25.00001) up to 50.0000000.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    float  n;
    cin>>n;
    if(n<0 || n>100)
    {
        cout<<"Fora de intervalo"<<endl;
    }
    else
    {
        if(n>=0 && n<=25)
        {
            cout<<"Intervalo [0,25]"<<endl;
        }else if(n>25 && n<=50)
        {
            cout<<"Intervalo (25,50]"<<endl;
        }else if(n>50 && n<=75)
        {
            cout<<"Intervalo (50,75]"<<endl;
        }else if(n>75 && n<=100)
        {
            cout<<"Intervalo (75,100]"<<endl;
        }
    }
    return 0;
}
