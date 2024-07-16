#include<iostream>
using namespace std;
class SCA{
    public:
    virtual void show()=0;
    SCA(){
        cout<<"SCA"<<endl;
    }
};
class MCA:public SCA{
    public:
    void show(){
        cout<<"virtual SCA"<<endl;
    }
    MCA(){
        cout<<"MCA"<<endl;
    }
};
class BCA:public MCA{
    public:
    void display(){
        cout<<"BCA"<<endl;
    }
};
int main()
{
    BCA obj;
    obj.display();
    obj.show();
    return 0;
}