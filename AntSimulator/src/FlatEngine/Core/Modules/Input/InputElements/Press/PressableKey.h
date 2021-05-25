#pragma once

#include "Pressable.h"

namespace FlatEngine::Core::Modules::Input{

class PressableKey : public Pressable
{
public:
	PressableKey() = delete;
	PressableKey(PressableKey&& inputKeyElement) = delete;
	PressableKey(const PressableKey& inputKeyElement) = delete;

	PressableKey(sf::Keyboard::Key key);
	~PressableKey();

protected:
	virtual bool GetPressInput(const sf::Event& event) override final;

private:
	sf::Keyboard::Key key;
};

}