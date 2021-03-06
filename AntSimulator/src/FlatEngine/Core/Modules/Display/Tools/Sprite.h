#pragma once

#include "SFML\Graphics.hpp"
#include <memory>


namespace FlatEngine{
namespace Core{
namespace Modules{
namespace Display{

class Sprite
{
	friend class Animation;
	friend class Image;

public:
	Sprite();
	Sprite(std::shared_ptr<sf::Texture> texture);
	Sprite(std::shared_ptr<sf::Texture> texture, sf::IntRect rectangle);

public:
	void SetTexture(std::shared_ptr<sf::Texture> texture, bool resetRect = false);
	void SetTexture(std::shared_ptr<sf::Texture> texture, sf::IntRect rectangle);
	void SetTextureRect(const sf::IntRect& rectangle);
	void SetColor(const sf::Color& color);

	const std::shared_ptr<sf::Texture> GetTexture() const { return texture; }
	const sf::IntRect& GetTextureRect() const { return sfmlSprite.getTextureRect(); }
	const sf::Color& GetColor() const { return sfmlSprite.getColor(); }
	sf::FloatRect GetLocalBounds() const { return sfmlSprite.getLocalBounds(); }
	sf::FloatRect GetGlobalBounds() const { return sfmlSprite.getGlobalBounds(); }

private:
	sf::Sprite sfmlSprite;
	std::shared_ptr<sf::Texture> texture;
};

}
}
}
}