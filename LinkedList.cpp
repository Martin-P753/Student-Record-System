#include "LinkedList.h"

LLNode::LLNode(const Student& student)
:student_(student), next_(nullptr){}

LLNode::~LLNode(){}

const Student& LLNode::get_student()const
{
    return student_;
}

LLNode* LLNode::get_next()
{
    return next_;
}

void LLNode::set_next(LLNode* next)
{
    next_ = next;
}

LinkedList::LinkedList() : head_(nullptr){}

LinkedList::~LinkedList()
{
    LLNode* current = head_;
    while(current != nullptr)
    {
        LLNode* next = current->get_next();
        delete current;
        current = next;
    }
}

void LinkedList::insert_LLNode(const Student& student)
{
    LLNode* newNode = new LLNode(student);
    if(head_ == nullptr)
    {
        head_ = newNode;
    }else
    {
        LLNode* = current = head_;
        while(current->get_next() != nullptr)
        {
            current = current->get_next();
        }
        current->set_next(newNode);
    }
}

void LinkedList::delete_LLNode(const Student& student)
{
    LLNode* current = head_;
    LLNode* previous = nullptr;

    while(current != nullptr && current->get_student_ID() != student.get_student_ID())
    {
        previous = current;
        current = current->get_next();

        if(current == nullptr)
        {
            std::cout << "Node with student not found." << std::endl;
            return;
        }

        if(current == head_)
        {
            head_ = current->get_next();
        }else
        {
            previous->set_next(current->get_next());
        }

        delete current;
    }
}

void LinkedList::print_list()const
{
    LLNode* current = head_;
    while(current != nullptr)
    {
        const Student& student = current->get_student();
        std::cout << "Name: " << student.get_first_name() << " " << student.get_last_name()
        << "\nStudent ID:" << student.get_student_ID() << std::endl;

        current = current->get_next();
    }
}