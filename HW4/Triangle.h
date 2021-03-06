/*
 * Triangle.h
 *
 *  
 *      Author: Nevra Gürses
 */
#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <fstream>

using namespace std;
class Triangle
{
public:
	Triangle(double sideValue);// Initilates the side lenght of container Triangle according to entered value.
	Triangle(){ } //No parameter constructor.
	Triangle(double sideValue,double X1,double Y1,double X2,double Y2,double X3,double Y3,double x1,double y1,double x2,double y2,double x3,double y3);
	Triangle(double sideValue,double X1,double Y1,double X2,double Y2,double X3,double Y3);
	void set_smallTriangle(int smallSide); // Initilates the side lenght of small Triangle according to entered value.

	friend ostream& operator <<(ostream& SvgFile,const Triangle& object); //overloading << operator to drawing triangle in svg file.

	//Overloading + and - operators to create new triangle.
	const Triangle operator +(const double number) const;
	const Triangle operator -(const double number) const;
	
	//Overloading unary operators to increment or decrement positions.
	const Triangle operator++();
	const Triangle operator++(int);
	const Triangle operator--();
	const Triangle operator --(int);

	//Overloading operators to compare two triangle.
	bool  operator == (const Triangle& second) const;
	bool  operator != (const Triangle& second) const;
	bool  operator < (const Triangle& second) const;
	bool  operator > (const Triangle& second) const;

	//Static  functions to calculate total area and perimeter lenght of all triangles.
	static double getTotalArea();
	static double getTotalPerimeter();

	
	double smallPerimeter() const; //Returns perimeter of small triangle.
	double bigPerimeter() const; //Returns perimeter of container triangle.
	double smallArea() const;   //Returns area of small triangle.
	double bigArea() const;  //Returns area of big triangle.

	void outputUploaded() const; //Write screen positions of small and container triangles .


	void setDegree(int valueDegree); //Determining degree to rotating.
	void setBigColor();// Assigns color red to container Triangle.
	void setSmallColor(); // Assigns color green to small Triangle.
	void setRotate(double x,double y); // Determines which coordinates to rotate.This is necessary to Triangle in Circle.
	void setBigTriangle(double a1, double a2,double b1,double b2,double c1,double c2); // // Determines position of container Triangle.
	void setTriangle(double new_a1, double new_a2,double new_b1,double new_b2,double new_c1,double new_c2); // Determines the new positions of small Triangles in container shape

	void test(); // Tests the side lenght is negative or zero.If it is,then program is stopped.
	void draw(int degree,ofstream &SvgFile); // Draws the container and small Triangle in Svg File.


	void output() const; // Writes side of Triangle on screen,if it is necessary.
	double getSide() const; // Returns side lenght of container Triangle.
	double getSmallSide() const;// Returns side lenght of small Triangle.
	int getDegree() const ;
	char getbigColor() const  ;
	char getsmallColor() const ;
 	//Returns coordinates of Triangle corner of small and container triangle.
	double getPos_a1()  const ;
	double getPos_a2()  const ;
	double getPos_b1()  const ;
	double getPos_b2()  const ;
	double getPos_c1()  const ;
	double getPos_c2()  const ;
	double getBig_a1()  const ;
	double getBig_a2()  const ;
	double getBig_b1()  const ;
	double getBig_b2()  const ;
	double getBig_c1()  const ;
	double getBig_c2()  const ;
	//Returns rotate coordinates.
	double getRotateX() const;
	double getRotateY() const ;

	
	
private:
	static double area; 
	static double perimeter;
	double side,s_side; // Side for container and small Triangles.
	//Positions.
	double big_a1,big_a2; 
	double big_b1,big_b2;
	double big_c1,big_c2;
	double pos_a1,pos_a2; 
	double pos_b1,pos_b2;
	double pos_c1,pos_c2;
	char color,s_color; // Color to container or small Triangle.
	int degree; // The degree of rotate.
	// Rotate coordinates.
	double rotateX;
	double rotateY;
};

#endif
