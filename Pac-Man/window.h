#ifndef WINDOW_H
#define WINDOW_H

#include <SDL.h>
#include <iostream>
#include <string>
#include <iostream>

class Window {
public:
	Window(const std::string& title, int width, int height);

	void pollEvents(SDL_Event& event);

	void clear() const;

	inline bool getClosed() { return _closed; }

	static SDL_Renderer* renderer;

private:
	std::string _title;
	int _width;
	int _height;

	bool _closed = false;

	SDL_Window* _window = nullptr;

};

#endif