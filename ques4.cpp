#include<iostream>
using namespace std;
class MusicPlayer{
    public:
    virtual void playmusic(){
        cout<<"music is going to play"<<endl;
    }
};
class HindiSong:public MusicPlayer{
    public:
    void playmusic(){
    cout<<"hindi song is playing"<<endl;
    }
};
class EnglishSong:public MusicPlayer{
    public:
    void playmusic(){
        cout<<"English songs are playing"<<endl;
    }
};
class PunjabiSong:public MusicPlayer{
    public:
    void playmusic(){
        cout<<"punjabi songs are playing."<<endl;
    }
};
int main()
{
    MusicPlayer *ptr;
    MusicPlayer obj;
    HindiSong obj2;
    EnglishSong obj3;
    PunjabiSong obj4;
    ptr=&obj;
    ptr->playmusic();
    ptr=&obj2;
    ptr->playmusic();
    ptr=&obj3;
    ptr->playmusic();
    ptr=&obj4;
    ptr->playmusic();

return 0;
}