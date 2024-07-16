#include<iostream>
using namespace std;
int main()
{   
    // int n=5;
    int a[5]={12,10,13,9,11};
    for(int i=0;i<4;i++){
        for(int j=0;j<=3-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<=4;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}