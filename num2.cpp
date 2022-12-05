#include <iostream>

using namespace std;
float IncreaseSalary(float);
int main()
{
   float i1=(IncreaseSalary(52500)-52500),i2=(IncreaseSalary(65500)-65500),i3=(IncreaseSalary(53780)-53780),
         i4=(IncreaseSalary(64029.50)-64029.50),i5=(IncreaseSalary(42800)-42800),
         i6=(IncreaseSalary(77300)-77300),i7=(IncreaseSalary(56000)-56000),i8=(IncreaseSalary(45000.50)-45000.50),
         i9=(IncreaseSalary(84120.25)-84120.25),i10=(IncreaseSalary(53250)-53250),i11=(IncreaseSalary(68900)-68900),
         i12=(IncreaseSalary(64100)-64100),sum=(i1+i2+i3+i4+i5+i6+i7+i8+i9+i10+i11+i12);
    cout<<"Person 1 increasing salary value: $"<<i1;
    cout<<"\nPerson 2 increasing salary value: $"<<i2;
    cout<<"\nPerson 3 increasing salary value: $"<<i3;
    cout<<"\nPerson 4 increasing salary value: $"<<i4;
    cout<<"\nPerson 5 increasing salary value: $"<<i5;
    cout<<"\nPerson 6 increasing salary value: $"<<i6;
    cout<<"\nPerson 7 increasing salary value: $"<<i7;
    cout<<"\nPerson 8 increasing salary value: $"<<i8;
    cout<<"\nPerson 9 increasing salary value: $"<<i9;
    cout<<"\nPerson 10 increasing salary value: $"<<i10;
    cout<<"\nPerson 11 increasing salary value: $"<<i11;
    cout<<"\nPerson 12 increasing salary value: $"<<i12;
    cout<<"\n\nTotal increasing: $"<<sum;
    cout<<"\n\nPerson 1 salary before increasing: $52500\tAfter increasing: $"<<IncreaseSalary(52500);
    cout<<"\nPerson 2 salary before increasing: $65500\tAfter increasing: $"<<IncreaseSalary(65500);
    cout<<"\nPerson 3 salary before increasing: $53780\tAfter increasing: $"<<IncreaseSalary(53780);
    cout<<"\nPerson 4 salary before increasing: $64029.50\tAfter increasing: $"<<IncreaseSalary(64029.50);
    cout<<"\nPerson 5 salary before increasing: $42800\tAfter increasing: $"<<IncreaseSalary(42800);
    cout<<"\nPerson 6 salary before increasing: $77300\tAfter increasing: $"<<IncreaseSalary(77300);
    cout<<"\nPerson 7 salary before increasing: $56000\tAfter increasing: $"<<IncreaseSalary(56000);
    cout<<"\nPerson 8 salary before increasing: $45000.50\tAfter increasing: $"<<IncreaseSalary(45000.50);
    cout<<"\nPerson 9 salary before increasing: $84120.25\tAfter increasing: $"<<IncreaseSalary(84120.25);
    cout<<"\nPerson 10 salary before increasing: $53250\tAfter increasing: $"<<IncreaseSalary(53250);
    cout<<"\nPerson 11 salary before increasing: $68900\tAfter increasing: $"<<IncreaseSalary(68900);
    cout<<"\nPerson 12 salary before increasing: $64100\tAfter increasing: $"<<IncreaseSalary(64100);
    return 0;
}
float IncreaseSalary(float s)
{
   return s*1.025;
}