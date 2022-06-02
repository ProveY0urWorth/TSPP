#pragma once
#include <iostream>
#include <list>
#include "Journal.h"

class Subject
{
	int id;
	std::string name;
	Att_Journal attendance;
	Mark_Journal marks;
	bool has_labs;
	bool has_rgr;
	bool has_course_work;
	bool *complete_labs;
	bool *complete_rgr;
	bool complete_course_work;

public:

	Subject(int id, std::string name, Att_Journal a, Mark_Journal m, bool has_l, bool has_r, bool has_c_w);

	int getId();

	void setId(int id);

	std::string getName();

	void setName(std::string name);

	Att_Journal getAttendance();

	void setAttendance(Att_Journal attendance);

	Mark_Journal getMarks();

	void setMarks(Mark_Journal marks);

	bool isHas_labs();

	void setHas_labs(bool has_labs);

	bool isHas_rgr();

	void setHas_rgr(bool has_rgr);

	bool isHas_course_work();

	void setHas_course_work(bool has_course_work);

	bool* isComplete_labs();

	void setComplete_labs(bool* complete_labs);

	bool* isComplete_rgr();

	void setComplete_rgr(bool* complete_rgr);

	bool isComplete_course_work();

	void setComplete_course_work(bool complete_course_work);

	float count_av_mark(int st_id);

	float count_av_att(int st_id);
};