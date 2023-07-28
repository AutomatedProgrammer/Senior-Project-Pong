#pragma once
#include <iostream>
#include "TextureLoader.h"
#include <SFML/Graphics.hpp>

class ScoreObject
{
public:
	ScoreObject(float xpos, float ypos);
	friend class BallObject; //Give it access to the ball object
	void show(sf::RenderWindow& mWindow);
	void updateScore(int id);

private:
	sf::Sprite sprite;
	TextureLoader textures;



};
