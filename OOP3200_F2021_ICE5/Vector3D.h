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

template <class T>
class Vector3D
{
public:
	Vector3D(T x = static_cast<T>(0.0), T y = static_cast<T>(0.0), T z = static_cast<T>(0.0));
	~Vector3D();

	// Accessors - setters
	T GetX() const;
	T GetY() const;
	T GetZ() const;


	// Mutators - getters
	void setX(const T x);
	void setY(const T y);
	void setZ(const T z);
	void set(const T x, const T y, const T z);

	std::string ToString() const; // standard template library object string

private:
	T m_x;
	T m_y;
	T m_z;
};


#endif /* defined (__VECTOR3D__) */

