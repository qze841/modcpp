#include "car.h"
#include <iostream>

int Car::s_totalCount = 0;

Car::Car() {
	++s_totalCount;
	// fuel=0;
	// speed=0;
	// passengers=0;
}
Car::Car(float amount){
	++s_totalCount;
	fuel = amount;
	// speed = 0;
	// passengers = 0;
}

Car::~Car(){
	--s_totalCount;
	std::cout << "~Car()" << std::endl;
}

void Car::FillFuel(float amount){
      fuel = amount;
}

void Car::Accelerate(){
     this->speed++;
     this->fuel -=0.5f;
}

void Car::Brake(){
   speed = 0;
}

void Car::AddPassengers(int passengers){
    this->passengers = passengers;
}
void Car::DashBoard(){
   std::cout << "Fuel:" << fuel << std::endl;
   std::cout << "Speed:" << speed << std::endl;
   std::cout << "Passengers:" << passengers << std::endl;
}

void Car::ShowCount(){
	std::cout << "Total cars: " << s_totalCount << std::endl;
}