#pragma once
#include<string>

class GameState
{
protected:
	std::vector<GameObject*> m_gameObjects;
public:
	virtual void update() = 0;
	virtual void render() = 0;
	virtual bool onEnter() = 0;
	virtual bool onExit() = 0;
	virtual std::string getStateID() const = 0;
};
