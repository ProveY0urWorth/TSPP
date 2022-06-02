#include<iostream>
#include <list>
#include <algorithm>
#include "Journal.h"
#include "Subject.h"

Subject::Subject(int id, std::string name, Att_Journal a, Mark_Journal m, bool has_l, bool has_r, bool has_c_w)
{
	this->id = id; this->name = name; this->attendance = a;
	this->marks = m; this->has_labs = has_l; this->has_rgr = has_r; this->has_course_work = has_c_w;
}

int Subject::getId()
{
	return this->id;
}

void Subject::setId(int id)
{
	this->id = id;
}

std::string Subject::getName()
{
	return this->name;
}

void Subject::setName(std::string name)
{
	this->name = name;
}

Att_Journal Subject::getAttendance()
{
	return this->attendance;
}

void Subject::setAttendance(Att_Journal attendance)
{
	this->attendance = attendance;
}

Mark_Journal Subject::getMarks()
{
	return this->marks;
}

void Subject::setMarks(Mark_Journal marks)
{
	this->marks = marks;
}

bool Subject::isHas_labs()
{
	return this->has_labs;
}

void Subject::setHas_labs(bool has_labs)
{
	this->has_labs = has_labs;
}

bool Subject::isHas_rgr()
{
	return this->has_rgr;
}

void Subject::setHas_rgr(bool has_rgr)
{
	this->has_rgr = has_rgr;
}

bool Subject::isHas_course_work()
{
	return this->has_course_work;
}

void Subject::setHas_course_work(bool has_course_work)
{
	this->has_course_work = has_course_work;
}

bool* Subject::isComplete_labs()
{
	return this->complete_labs;
}

void Subject::setComplete_labs(bool* complete_labs)
{
	this->complete_labs = complete_labs;
}

bool* Subject::isComplete_rgr()
{
	return this->complete_rgr;
}

void Subject::setComplete_rgr(bool* complete_rgr)
{
	this->complete_rgr = complete_rgr;
}

bool Subject::isComplete_course_work()
{
	return this->complete_course_work;
}

void Subject::setComplete_course_work(bool complete_course_work)
{
	this->complete_course_work = complete_course_work;
}

float Subject::count_av_mark(int st_id)
{
	auto res = marks.find_in_journal(st_id, this->id);
	int count = 0;
	float mark = 0;
	auto it = res.begin();
	while (it != res.end())
	{
		mark += (*it).getMark();
		count++;
		it++;
	}
	return (mark / count);
}

float Subject::count_av_att(int st_id)
{
	auto res = attendance.find_in_journal(st_id, this->id);
	int count = 0;
	float Att = 0;
	auto it = res.begin();
	while (it != res.end())
	{
		Att += (*it).getAtt();
		count++;
		it++;
	}
	return (Att / count);
}