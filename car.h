#pragma once
class Car {
private:
	float fuel {0};
	float speed {0};
	int passengers {0};
	static int s_totalCount;
	// int arr[5] = {1,2,3};
	// char *p{};
public:
	Car();
	Car(float amount);
	~Car();
	void FillFuel(float amount);
	void Accelerate();
	void Brake();
	void AddPassengers(int count);
	void DashBoard();
	static void ShowCount();

};