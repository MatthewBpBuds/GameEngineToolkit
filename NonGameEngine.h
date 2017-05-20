#pragma once

struct Transform
{
public:
	Vector3 position, rotation, scale;
};

struct Object 
{
public:
	Object();
	Transform transform;
};

struct Vector3 
{
private:
	float _x;
	float _y;
	float _z;

public:
	float getX() const
	{
		return _x;
	}

	float getY() const
	{
		return _y;
	}

	float getZ() const
	{
		return _z;
	}

	void setX(float __X)
	{
		_x = __X;
	}

	void setY(float __Y)
	{
		_y = __Y;
	}

	void setZ(float __Z)
	{
		_z = __Z;
	}

	Vector3(const float& x, const float& y, const float& z)
	{
		setX(x);
		setY(y);
		setZ(z);
	}
};

inline Vector3 operator*(const Vector3& left, const Vector3& right)
{
	return Vector3(left.getX() * right.getX(), left.getY() * right.getY(), left.getZ() * right.getZ());
}

inline Vector3 operator+(const Vector3& left, const Vector3& right)
{
	return Vector3(left.getX() + right.getX(), left.getY() + right.getY(), left.getZ() + right.getZ());
}

inline Vector3 operator-(const Vector3& left, const Vector3& right)
{
	return Vector3(left.getX() - right.getX(), left.getY() - right.getY(), left.getZ() - right.getZ());
}

inline Vector3 operator/(const Vector3& left, const Vector3& right)
{
	return Vector3(left.getX() / right.getX(), left.getY() / right.getY(), left.getZ() / right.getZ());
}
