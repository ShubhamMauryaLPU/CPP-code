#include<iostream>
using namespace std;
 
class MultiPlayer
{
    public:
    virtual void playMusic()
    {
        cout<<"Any music"<<endl;
    }
};

class HindiSong : public MultiPlayer
{
    public:
    void playMusic()
    {
        cout<<"Hindi Songs"<<endl;
    }
};

class EnglishSong : public MultiPlayer
{
    public:
    void playMusic()
    {
        cout<<"English Songs"<<endl;
    }
};

class Ragni : public MultiPlayer
{
    public:
    void playMusic()
    {
        cout<<"Desi Ragni"<<endl;
    }
};

int main()
{
    HindiSong h1;
    EnglishSong e1;
    Ragni r1;
    MultiPlayer* m1 = &h1;
    m1->playMusic();
    MultiPlayer* m2 = &e1;
    m2->playMusic();
    MultiPlayer* m3 = &r1;
    m3->playMusic();
    
    return 0;
}