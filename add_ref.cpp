#include <iostream>

void AddVal(int a, int b, int &result){
    
	result = a + b;
	std::cout << "Sum is : " << result << std::endl;


}

int main(){
    
   int x, y,z;

   std::cout<<"Enter two numbers: \n";
   std::cin >> x >> y;
   

   AddVal(x,y,z);

   return 0;
}