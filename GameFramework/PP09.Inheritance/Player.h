#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "GameObejct.h"

class Player : public GameObject
{
public:
	void load(int x, int y, int width, int height,
		std::string textureID);
	void draw(SDL_Renderer* pRenderer);
	void update();
	//void clean();
};