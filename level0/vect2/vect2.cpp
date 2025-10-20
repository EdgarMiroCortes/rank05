#include "vect2.hpp"

vect2::vect2()
{
	this->x = 0;
	this->y = 0;
}

vect2::vect2(int num1, int num2)
{
	this->x = num1;
	this->y = num2;
}

vect2::vect2(const vect2& source) : x(source.x), y(source.y){}

vect2& vect2::operator=(const vect2& source)
{
	if(this != &source)
	{
		this->x = source.x;
		this->y = source.y;
	}
	return(*this);
}

int vect2::operator[](int index) const
{
	if(index == 0)
		return(this->x);
	return(this->y);
}

int& vect2::operator[](int index)
{
	if(index == 0)
		return(this->x);
	return(this->y);
}

vect2 vect2::operator-() const
{
	return vect2(-x, -y);
}


vect2 vect2::operator*(int num) const
{
	return vect2(x * num, y * num);
}

vect2& vect2::operator*=(int num)
{
	this->x *= num;
	this->y *= num;
	return(*this);
}

vect2& vect2::operator+=(const vect2& obj)
{
	this->x += obj.x;
	this->y += obj.y;
	return(*this);
}

vect2& vect2::operator-=(const vect2& obj)
{
	this->x -= obj.x;
	this->y -= obj.y;
	return(*this);
}

vect2& vect2::operator*=(const vect2& obj)
{
	this->x *= obj.x;
	this->y *= obj.y;
	return(*this);
}

vect2 vect2::operator+(const vect2& obj) const
{
	return vect2(x + obj.x, y + obj.y);
}

vect2 vect2::operator-(const vect2& obj) const
{
	return vect2(x - obj.x, y - obj.y);
}

vect2 vect2::operator*(const vect2& obj) const
{
	return vect2(x * obj.x, y * obj.y);
}

vect2& vect2::operator++()
{
	this->x += 1;
	this->y += 1;
	return(*this);
}

vect2 vect2::operator++(int)
{
	vect2 temp = *this;

	++(*this);
	return(temp);
}

vect2& vect2::operator--()
{
	this->x -= 1;
	this->y -= 1;
	return(*this);
}

vect2 vect2::operator--(int)
{
	vect2 temp = *this;

	--(*this);
	return(temp);
}

bool vect2::operator==(const vect2& obj) const
{
	if((this->x == obj.x) && (this->y == obj.y))
		return(true);
	return(false);
}

bool vect2::operator!=(const vect2& obj) const
{
	return !(*this == obj);
}

vect2::~vect2(){}

std::ostream& operator<<(std::ostream& os, const vect2& obj)
{
	os << "{" << obj[0] << ", " << obj[1] << "}";
	return os;
}


vect2 operator*(int num, const vect2& obj)
{
	return obj * num;
}

