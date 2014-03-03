#pragma once
class Engine {
protected:
	int noiseLevel;
public:
	Engine();
	int getNoiseLevel();
	virtual void incNoiseLevel() = 0;
};

class Wheels {
protected:
	int rotationalSpeed;
public:
	Wheels();
	int getRotatoonalSpeed();
	virtual void incRotationalSpeed() = 0;
};