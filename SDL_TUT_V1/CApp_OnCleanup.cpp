#include "CApp.h"

void CApp::OnCleanup() {

    SDL_FreeSurface(Level_Player_Pic);

    SDL_DestroyWindow(MainWindow);

    SDL_Quit();

}
