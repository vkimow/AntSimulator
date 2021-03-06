#pragma once

#include "SFML\System.hpp"

namespace FlatEngine::Core::Modules{

class TimeModule
{
	friend class GameLooper;

private:
	TimeModule(const TimeModule & timeModule) = delete;
	TimeModule(TimeModule && timeModule) = delete;
	TimeModule();

public:
	void Update();

public:
	static float GetDeltaTime() { return deltaTime; }

private:
	static float deltaTime;
	sf::Clock clock;
};

}