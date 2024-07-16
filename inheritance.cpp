#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    void Afunc(){
        cout<<"inherited A "<<endl;
    }
};
class B{
    public:
    void Bfunc(){
        cout<<"inherited B"<<endl;
    }
};
class C:public A,public B{

};
int main()
{
    C obj;
    obj.Afunc();
    obj.Bfunc();
    return 0;
}