
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

class Student{
    private:
     int age;
     int id;

    public:
     int getAge();
     int getID();
};

void setAge(Student s, int age);
#endif