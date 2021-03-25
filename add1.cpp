#include<iostream>

int Add(int *a, int *b){ 
   return *a + *b; 
}

int main(){
   
   int x, y, sum {};

   std::cout<<"Enter two numbers: \n";
   std::cin >> x >> y;

   sum = Add(&x,&y);


   std::cout << "Sum of the two numbers : " << sum << std::endl;


   return 0;
}