#include "mozda_car_parts.h"
#include "toyota_car_parts.h"

class IAbstractFactory
{
public:
	virtual Engine* createEngine() = 0; 
	virtual Wheels* createWheels() = 0;
};

class ToyotaAbstractFactory : public IAbstractFactory
{
public:
	Engine* createEngine();
	Wheels* createWheels();
};

class MazdaAbstrctFactory : public IAbstractFactory
{
public:
	Engine* createEngine();
	Wheels* createWheels();
};