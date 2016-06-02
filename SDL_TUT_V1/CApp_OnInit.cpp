#include "CApp.h"

bool CApp::OnInit() {
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        printf("OnInit.cpp - SDL_Init() < 0 - line 5 went wrong");
        return false;
    }
    else
    {
        printf("OnInit.cpp - SDL_INIT called\n");
        if(CreateLevel(1024,768) == true){


        };
    }
}
