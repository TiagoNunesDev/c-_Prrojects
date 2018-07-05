/*
 * Point.cpp
 *
 *  Created on: 05/07/2018
 *      Author: tnunes
 */

#include "Point.h"

Retangle::~Retangle(){}

Retangle::Retangle(int top,int left,int bottom, int right){
	this->itsTop  = top;
	this->itsLeft = left;
	this->itsBottom = bottom;
	this->itsRight = right;

	this->itsUpperLeft.SetX(left);
	this->itsUpperLeft.SetY(top);

	this->itsUpperRight.SetX(right);
	this->itsUpperRight.SetY(top);

	this->itsLowerLeft.SetX(left);
	this->itsLowerLeft.SetY(bottom);

	this->itsLowerRight.SetX(right);
	this->itsLowerRight.SetY(bottom);
}


int Retangle::GetArea() const {
	int Width = this->itsRight - this->itsLeft;
	int Height = this->itsTop - this->itsBottom;
	return (Width * Height);
}




