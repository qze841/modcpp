#include <iostream>

void Swap(int &a, int &b){

	std::cout << "The two values are: " << a << " and " << b << std::endl;
	int temp;

	temp = a;
	a = b;
	b = temp;

	std::cout << "The swaped values are: " << a << " and " << b << std::endl;
}


int main(){

	int a, b {};

	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> a >> b;
	Swap(a, b);
}