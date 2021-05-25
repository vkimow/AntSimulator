#pragma once

#include "SFML/System.hpp"

namespace FlatEngine::Actors::Controllers
{
	class IScaleController
	{
	public:
		virtual float GetSpeed() const = 0;
		virtual void SetSpeed(float value) = 0;

	protected:
		virtual void Scale(const sf::Vector2f& delta) = 0;
	};
}