#include <string>

class Student
{

public:
    // Constructor and Destructor
    Student(std::string first_name, std::string last_name, int student_ID, std::string major, float GPA);
    ~Student();

    // Getters
    std::string get_first_name() const;
    std::string get_last_name() const;
    int get_ID() const;
    std::string get_major() const;
    float get_gpa() const;

protected:

    std::string first_name_;
    std::string last_name_;
    int student_ID_;
    std::string major_;
    float GPA_;
};