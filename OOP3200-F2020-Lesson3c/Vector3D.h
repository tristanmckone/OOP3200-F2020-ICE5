#pragma once
#ifndef __VECTOR3D__
#define __VECTOR3D__
#include <string>


class Vector3D
{
public:
	Vector3D(float x= 0.0f, float y= 0.0f, float z = 0.0f);
	~Vector3D();


	// Mutators
	float setX();
	float setY();
	float setZ();

	// Accessorrs
	float GetX();
	float GetY();
	float GetZ();

	std::string ToString();



private:
	float m_x;
	float m_y;
	float m_z;
};

#endif /* defined (__VECTOR3D__) */