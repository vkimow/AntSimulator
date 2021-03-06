#pragma once

namespace FlatEngine::Core::Simulation
{
	class IRotatable
	{
	public:
		virtual void Rotate(float delta) = 0;
		virtual void SetRotation(float value) = 0;
		virtual float GetRotation() const = 0;
	};
}