#pragma once

#include "SFML/Window.hpp"

namespace FlatEngine::Core::Modules
{
	class InputElement
	{
	protected:
		InputElement();

	public:
		virtual ~InputElement();

	public:
		virtual void UpdateInput(const sf::Event& event) = 0;

		void SetActive(bool value);
		bool IsActive() const { return isActive; }

	private:
		bool isActive;
	};
}

