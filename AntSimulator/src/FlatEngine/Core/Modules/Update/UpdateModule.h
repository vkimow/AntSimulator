#pragma once

#include <vector>

namespace FlatEngine{
namespace Core{
namespace Modules{

class UpdateElement;

class UpdateModule
{
	friend class GameLooper;
	friend class UpdateElement;

public:
	UpdateModule();
	UpdateModule(UpdateModule&& updateModule) = delete;

public:
	void Update();

private:
	static std::vector<UpdateElement*> elements;

private:
	static void AddElement(UpdateElement* element);
	static void RemoveElement(UpdateElement* element);
	static void SortElements();
};

}
}
}