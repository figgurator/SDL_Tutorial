#ifndef CPLAYER_H_INCLUDED
#define CPLAYER_H_INCLUDED

#include <iostream>

class CPlayer {

    private:

        //stats
        int health;
        int armor;

        //dimensions
        int position_x;
        int position_y;


    public:

        void set_pos_x( int pos_x);
        void set_pos_y( int pos_y);

        int  get_pos_x();
        int  get_pos_y();


        CPlayer(int pos_x,int pos_y);
        //~CPlayer();
};

CPlayer::CPlayer(int pos_x, int pos_y)
{
    printf("Object Player created with position X:%i and Y:%i\n", pos_x, pos_y);
    position_x = pos_x;
    position_y = pos_y;
    armor = 0;
    health = 100;
}

void CPlayer::set_pos_x( int pos_x)
{
    this->position_x = pos_x;
}

void CPlayer::set_pos_y(int pos_y)
{
    this->position_y = pos_y;
}

int CPlayer::get_pos_x()
{
    return this->position_x;
}

int CPlayer::get_pos_y()
{
    return this->position_y;
}
#endif // CPLAYER_H_INCLUDED
