/*
 * main.cpp
 *
 *  Created on: 05/07/2018
 *      Author: tnunes
 */


// this is the c++ class study

#include <iostream>

#include "../src/libs/Point.h"

using namespace std;

int main(){

	Retangle MyRetangle(100,20,50,80);

	int Area = MyRetangle.GetArea();

	std::cout << "Area:" << Area << endl;
	std::cout << "Upper Left X Coordinate:";
	std::cout << MyRetangle.GetUpperLeft().GetX();

}




