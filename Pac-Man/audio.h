#pragma once

#include <SDL_audio.h>

class audio
{
public: 
	~audio();
	void load(const char* filename);
	void play();

private:
	SDL_AudioSpec wavSpec;
	Uint32 wavLength;
	Uint8 *wavBuffer;
	SDL_AudioDeviceID deviceID;
};

/* SOUND EFFECTS CURRENTLY IN SOUND FOLDER

soundEffect.load("pacman_beginning.wav");
soundEffect.load("pacman_chomp.wav");
soundEffect.load("pacman_death.wav");
soundEffect.load("pacman_eatghost.wav");

*/