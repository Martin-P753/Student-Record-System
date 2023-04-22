#include <iostream>
#include "LinkedList.h"

int main(int argc, char** argv){

    Student student = {"Martin", "Palacios", 1, "CompSci", 2.99};
    std::cout << student.get_first_name() << " " << student.get_last_name()
    << student.get_major() << " " << student.get_ID() << " " << student.get_gpa() << std::endl;

    return 0;
}