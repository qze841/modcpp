#include <iostream>
#include <memory>
#include <utility>


struct  MyInt
{
	MyInt(int i) : i_(i) {}
	~MyInt() { std::cout << "Goodbye from " << i_ << std::endl;}
	int i_;
};

int main(){
	std::unique_ptr<MyInt> uniquePtr1 {new MyInt(1998)};
	std::cout<<"uniquePtr.get() "<< uniquePtr1.get() << std::endl;
	std::unique_ptr<MyInt> uniquePtr2 {std::move(uniquePtr1)};
    std::cout<<"uniquePtr1.get() "<< uniquePtr1.get() << std::endl;
    std::cout<<"uniquePtr2.get() "<< uniquePtr2.get() << std::endl;
    std::cout << std::endl;

    {
    	std::unique_ptr<MyInt> localPtr {new MyInt(2003)};
    }

    uniquePtr2.reset(new MyInt(2011));
    MyInt *myInt = uniquePtr2.release();
    delete myInt;
       
}