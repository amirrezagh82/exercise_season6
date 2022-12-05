#include <iostream>

using namespace std;
int choice1();
int choice2();
int choice3();
int choice4();
int choice5();
int main()
{
    char userchoice;
    cout<<"choose between these:\nA - B - C - D - E\n";
    cin>>userchoice;
    if(userchoice=='A')
        cout<<choice1();
    else if(userchoice=='B')
        cout<<choice2();
    else if(userchoice=='C')
        cout<<choice3();
    else if(userchoice=='D')
        cout<<choice4();
    else if(userchoice=='E')
        cout<<choice5();
    return 0;
}
int choice1()
{
    cout<<"\n1\t1\t1\t1\t1\n2\t2\t2\t2\n3\t3\t3\n4\t4\n5\n";
    return 0;
}
int choice2()
{
    cout<<"\n1\t2\t3\t4\t5\t6\n1\t2\t3\t4\t5\n1\t2\t3\t4\n1\t2\t3\n1\t2\n1\n";
    return 0;
}
int choice3()
{
    cout<<"\n0\n0 1\n0 2 4\n0 3 6 9\n0 4 8 12 16\n";
    return 0;
}
int choice4()
{
    cout<<"        1\n      2 1\n    3 2 1\n  4 3 2 1\n5 4 3 2 1\n";
    return 0;
}
int choice5()
{
    cout<<"        1      \n       121     \n      12421    \n     1248421   \n    1248168421  \n  12481632168421 \n124816326432168421\n";
    return 0;
}