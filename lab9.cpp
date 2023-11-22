#include <iostream>
using namespace std;
#include "Car.h"
#include "SUV.h"
#include "Engineer.h"
int main(int argc, char* argv[]) {
	Car* newSUV=new SUV();
	newSUV->setPrice(45000);
	std::cout <<"The wheels are " << newSUV->getWheels() << std::endl;
	Engineer engineer;
	std::cout << "Price is " << engineer.getCarPrice(newSUV) << " dollar\n";

	 
	std::cout << " with virtual \n";
	std::cout << "Suspension is "  << std::endl;
	newSUV->suspension();
	newSUV->klaxon(3);


	delete newSUV;

	getchar();
	return 123;
}