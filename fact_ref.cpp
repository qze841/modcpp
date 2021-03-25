#include<iostream>

void Factorial(int a, int &result){
    
    int x{1};
    for (int i=1; i <= a; ++i){

    	x *=i;
    }

    result=x;

    std::cout<< "Factorial: " << result << std::endl;
}


int main(){

	int x, result;

	std::cout << "Enter a number to calculate it's Factorial!\n";
	std::cin >> x ;

    Factorial(x , result);
}