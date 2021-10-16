#include "Vector3D.h"

Vector3D::Vector3D(const float x, const float y, const float z): m_x(x), m_y(y), m_z(z)
{
}

Vector3D::~Vector3D()
= default;

float Vector3D::setX() const
{
	return m_x;
}

float Vector3D::setY() const
{
	return m_y;
}

float Vector3D::setZ() const
{
	return m_z;
}

void Vector3D::set(const float x, const float y, const float z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

float Vector3D::GetX(const float x)
{
	m_x = x;
}

float Vector3D::GetY(const float y)
{
	m_y = y;
}

float Vector3D::GetZ(const float z)
{
	m_z = z;
}

std::string Vector3D::ToString() const
{
	

	 return "(" + std::to_string(m_x) + ", " + std::to_string(m_y) + " , " + std::to_string(m_z) + ")";
	
}
