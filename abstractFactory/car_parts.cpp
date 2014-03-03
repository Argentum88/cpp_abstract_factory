#include "car_parts.h"

int Engine::getNoiseLevel()
{
	return noiseLevel;
};

Engine::Engine()
{
	noiseLevel = 0;
};

int Wheels::getRotatoonalSpeed()
{
	return rotationalSpeed;
};

Wheels::Wheels()
{
	rotationalSpeed = 0;
}