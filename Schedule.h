#pragma once
#include <iostream>
#include <list>

class Schedule_section
{

	std::string day;
	std::string time;
	std::string Subj_name;
	int teacher;
	std::string room;
	std::string type;
	int week;
	std::string groups;

public:

	Schedule_section(std::string day,std::string subj_name, std::string time, int teacher,std::string room, std::string type, int week, std::string groups);
	
	std::string getSubj_name();

	void setSubj_name(std::string s);

	std::string getDay();

	void setDay(std::string day);

	std::string getTime();

	void setTime(std::string time);

	int getTeacher();

	void setTeacher(int teacher);

	std::string getRoom();

	void setRoom(std::string room);

	std::string getType();

	void setType(std::string type);

	int getWeek();

	void setWeek(int week);

	std::string getGroups();

	void setGroups(std::string groups);
};

class Schedule
{
	std::list<Schedule_section> Sched;

public:
	Schedule();

	void add_section(Schedule_section s);

	void remove_section(Schedule_section s);
	
	std::list <Schedule_section> show_Schedule();

	std::list <Schedule_section> search_Schedule(std::string s);
};

bool operator ==(Schedule_section& Sc, std::string s);

bool operator ==(const Schedule_section& Sc, const Schedule_section s);