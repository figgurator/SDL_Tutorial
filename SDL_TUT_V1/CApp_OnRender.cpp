#include "CApp.h"

void CApp::OnRender() {



if ((fitted_Rect_tmp.x != fitted_Rect.x)    ||  (fitted_Rect_tmp.y != fitted_Rect.y))
{
            //Charakterbild laden
        if(Level_Player_Animation == true){
            Level_Player_Pic = NULL;
            Level_Player_Pic = CApp::loadSurface("img/smile.bmp");
            Level_Player_Animation = false;
            printf("smile\n");
        }
        else {
            Level_Player_Pic = NULL;
            Level_Player_Pic = CApp::loadSurface("img/scream.bmp");
            Level_Player_Animation = true;
            printf("scream\n");


        }
    //printf("OnRender.cpp - Positioning changed updating Surface\n");
    if ( SDL_BlitSurface(Level_Player_Pic,
                        NULL,
                        SDL_GetWindowSurface(MainWindow),
                        &fitted_Rect)
                        < 0 )
    {
        printf("SDL_Blit failed %s\n",SDL_GetError());
    }
    else{
        //printf("OnRender.cpp SDL_BlitSurface and then updating the Surface\n");
        SDL_UpdateWindowSurface(MainWindow);
        //SDL_FreeSurface(Level_Player_Pic);
        fitted_Rect_tmp.h = fitted_Rect.h;
        fitted_Rect_tmp.w = fitted_Rect.w;
        fitted_Rect_tmp.x = fitted_Rect.x;
        fitted_Rect_tmp.y = fitted_Rect.y;
    }
}
else
{
    //printf("OnRender.cpp - Positioning didn't change\n");
}
}
