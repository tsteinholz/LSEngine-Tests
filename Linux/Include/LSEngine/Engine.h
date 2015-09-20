#pragma once
#ifndef LSENGINE_ENGINE_H
#define LSENGINE_ENGINE_H

//#include <spdlog/spdlog.h>

#include "Graphics/Window.h"
//#include <Language/Language.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_net.h>
#include <SDL2/SDL_ttf.h>

#define ENGINE LSEngine::Engine::GetInstance()

namespace LSEngine
{
    class Engine
    {
    public:

        static Engine& GetInstance();
    
        enum State
        {
            INITIALIZING,
            EXECUTING,
            HALTING,
        };

        bool Initialize();

        static bool Quit;

        static float DeltaTime;
        
        static Window* GameWindow;

    private:
        Engine();
        ~Engine();
        Engine(const Engine& other) = delete;
        Engine& operator=(const Engine&) = delete;
    };
}

#endif // LSENGINE_ENGINE_H