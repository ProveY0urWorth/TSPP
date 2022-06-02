#pragma once
#include <iostream>
#include <list>

class Performance
{
	int Std_id;
	int Subj_id;
	std::string date;
	std::string Description;

public:

	Performance(int st_id, int subj_id, std::string date, std::string Description);

	int getStd_id();

	void setStd_id(int Std_id);

	int getSubj_id();

	void setSubj_id(int Subj_id);

	std::string getDate();

	void setDate(std::string date);

	std::string getDescription();

	void setDescription(std::string Description);
};

class Mark: public Performance
{
	float mark;

public:

	Mark(int st_id, int subj_id, std::string date, std::string Description, float mark);

	float getMark();

	void setMark(float mark);
};

class Attendance:public Performance
{
	float att;

public:
	Attendance(int st_id, int subj_id, std::string date, std::string Description, float attend);

	float getAtt();

	void setAtt(float att);
};

class Mark_Journal
{
	std::list <Mark> journal;
public:
	Mark_Journal();

	Mark_Journal(std::list <Mark> j);

	std::list<Mark> find_in_journal(int st_id, int subj_id);

	void add_to_journal(Mark p);
};

bool operator ==(Mark& Perf, const int subj_id);

class Att_Journal
{
	std::list <Attendance> journal;
public:
	Att_Journal();

	Att_Journal(std::list <Attendance> j);

	std::list<Attendance> find_in_journal(int st_id, int subj_id);

	void add_to_journal(Attendance a);
};

bool operator ==(Attendance& Perf, const int subj_id);