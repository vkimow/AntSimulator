#pragma once

#include "Pressable.h"

namespace FlatEngine::Core::Modules::Input{

class PressableMouse: public Pressable
{
public:
	PressableMouse() = delete;
	PressableMouse(PressableMouse&& inputKeyElement) = delete;
	PressableMouse(const PressableMouse& inputKeyElement) = delete;

	PressableMouse(sf::Mouse::Button button);
	~PressableMouse();

protected:
	virtual bool GetPressInput(const sf::Event& event) override final;

private:
	sf::Mouse::Button button;
};

}