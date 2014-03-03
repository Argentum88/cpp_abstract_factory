#include "abstract_factory.h"

Engine* ToyotaAbstractFactory::createEngine()
{
	return new ToyotaEngine;
};

Wheels* ToyotaAbstractFactory::createWheels()
{
	return new ToyotaWheels;
};

Engine* MazdaAbstrctFactory::createEngine()
{
	return new MazdaEngine;
};

Wheels* MazdaAbstrctFactory::createWheels()
{
	return new MazdaWheels;
};