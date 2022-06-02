#include <iostream>
#include <list>
#include <algorithm>
#include"Journal.h"

/*Performance methods*/
Performance::Performance(int st_id, int subj_id, std::string date, std::string Description)
{
	this->Std_id = st_id; this->Subj_id = subj_id; this->date = date; this->Description = Description;
}

int Performance::getStd_id()
{
	return this->Std_id;
}

void Performance::setStd_id(int Std_id)
{
	this->Std_id = Std_id;
}

int Performance::getSubj_id()
{
	return this->Subj_id;
}

void Performance::setSubj_id(int Subj_id)
{
	this->Subj_id = Subj_id;
}

std::string Performance::getDate()
{
	return this->date;
}

void Performance::setDate(std::string date)
{
	this->date = date;
}

std::string Performance::getDescription()
{
	return this->Description;
}

void Performance::setDescription(std::string Description)
{
	this->Description = Description;
}

/*Mark methods*/
Mark::Mark(int st_id, int subj_id, std::string date, std::string Description, float mark) :Performance(st_id, subj_id, date, Description)
{
	this->mark = mark;
}

float Mark::getMark()
{
	return this->mark;
}

void Mark::setMark(float mark)
{
	this->mark = mark;
}

/*Attendance methods*/
Attendance::Attendance(int st_id, int subj_id, std::string date, std::string Description, float attend) :Performance(st_id, subj_id, date, Description)
{
	this->att = attend;
}

float Attendance::getAtt()
{
	return this->att;
}

void Attendance::setAtt(float att)
{
	this->att = att;
}

/*Journal methods*/

Mark_Journal::Mark_Journal(){}

Mark_Journal::Mark_Journal(std::list <Mark> j)
{
	this->journal = j;
}

std::list<Mark> Mark_Journal::find_in_journal(int st_id, int subj_id)
{
	std::list<Mark> result;
	auto it = journal.begin();
	while (it != journal.end())
	{
		it = std::find(it, journal.end(), subj_id);
		if ((*it).getStd_id() == st_id) result.push_back(*it);
	}
	return result;
}

void Mark_Journal::add_to_journal(Mark p)
{
	this->journal.push_back(p);
}

bool operator ==(Mark& Perf, const int subj_id) {
	return (Perf).getSubj_id() == subj_id;
}//overload for comparing performance class by subject id

Att_Journal::Att_Journal(){}

Att_Journal::Att_Journal(std::list <Attendance> j)
{
	this->journal = j;
}

std::list<Attendance> Att_Journal::find_in_journal(int st_id, int subj_id)
{
	std::list<Attendance> result;
	auto it = journal.begin();
	while (it != journal.end())
	{
		it = std::find(it, journal.end(), subj_id);
		if ((*it).getStd_id() == st_id) result.push_back(*it);
	}
	return result;
}

void Att_Journal::add_to_journal(Attendance a)
{
	this->journal.push_back(a);
}

bool operator ==(Attendance& Perf, const int subj_id) {
	return (Perf).getSubj_id() == subj_id;
}//overload for comparing performance class by subject id