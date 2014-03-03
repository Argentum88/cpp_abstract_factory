#include "abstract_factory.h"

class Car
{
protected:
	Engine* engine;
	Wheels* wheels;
public:
	Car(IAbstractFactory*);
	void pushAccelerator();
	int getSpeedValue();
};