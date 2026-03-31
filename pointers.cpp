#include<iostream>
using namespace std;

int main(){
    // pointers/address of operators

int a = 3;
int* b = &a;
    cout<<"The address of a is "<<b<<"\n";
    cout<<"The address of a is "<<&a<<"\n";

    // (value at)dereferencing of operators 
    cout<<"The value at address b is "<<*b<<"\n";





    // pointer to pointer
int** c =&b;
    cout<<"The address of c is "<<&b<<"\n";
    cout<<"The address of c is "<<c<<"\n";
    cout<<"The value of c is "<<*c<<"\n";
    cout<<"The value of c at c is "<<**c<<"\n";
    return 0;
}