#pragma once
#include "Modules\Input\InputHeader.h"
#include "Modules\Display\Camera\Camera.h"
#include "Modules\Update\UpdateElement.h"

namespace FlatEngine::Actors::Controllers
{
	class IZoomController
	{
		virtual float GetSpeed() const = 0;
		virtual void SetSpeed(float value) = 0;

	protected:
		virtual void Zoom(float delta) = 0;
	};
}