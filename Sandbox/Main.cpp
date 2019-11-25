#include <iostream>
#include <SDL2/SDL.h>
#include "Window.h"

#define WIDTH 800
#define HEIGHT 600

int SDL_main(int argc, char *argv[])
{
	Window window = Window(WIDTH, HEIGHT);

	bool running = true;

	while (running)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			switch (event.type)
			{
			case SDL_QUIT:
				running = false;
				break;
			}
		}
	}
	return 0;
}
