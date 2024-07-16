#include <iostream>
using namespace std;

class PrintNumaber
{
    int a;
    char b;
    public:
        void PrintNumber(int n,char d){
            a = n;
            b=d;

            cout<<a<<" "<<b<<endl;
        }
        void PrintNumber(char d,int n){
            char b=d;
            int a=n;

            cout<<b<<a<<endl;
        }
};
int main()
{   int q;
    char c;
    cin>>q;
    cin>>c;
    PrintNumaber p1, p2, p3;
    p1.PrintNumber(q,c);
    p2.PrintNumber(c,q);
    return 0;


}