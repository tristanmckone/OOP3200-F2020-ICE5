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
	float setX() const;
	float setY() const;
	float setZ() const;
	void set(const float x, const float y, const float z);

	// Accessorrs
	float GetX(const float x);
	float GetY(const float y);
	float GetZ(const float z);

	std::string ToString() const;



private:
	float m_x;
	float m_y;
	float m_z;
};

#endif /* defined (__VECTOR3D__) */