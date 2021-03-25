#include <iostream>

int main(){

	int x = 5;
	const int MAX = 12;

	int &ref_x1 = x;
	const int &ref_x2=x;

	// ref_x1 = 13;
	// ref_x2 = 14;  // error: cannot assign to variable ref_x2 with const-qualified type 'const int &'


	const int *ptr1 = &x;
	int *const ptr2 = &x;
	const int * const ptr3 = &x;

	// *ptr1 = 14;  // error: read-only variable is not assignable
	// x = 15;

	int * ptr3 = &MAX ; // error: redefinition of 'ptr3' with a different type
	const int *ptr4 = &MAX;

    int &r1 = ref_x1;
	const int &r2 = ref_x2 ; 

	const int *&p_ref1 = ptr1;
	int* const &p_ref2 = ptr2;

	std::cout << "print: " << *ptr1 << " "<<*ptr3 << " " << *ptr4 << std::endl;
}