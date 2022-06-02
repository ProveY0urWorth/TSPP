#include <iostream>
#include <list>
#include <algorithm>
#include "Schedule.h"

Schedule_section::Schedule_section(std::string day, std::string subj_name, std::string time, int teacher,std::string room, std::string type, int week, std::string groups)
{
	this->Subj_name = subj_name;
	this->day = day; this->time = time; this->teacher = teacher;
	this->room = room; this->type = type; this->week = week; this->groups = groups;
}

std::string Schedule_section::getSubj_name()
{
	return this->Subj_name;
}

void Schedule_section::setSubj_name(std::string s)
{
	this->Subj_name = s;
}

std::string Schedule_section::getDay()
{
	return this->day;
}

void Schedule_section::setDay(std::string day)
{
	this->day = day;
}

std::string Schedule_section::getTime()
{
	return this->time;
}

void Schedule_section::setTime(std::string time)
{
	this->time = time;
}

int Schedule_section::getTeacher()
{
	return this->teacher;
}

void Schedule_section::setTeacher(int teacher)
{
	this->teacher = teacher;
}

std::string Schedule_section::getRoom()
{
	return this->room;
}

void Schedule_section::setRoom(std::string room)
{
	this->room = room;
}

std::string Schedule_section::getType()
{
	return this->type;
}

void Schedule_section::setType(std::string type)
{
	this->type = type;
}

int Schedule_section::getWeek()
{
	return this->week;
}

void Schedule_section::setWeek(int week)
{
	this->week = week;
}

std::string Schedule_section::getGroups()
{
	return this->groups;
}

void Schedule_section::setGroups(std::string groups)
{
	this->groups = groups;
}

void Schedule::add_section(Schedule_section s)
{
	Sched.push_back(s);
}

void Schedule::remove_section(Schedule_section s)
{
	Sched.remove(s);
	//auto it = find(Sched.begin(), Sched.end(), s);
	//Sched.erase(it);
}

std::list <Schedule_section> Schedule::show_Schedule()
{
	return this->Sched;
}

std::list <Schedule_section> Schedule::search_Schedule(std::string s)
{
	std::list <Schedule_section> result;
	auto it = Sched.begin();
	while (it != Sched.end())
	{
		it = std::find(it, Sched.end(), s);
		result.push_back(*it);
		it++;
	}
	return result;
}

bool operator ==(Schedule_section& Sc, std::string s) {
	return (Sc).getSubj_name() == s;
}//overload for comparing Schedule section class by string

bool operator ==(const Schedule_section& Sc, const Schedule_section s) {
	return Sc == s;
}//overload for comparing Schedule section