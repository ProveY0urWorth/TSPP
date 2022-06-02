#pragma once

#include <iostream>
#include <list>
#include "Dormitory.h"

class Scheduler
{
	std::string Faculty;
public:
	Scheduler(std::string f);
	std::string getFaculty();
};

class Human
{
	int id;
	std::string SNP;//Surname,Name Patronim
	std::list<int> Subjects_id;
public:
	Human(int id, std::string SNP, std::list<int> Subj_id);

	int get_id();

	std::string getSNP();

	std::list<int> getSubjects_id();

	void setSNP(std::string new_SNP);

	void add_Subject(int id);

	void set_Subjects(std::list <int> subj_l);
};

class Teacher:public Human
{
	std::list <std::string> Groups;
public:
	Teacher(int id,std::string SNP,std::list <int> subjects,std::list <std::string> Groups);
	std::list<std::string> GetGroups();
	void AddGroup(std::string group_to_add);
	void SetGroups(std::list<std::string> list_of_groups);
	void RemoveGroup(std::string group_to_remove);
};

class Student :public Human
{
	std::string group;
	bool nonresident,
		gender,
		*dormitory_payment;

public:
	Student(int id, std::string SNP, std::list<int> subj, std::string group, bool nonresident, bool gender);

	std::string getGroup();

	void setGroup(std::string group);

	bool isNonresident();

	void setNonresident(bool nonresident);

	bool getGender();

	void setGender(bool gender);
	
	bool getDormitory_payment();

	void setDormitory_payment(bool* dormitory_payment);

	bool Search_for_Dormitory_free_places(Dormitory d);
};