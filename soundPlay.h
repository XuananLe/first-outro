#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <thread>
#include <chrono>
#include <stdio.h>
#include <iostream>
void countDown(int timer, bool *isRunning) 
{
    *isRunning = true;
    for (int i = 0; i < timer; i++)
    {
        sleep(1);
    }
    
    *isRunning = false;
}

void phatNhac() {
//int main() {
    //system("play asset/music/final.mp3");

    bool isRunning = true;

    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) == -1)
    {
        printf("%s", Mix_GetError());
    }

    Mix_Music *music = NULL;

    music = Mix_LoadMUS("asset/music/final.mp3");
    
    if (music == NULL)
    {
        printf("%s", Mix_GetError());
    }
    while (true)
    {
        if (!Mix_PlayingMusic())
	        Mix_PlayMusic(music, 1);
    }
}