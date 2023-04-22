#include "student.h"

class LLNode
{
public:
    LLNode(const Student& student);
    
    const Student& get_student() const;
    LLNode* get_next() const;
    void set_next(LLNode* next);

    ~LLNode();

    LLNode* next_;
    Student student_;
};

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();

    void insert_LLNode(const Student& student);
    void delete_LLNode(const Student& student);
    void print_list()const;

protected:
    LLNode* head_;
};