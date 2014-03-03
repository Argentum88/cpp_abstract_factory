#include "car_parts.h"

class MazdaEngine : public Engine
{
public:
	void incNoiseLevel();
};

class MazdaWheels : public Wheels
{
public:
	void incRotationalSpeed();
};