#pragma once

namespace FlatEngine{
namespace Core{
namespace Modules{

class UpdateElement
{
public:
	UpdateElement();
	UpdateElement(int updateOrder);
	virtual ~UpdateElement();

public:
	virtual void Update() = 0;

	int GetUpdateOrder() const { return updateOrder; }
	void SetUpdateOrder(int value);

	bool IsActive() const { return isActive; }
	void SetActive(bool value);

private:
	bool isActive;
	int updateOrder;
};

}
}
}