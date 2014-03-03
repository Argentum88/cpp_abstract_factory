#include <iostream>
#include "car.h"

int main()
{
	Car* Tcar = new Car(new ToyotaAbstractFactory);
	Tcar->pushAccelerator();
	std::cout << Tcar->getSpeedValue() << " km/ch" << std::endl;

	Car* Mcar = new Car(new MazdaAbstrctFactory);
	Mcar->pushAccelerator();
	std::cout << Mcar->getSpeedValue() << " km/ch" << std::endl;

	std::cin.get();
	return 0;
}