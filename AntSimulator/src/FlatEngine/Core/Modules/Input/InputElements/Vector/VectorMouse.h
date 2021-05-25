#pragma once

#include "Vector.h"

namespace FlatEngine{
namespace Core{
namespace Modules{
namespace Input{

class VectorMouse: public Vector
{
public:
	VectorMouse();
	~VectorMouse() {};

protected:
	virtual sf::Vector2f GetVectorInput(const sf::Event& event) override final;

private:
	sf::Vector2f mousePosition;
};

}
}
}
}