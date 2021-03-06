#pragma once
#include "SFML\Graphics.hpp"
#include <string>

#pragma region Forward Declaration

namespace FlatEngine::Core{
class GameLooper;
}

namespace FlatEngine::Core::Modules{
class ModuleManager;
}

//namespace sf{
//class Window;
//class Vector2f;
//}

#pragma endregion

namespace FlatEngine{
namespace Core{

class App
{
public:
	App();
	App(const App& rhs) = delete;
	App(App&& rhs) = delete;
	App(std::string appName, unsigned int width, unsigned int height);
	~App();

public:
	void Start();
	static void Quit();

private:	
	static bool isAppActive;
	sf::Window* sfmlApp;
	GameLooper* gameLooper;
};

}
}
