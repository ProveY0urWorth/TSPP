#include "Dormitory.h"
Dormitory::Dormitory(int m, int f)
{
	this->male_places = m;
	this->female_places = f;
}

void Dormitory::add_m_student()
{
	this->taken_m_places++;
}

void Dormitory::add_f_student()
{
	this->taken_f_places++;
}

int Dormitory::how_many_m_free_places()
{
	int free_m = this->male_places - this->taken_m_places;
	return free_m;
}

int Dormitory::how_many_f_free_places()
{
	int free_f = this->female_places - this->taken_f_places;
	return free_f;
}