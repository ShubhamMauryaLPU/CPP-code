#include<iostream>
using namespace std;
class Ground{
    int Rooms =15;
    protected:
    void put(){
        cout<<"Ground protected   "<<Rooms<<endl;
    }
    public:
    void get(){
        cout<<"Ground public   "<<Rooms<<endl;
    }
};
class middle:protected Ground{
    int Labs=10;
    public:
    void Take(){
        cout<<"middle take public   "<<Labs<<endl;
        get();
        put();
    }
    void Give(){
        cout<<"middle give public "<<Labs<<endl;
    }
};
class Top:public middle{
    int Roof=12;
    public:
    void In(){
        cout<<"Top In public  "<<Roof<<endl;
    }
    void Out(){
        cout<<"Top Out public  "<<Roof<<endl;
    }
};
int main()
{   
    Top obj;
    // obj.put();
    // obj.get();
    obj.Take();
    obj.Give();
    obj.In();
    obj.Out();


    return 0;
}