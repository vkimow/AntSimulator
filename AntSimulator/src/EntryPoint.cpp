#include "App.h"

int main()
{
	//sf::RenderWindow* renderWindow = new sf::RenderWindow(sf::VideoMode(1280, 720), "AntSim");
	//sf::CircleShape circleShape(100);
	//circleShape.setFillColor(sf::Color::Green);
	//circleShape.setPosition(0, 0);

	//while(true)
	//{
	//	renderWindow->clear();
	//	renderWindow->draw(circleShape);
	//	renderWindow->display();
	//}

	FlatEngine::Core::App app("Ant Simulator", 1280, 720);
	app.Start();
	return 0;
}