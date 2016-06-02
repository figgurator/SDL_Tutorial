#include "CApp.h"

SDL_Surface* CApp::loadSurface(std::string path){


            //Load Image at specified path
            SDL_Surface* loadedSurface = SDL_LoadBMP(path.c_str() );
            if(loadedSurface == NULL)
            {
                printf("Unable to load image %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
            }

            return loadedSurface;
        }
