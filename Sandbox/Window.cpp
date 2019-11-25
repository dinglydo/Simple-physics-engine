#include <SDL2/SDL.h>
#include "Window.h";

SDL_Window* window;

Window::Window(int width, int height)
{
	SDL_Init(SDL_INIT_VIDEO);
	CreateWindow("Sandbox - test", width, height);
}

Window::~Window() 
{
	SDL_DestroyWindow(window);
	SDL_Quit();
	SDL_Log("Window Destroyed");
}

void Window::CreateWindow(const char* title, unsigned int width, unsigned int height)
{
	window = SDL_CreateWindow("Sandbox - test",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		width, height, NULL);
	SDL_Log("Window Created");
}