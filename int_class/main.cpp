#include "Integer.h"
#include <iostream>

Integer operator+(const Integer &a, const Integer &b){
	Integer temp;
	temp.SetValue(a.GetValue() + b.GetValue());
	return temp;
}
int main(){
	Integer a(1), b(3);
	Integer c;
	std::cout << a.GetValue() << std::endl;
	// a.SetValue(Add(a,b).GetValue());
	return 0;
}