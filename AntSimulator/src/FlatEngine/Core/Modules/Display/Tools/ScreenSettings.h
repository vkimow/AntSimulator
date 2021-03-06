#pragma once

#include "SFML\System.hpp"

namespace FlatEngine::Core::Modules::Display
{
	class ScreenSettings
	{
	public:
		ScreenSettings(unsigned int W, unsigned int H);
		ScreenSettings() = delete;

		~ScreenSettings() {};

	public:
		sf::Vector2u GetResolution() const { return resoultion; }
		sf::Vector2f GetHalfResolution() const { return halfResoultion; }

	private:
		sf::Vector2u resoultion;
		sf::Vector2f halfResoultion;
	};
}