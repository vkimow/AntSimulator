#pragma once

#include "SFML\System.hpp"

namespace FlatEngine::Core::Simulation
{
	class IScalable
	{
	public:
		virtual void Scale(const sf::Vector2f& delta) = 0;
		virtual void SetScale(const sf::Vector2f& value) = 0;
		virtual sf::Vector2f GetScale() const = 0;
	};
}