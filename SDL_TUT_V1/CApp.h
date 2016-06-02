#ifndef CAPP_H_INCLUDED
#define CAPP_H_INCLUDED

#include "SDL.h"
#include "stdio.h"
#include <iostream>


class CApp {

    private:

        bool Running;

        SDL_Window* MainWindow;

        SDL_Surface* Level_Player_Pic;

        SDL_Rect fitted_Rect,fitted_Rect_tmp;


        bool Level_Player_Animation;



    public:

        CApp();

        int OnExecute();


    public:

        bool OnInit();

        bool CreateLevel(int heigth, int width);

        void OnEvent(SDL_Event* Event);

        void OnLoop();

        void OnRender();

        void OnCleanup();

        SDL_Surface* loadSurface(std::string path);

};

#endif // CAPP_H_INCLUDED
