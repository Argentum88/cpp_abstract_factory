#include "car.h"

Car::Car(IAbstractFactory* abstractFactory)
{
	engine = abstractFactory->createEngine();
	wheels = abstractFactory->createWheels();
}

void Car::pushAccelerator()
{
	engine->incNoiseLevel();
	wheels->incRotationalSpeed();
}

int Car::getSpeedValue()
{
	return wheels->getRotatoonalSpeed();
}