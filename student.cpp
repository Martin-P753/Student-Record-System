#include "student.h"

Student::Student(std::string first_name, std::string last_name, int student_ID, std::string major, float GPA) 
: first_name_(first_name), last_name_(last_name), student_ID_(student_ID), major_(major), GPA_(GPA){}

Student::~Student(){}

std::string Student::get_first_name()const
{
    return first_name_;
}

std::string Student::get_last_name()const
{
    return last_name_;
}

int Student::get_ID()const
{
    return student_ID_;
}

std::string Student::get_major()const
{
    return major_;
}

float Student::get_gpa()const
{
    return GPA_;
}