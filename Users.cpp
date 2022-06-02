#include <iostream>
#include "Users.h"
#include <algorithm>
#include "Dormitory.h"

/*Scheduler methods*/
Scheduler::Scheduler(std::string f)
{
	this->Faculty = f;
}

std::string Scheduler::getFaculty()
{
	return this->Faculty;
}

/*Human methods*/
Human::Human(int id, std::string SNP, std::list<int> Subj_id)
{
	this->id = id; this->SNP = SNP;
	this->Subjects_id = Subj_id;
}

int Human::get_id()
{
	return this->id;
}

std::string Human::getSNP()
{
	return this->SNP;
}

std::list<int> Human::getSubjects_id()
{
	return this->Subjects_id;
}

void Human::setSNP(std::string new_SNP)
{
	this->SNP = new_SNP;
}

void Human::add_Subject(int id)
{
	Subjects_id.push_back(id);
}

void Human::set_Subjects(std::list <int> subj_l)
{
	Subjects_id = subj_l;
}

/*Teacher methods*/
Teacher::Teacher(int id, std::string SNP, std::list <int> subjects, std::list <std::string> Groups) :Human(id, SNP, subjects)
{
	this->Groups = Groups;
}

std::list<std::string> Teacher::GetGroups() 
{
	return this->Groups;
}

void Teacher::AddGroup(std::string group_to_add)
{
	this->Groups.push_back(group_to_add);
}

void Teacher::SetGroups(std::list<std::string> list_of_groups)
{
	this->Groups = list_of_groups;
}

void Teacher::RemoveGroup(std::string group_to_remove)
{
	std::list<std::string>::iterator it = find(Groups.begin(), Groups.end(), group_to_remove);
	Groups.erase(it);
}

/*Student methods*/
Student::Student(int id,std::string SNP,std::list<int> subj,std::string group,bool nonresident,bool gender):Human(id,SNP,subj)
{
	this->group = group; this->nonresident = nonresident; this->gender = gender;
}

std::string Student::getGroup()
{
	return this->group;
}

void Student::setGroup(std::string group)
{
	this->group = group;
}

bool Student::isNonresident()
{
	return this->nonresident;
}

void Student::setNonresident(bool nonresident)
{
	this->nonresident = nonresident;
}

bool Student::getGender()
{
	return this->gender;
}

void Student::setGender(bool gender)
{
	this->gender = gender;
}

bool Student::getDormitory_payment()
{
	return this->dormitory_payment;
}

void Student::setDormitory_payment(bool* dormitory_payment)
{
	this->dormitory_payment = dormitory_payment;
}

bool Student::Search_for_Dormitory_free_places(Dormitory d)
{
	bool is = false;
	switch (gender) {
		case true:
		{
			if (d.how_many_f_free_places() > 0) is = true;
			break;
		}
		case false:
		{
			if (d.how_many_m_free_places() > 0) is = true;
			break;
		}
	}
		return is;
}