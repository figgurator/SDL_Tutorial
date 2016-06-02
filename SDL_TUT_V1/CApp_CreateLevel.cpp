#include "CApp.h"
#include "CPlayer.h"
#include "cstdlib"


bool CApp::CreateLevel(int height, int width){

        MainWindow = SDL_CreateWindow("My Game Window",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              height,
                              width,
                              SDL_WINDOW_SHOWN);

         //Start-Position für Player
        CPlayer Phillip((rand() % 201),(rand() % 201));
        fitted_Rect.x = Phillip.get_pos_x();
        fitted_Rect.y = Phillip.get_pos_y();


        Level_Player_Pic = CApp::loadSurface("img/smile.bmp");

        if( MainWindow == NULL)
        {
            printf("OnInit.cpp - SDL_SetVideoMode() = NULL - line 9 went wrong\n");
            return false;
        }
        else
        {
            printf("OnInit.cpp - Created Surface_Display\n");
            printf("%i\n", Level_Player_Pic->locked);

            if ( SDL_BlitSurface(Level_Player_Pic, NULL, SDL_GetWindowSurface(MainWindow),&fitted_Rect) < 0 )
            {
                printf("SDL_Blit failed in Creating Level - Error-Code: %s\n",SDL_GetError());
                return false;
            }
            else
            {
                printf("OnInit.cpp - SDL_BlitSurface and then updating the SurfaceWindow\n");
                SDL_UpdateWindowSurface(MainWindow);
                return true;
            }
        }
}
