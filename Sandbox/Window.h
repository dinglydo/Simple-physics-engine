#pragma once

class Window 
{
public:
	Window(int width, int height);
	~Window();

private:
	void CreateWindow(const char* title, unsigned int width, unsigned int height);
};