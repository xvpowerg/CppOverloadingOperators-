#ifndef STUDENT_H
#define STUDENT_H
#include<string>
class Student
{
    private:
    int* age;
    std::string* name;    
    public:
    Student();
    ~Student();
    Student(const Student& st);
    Student(Student&& st) noexcept;
    Student& operator =( Student&& st);
    Student(int age,std::string name);
    Student& operator=(const Student& st);
    int getAge() const;
    std::string  getName() const;
    void setAge(int age);
    void setName(std::string name);
    void display();
};

#endif // STUDENT_H
