#include<iostream>
#include<iomanip>
using namespace std;
 main()
{
    int a, b;    
    cout<<"enter the value for a: \n";
    cin>>a;
    cout<<"\n";
    cout<<"enter the value for b: \n";
    cin>>b;
    cout<<"\n";
    cout<<"The sum is: "<<setw(10)<< a*5-10+b;
    return 0;
}
