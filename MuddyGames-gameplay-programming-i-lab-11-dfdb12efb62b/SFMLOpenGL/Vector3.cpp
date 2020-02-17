#include "Vector3.h"



// Constructor 1
Vector3::Vector3() :
	x{ 0.0f },
	y{ 0.0f },
	z{ 0.0f }
{
}


// Constructor 2
Vector3::Vector3(float x1, float y1, float z1)
{ // To allow other values for X, Y and Z to be declared
	x = x1;
	y = y1;
	z = z1;
}
// Constructor 3
Vector3::Vector3(Vector3 V, Vector3 V2)
{  // To allow other values for X, Y and Z to be declared
	x = V.x;
	y = V.y;
	z = V.z;
	x = V2.x;
	y = V2.y;
	z = V2.z;
}


//trying something
Vector3 Vector3::operator +(Vector3 V)
{  // An overloaded operator + to return the sum of 2 vectors
	return Vector3(x + V.x, y + V.y, z + V.z);
}



Vector3 Vector3::operator -(Vector3 V)
{ // An overloaded operator - to return the difference of 2 vectors
	return Vector3(x - V.x, y - V.y, z - V.z);
}


Vector3 Vector3::operator -()
{// An overloaded operator - to return the negation of a single vector
	return { -x, -y, -z };
}


float Vector3::operator *(Vector3 V)
{// An overloaded operator * to return the scalar product of 2 vectors
	return (x * V.x + y * V.y + z * V.z);
}

Vector3 Vector3::operator *(double k)
{// An overloaded operator * to return the product of a scalar by a vector
	return Vector3(x * (float)k, y * (float)k, z * (float)k);
}

Vector3 Vector3::operator *(float k)
{// An overloaded operator * to return the product of a scalar by a vector
	return Vector3(x * k, y * k, z * k);
}

Vector3 Vector3::operator *(int k)
{// An overloaded operator * to return the product of a scalar by a vector
	return Vector3(x * k, y * k, z * k);
}

Vector3 Vector3::operator ^(Vector3 V)
{// An overloaded operator ^ to return the vector product of 2 vectors
	return Vector3(y * V.z - z * V.y, z * V.x - x * V.z, x * V.y - y * V.x);
}


float Vector3::Length()
{
	// A method to return the length of the vector
	return sqrt(x * x + y * y + z * z);
}

float Vector3::LengthSquared()
{
	// A method to return the length squared of the vector
	return (x * x + y * y + z * z);
}

void Vector3::Normalise()
{
	// A method to reduce the length of the vector to 1.0 
	// keeping the direction the same
	if (Length() > 0.0)
	{  // Check for divide by zero
		float magnit = Length();
		x /= magnit;
		y /= magnit;
		z /= magnit;
	}
}

void Vector3::Rotate(Vector3 pt, int t_angle)
{
}

std::string Vector3::ToString()
{
	 std::string output = "( x : " + std::to_string(x) + ", y : " + std::to_string(y) + ", z :" + std::to_string(z) + ")";
	 return output;
}