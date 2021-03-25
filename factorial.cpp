#include<iostream>

void Factorial(int *a, int *result){
    
    int y {1};
    for (int i=1; i <= *a; ++i){

    	y *=i;
    }

    result=&y;

    std::cout<< "Factorial: " << *result << std::endl;
}


int main(){

	int x, *result;

	std::cout << "Enter a number to calculate it's Factorial!\n";
	std::cin >> x ;

    Factorial(&x , result);
}