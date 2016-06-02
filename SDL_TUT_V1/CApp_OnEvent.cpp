#include "CApp.h"

void CApp::OnEvent(SDL_Event* Event) {
    if(Event->type == SDL_MOUSEWHEEL) {
        Running = false;
    }

    if(Event->type == SDL_KEYDOWN)
    {
        switch (Event->key.keysym.sym)
        {
            case SDLK_UP:
                printf("up\n");
                fitted_Rect.y -= 10; break;
            case SDLK_DOWN:
                printf("down\n");
                fitted_Rect.y += 10; break;
            case SDLK_LEFT:
                printf("left\n");
                fitted_Rect.x -= 10; break;
            case SDLK_RIGHT:
                printf("right\n");
                fitted_Rect.x += 10; break;
        }
    }
}
