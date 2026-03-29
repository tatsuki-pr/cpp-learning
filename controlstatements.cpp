#include<iostream>
using namespace std;
int main()
{
    int i,b;
//     cout<<"How Far should the count be: ";
//     cout<<"Shanu is gay>";
//     cin>>b;
//    for (i=0 ; i <=b ; i++)
//    {
//     cout<< i <<"\n";
//    }
cout<<"enter your age:";
cin>>i;
if (i<18 && i>0)
{
    cout<<"you cant come to my party\n";
}
else if (i==18)
{
    cout<<"you can come to my party but with a kids pass\n";
    
}
else if (i>18)
{
    cout<<"you can come to my party\n";
    
}
else 
{
    cout<<"invalid age! PLease TRY again\n";
    
}






    return 0;
}

