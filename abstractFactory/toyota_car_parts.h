#include "car_parts.h"

class ToyotaEngine : public Engine
{
public:
	void incNoiseLevel();
};

class ToyotaWheels : public Wheels
{
public:
	void incRotationalSpeed();
};