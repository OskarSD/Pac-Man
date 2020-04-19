#include "window.h"

SDL_Renderer* Window::renderer = nullptr;

Window::Window(const std::string& title, int width, int height) :
	_title(title), _width(width), _height(height) {
	_window = SDL_CreateWindow(
		_title.c_str(),
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		_width,
		_height,
		SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL
	);

	renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_PRESENTVSYNC);
}

void Window::pollEvents(SDL_Event& event) {
	switch (event.type) {
	case SDL_QUIT:
		_closed = true;
		break;
	default:
		break;
	}
}

void Window::clear(int r, int g, int b) const {
	SDL_RenderPresent(renderer);
	SDL_SetRenderDrawColor(renderer, r, g, b, 255);
	SDL_RenderClear(renderer);
}