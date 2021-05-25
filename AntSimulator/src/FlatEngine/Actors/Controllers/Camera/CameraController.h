#pragma once

#include "Modules\Display\Camera\Camera.h"
#include "Modules\Update\UpdateElement.h"
#include "Modules\Input\InputHeader.h"
#include "Transform/MoveController.h"
#include "Transform/RotateController.h"


namespace FlatEngine::Actors::Controllers
{
	class CameraController : public Core::Modules::UpdateElement
	{
	public:
		CameraController(Core::Modules::Display::Camera* camera,
						 std::shared_ptr<Core::Modules::Input::Vector> moveInput);

		CameraController(Core::Modules::Display::Camera* camera,
						 std::shared_ptr<Core::Modules::Input::Vector> moveInput,
						 std::shared_ptr<Core::Modules::Input::Delta> zoomInput);

		CameraController(Core::Modules::Display::Camera* camera,
						 std::shared_ptr<Core::Modules::Input::Vector> moveInput,
						 std::shared_ptr<Core::Modules::Input::Delta> rotateInput,
						 std::shared_ptr<Core::Modules::Input::Delta> zoomInput);



		~CameraController();

	public:
		virtual void Update() override;

	private:
		void Zoom(float delta);

	private:
		Core::Modules::Display::Camera* camera;

		MoveController* move;
		RotateController* rotate;

		std::shared_ptr<Core::Modules::Input::Delta> zoomInput;
	};
}