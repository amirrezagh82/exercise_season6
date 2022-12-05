#include <iostream>

using namespace std;
int PillTime(int);
int main(){
    int clock;
    cout<<"What time is it?(between 0 to 24) ";
    cin>>clock;
    cout<<PillTime(clock);
    return 0;
}
int PillTime(int clock)
{
    if(clock==4)
    {
        cout<<"\nAntibiotic";
    }
    else if(clock==8)
    {
        cout<<"\nAntibiotic & Iron pill & Aspirin";
    }
    else if(clock==11)
    {
        cout<<"\nDecongestant";
    }
    else if(clock==12)
    {
        cout<<"\nAntibiotic & Iron pill";
    }
    else if(clock==16)
    {
        cout<<"\nAntibiotic";
    }
    else if(clock==18)
    {
        cout<<"\nIron pill";
    }
    else if(clock==20)
    {
        cout<<"\nAntibiotic & Decongestant";
    }
    else if(clock==21)
    {
        cout<<"\nAspirin";
    }
    else if(clock==0)
    {
        cout<<"\nAntibiotic";
    }
    else
    {
        cout<<"\nNothing to eat!";
    }
    return 0;
}
