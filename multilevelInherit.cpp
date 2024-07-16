#include<iostream>
using namespace std;
class A{
    public:
    void Afunc(){
        cout<<"Afunction"<<endl;
    }
};
class B:public A{
    public:
    void Bfunc(){
    cout<<"Bfunction"<<endl;
    }
};
class C:public B{
    public:
};
int main()
{
    C obj;
    obj.Afunc();
    obj.Bfunc();
    return 0;
}
