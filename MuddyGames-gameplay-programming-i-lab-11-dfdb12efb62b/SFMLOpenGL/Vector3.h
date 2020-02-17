#pragma once
#include <iostream>
#include <string>
#include <math.h>
#define PI           3.14159265358979323846

class Vector3
{
public:


	// The class has three variables x, y and z 
	float x;
	float y;
	float z;


	// Constructor 1
	Vector3();

	// Constructor 2
	Vector3(float x1, float y1, float z1);

	Vector3(Vector3 V, Vector3 V2);


	Vector3 operator +(Vector3 V);


	Vector3 operator -(Vector3 V);


	Vector3 operator -();

	float operator *(Vector3 V1);

	Vector3 operator *(double k);

	Vector3 operator *(float k);

	Vector3 operator *(int k);

	Vector3 operator ^(Vector3 V);



	float Length();

	float LengthSquared();

	void Normalise();

	void Rotate(Vector3 pt, int t_angle);



	std::string ToString();

};