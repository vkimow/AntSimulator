#pragma once

#include "SFML\System.hpp"
#include "IMovable.h"
#include "IRotatable.h"
#include "IScalable.h"

namespace FlatEngine::Core::Simulation
{
	class ITransformable : public IMovable, public IRotatable, public IScalable
	{
		friend std::ostream& operator<<(std::ostream& out, const ITransformable& transformable);
	};
}