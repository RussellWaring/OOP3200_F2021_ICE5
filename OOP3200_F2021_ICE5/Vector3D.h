/*
 * @author		Russell Waring
 * @date		2021-10-17
 * @file		OOP3200_F2021_ICE5
 * @desc		This class represents a three-dimensional vector. Created as part of
 *				the fifth in-class exercise.
 */

#pragma once
#ifndef __VECTOR3D__
#define __VECTOR3D__
#include <string>

class Vector3D
{
public:
	Vector3D(float x = 0.0f, float y = 0.0f, float z = 0.0f);
	~Vector3D();

	// Accessors - setters
	float GetX() const;
	float GetY() const;
	float GetZ() const;


	// Mutators - getters
	void setX(const float x);
	void setY(const float y);
	void setZ(const float z);
	void set(const float x, const float y, const float z);

	std::string ToString() const; // standard template library object string

private:
	float m_x;
	float m_y;
	float m_z;
};


#endif /* defined (__VECTOR3D__) */

