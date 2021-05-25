#pragma once

#include <list>

namespace FlatEngine::Core::Modules::Display
{
	class Camera;

	class CameraManager
	{
		friend class Camera;

	public:
		CameraManager() {};
		~CameraManager() {};

	public:
		Camera* GetActiveCamera() { return activeCamera; }

	private:
		static void SetActiveCamera(Camera* value);
		static void AddCamera(Camera* value);
		static void RemoveCamera(Camera* value);
		static Camera* GetExistingCamera();

	private:
		static Camera* activeCamera;
		static std::list<Camera*> cameras;
	};
}