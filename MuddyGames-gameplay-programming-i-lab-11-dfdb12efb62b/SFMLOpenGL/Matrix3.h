#pragma once
#include "string"
#include "Vector3.h"
#include <math.h>


class Matrix3
{

public:
	// The class has nine variables, 3 rows and 3 columns
	float A11;
	float A12;
	float A13;
	float A21;
	float A22;
	float A23;
	float A31;
	float A32;
	float A33;

	std::string ToString()const;

	// Constructor 1 create a zero matrix
	Matrix3();

	// Constructor 2
	Matrix3(Vector3 Row1, Vector3 Row2, Vector3 Row3);

	// Constructor 3
	Matrix3(float _A11, float _A12, float _A13,
		float _A21, float _A22, float _A23,
		float _A31, float _A32, float _A33);


	Vector3 operator *(Vector3 V1);

	Matrix3 operator *(Matrix3 M1);

	Matrix3 Transpose(Matrix3 M1);


	Matrix3 operator +(Matrix3 M);


	Matrix3 operator -(Matrix3 M);


	Matrix3 operator *(double x);


	static float Determinant(Matrix3 M1);


	Vector3 Row(int i);


	Vector3 Column(int i);


	static Matrix3 Inverse(Matrix3 M1);


	static Matrix3 Rotation(float _angle);

	static Matrix3 Translate(float dx, float dy);

	static Matrix3 Matrix3Scale(float dx, float dy);

	Matrix3 operator -();

	static Matrix3 RotationX(float _angle);


	static Matrix3 RotationY(float _angle);


	static Matrix3 RotationZ(float _angle);


	static Matrix3 Scale3D(float dx);


};