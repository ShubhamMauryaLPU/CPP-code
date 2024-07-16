#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<*aptr<<endl;
    cout<<&a<<endl;
    return 0;

    int a=10;
    int *aptr;
    aptr=&a;
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;

    int arr[]={10,20,30};
    for(int i=0;i<3;i++)
    cout<<*(arr+i)<<endl;
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
}