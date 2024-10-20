#include <iostream> 
using namespace std;

class Person { // Parent class, and the other classes are derived
    protected:
    string name, address;
    int age;

    public:
    Person (string Cname, string Caddress, int Cage) : name(Cname), address(Caddress), age(Cage) {}
    void printPerson () {
        cout << "Person Info: Name: " << name << ", Age: " << age << ", Address: " << address << endl;
    }
};
class Student : public Person {
    string id, subject;
    public:
    //                                                                       Declaring a constructor to derived class
    Student (string Cname, string Caddress, int Cage, string Cid, string Csubject) : Person(Cname, Caddress, Cage){ 
        this->id = Cid;
        this->subject = Csubject;
    }
    void printStudent () {
        cout << "Student Info: Student ID: " << id << ", Subject: " << subject << endl;
    }
};
class Teacher : public Person{
    string id, subject;
    public:
    //                                                                       Declaring a constructor to derived class
    Teacher (string Cname, string Caddress, int Cage, string Cid, string Csubject) : Person(Cname, Caddress, Cage){ 
        this->id = Cid;
        this->subject = Csubject;
    }
    void printTeacher () {
        cout << "Teacher Info: Teacher ID: " << id << ", Subject: " << subject << endl;
    }
};
class Staff : public Person {
    string id, Department;
    public:
    //                                                                       Declaring a constructor to derived class
    Staff (string Cname, string Caddress, int Cage, string Cid, string Csubject) : Person(Cname, Caddress, Cage){ 
        this->id = Cid;
        this->Department = Csubject;
    }
    void printStaff () {
        cout << "Staff Info: Staff ID: " << id << ", Department: " << Department << endl;
    }
};

int main () {
	
    Student student("John", "123 Main St", 20, "2023001", "Computer Science");
    student.printPerson();
    student.printStudent();

    cout << endl;

    Teacher teacher ("Alice", " 45 Elm St", 45, "T1001", "Mathematics");
    teacher.printPerson();
    teacher.printTeacher ();

    cout << endl;
    Staff staff ("Mark", "56 Oak St", 38, "S2001", "HR");
    staff.printPerson();
    staff.printStaff();
    
    return 0;
}
