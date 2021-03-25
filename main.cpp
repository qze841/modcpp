#include "car.h"

int main(){

	Car::ShowCount();


	Car car(4);
	// car.FillFuel(6);
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.DashBoard();


	// Car c(5);
	// c.DashBoard();


	Car c1, c2;
	Car::ShowCount();

	return 0;
}