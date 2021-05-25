#pragma once

namespace FlatEngine::Actors::Controllers
{
	class IRotateController
	{
	public:
		virtual float GetSpeed() const = 0;
		virtual void SetSpeed(float value) = 0;

	protected:
		virtual void Rotate(float delta) = 0;
	};
}