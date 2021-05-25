#include "CameraController.h"

#include "Tools\ToolsHeader.h"
#include <functional>

namespace FlatEngine::Actors::Controllers
{
	CameraController::CameraController(Core::Modules::Display::Camera* camera,
		std::shared_ptr<Core::Modules::Input::Vector> input,
		std::shared_ptr<Core::Modules::Input::Delta> zoomInput)
		:
		camera(camera),
		input(input),
		zoomInput(zoomInput)
	{}

	CameraController::CameraController(Core::Modules::Display::Camera* camera,
									   std::shared_ptr<Core::Modules::Input::Vector> moveInput = nullptr,
									   std::shared_ptr<Core::Modules::Input::Delta> rotateInput = nullptr,
									   std::shared_ptr<Core::Modules::Input::Delta> zoomInput = nullptr)
		: camera(camera),
		move(camera->GetOrigin(), moveInput),
		rotate(camera->GetOrigin(), rotateInput),
		zoomInput(zoomInput)
	{};

	CameraController::~CameraController()
	{}

	void CameraController::Update()
	{
		sf::Vector2f moveDelta = input->GetVector();
		moveDelta = Core::Tools::Vector::Normalize(moveDelta);

		if (moveDelta.x != 0 || moveDelta.y != 0)
		{
			Move(moveDelta);
		}

		float zoomDelta = zoomInput->GetDelta();

		if (zoomDelta != 0)
		{
			Zoom(zoomDelta);
		}
	}

	void CameraController::Move(sf::Vector2f delta)
	{
		//std::cout << "MOVED";
		camera->GetOrigin()->Move(delta);
	}

	void CameraController::Zoom(float delta)
	{
		float zoom = camera->GetZoom();
		camera->SetZoom(zoom + delta);
	}
}