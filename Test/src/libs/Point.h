/*
 * Point.h
 *
 *  Created on: 05/07/2018
 *      Author: tnunes
 */

#ifndef SRC_LIBS_POINT_H_
#define SRC_LIBS_POINT_H_

class Point
{
private:
	int itsX;
	int itsY;

public:
	void SetX(int x) { this->itsX = x;}
	void SetY(int y) { this->itsY = y;}
	int GetX(){ return this->itsX;}
	int GetY(){ return this->itsY;}

};


class Retangle
{

private:
	Point itsUpperLeft;
	Point itsUpperRight;
	Point itsLowerLeft;
	Point itsLowerRight;
	int itsTop;
	int itsLeft;
	int itsBottom;
	int itsRight;

public:
	//Retangle();
	Retangle(int top,int left,int bottom,int right);
	~Retangle();

	int GetTop() const { return this->itsTop;}
	int GetLeft() const { return this->itsLeft;}
	int GetBottom() const { return this->itsBottom;}
	int GetRigth() const { return this->itsRight;}

	Point GetUpperLeft() const { return this->itsUpperLeft;}
	Point GetLowerLeft() const { return this->itsLowerLeft;}
	Point GetUpperRight() const { return this->itsUpperRight;}
	Point GetLowerRight() const { return this->itsLowerRight;}

	void SetUpperLeft(Point Location) { this->itsUpperLeft = Location; }
	void SetLowerLeft(Point Location) { this->itsLowerLeft = Location; }
	void SetUpperRight(Point Location) { this->itsUpperRight = Location;}
	void SetLowerRight(Point Location) { this->itsLowerRight = Location;}

	void SetTop(int top) { this->itsTop = top;}
	void SetLeft( int left){this->itsLeft = left;}
	void SetRight(int right) { this->itsRight = right;}
	void SetBottom (int bottom) { this->itsBottom = bottom;}

	int GetArea() const;

};



#endif /* SRC_LIBS_POINT_H_ */
