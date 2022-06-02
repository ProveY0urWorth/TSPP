#pragma once

class Dormitory
{
	int male_places;
	int female_places;
	int taken_m_places;
	int taken_f_places;

public:
	Dormitory(int m, int f);

	void add_m_student();

	void add_f_student();

	int how_many_m_free_places();

	int how_many_f_free_places();
};