#include "Task 2.h";
using namespace std;

    void Faculty:: print() {
        cout << "class Faculty \n";
    }

    void Administrator::print() {
        cout << "class Administrator \n";
    }

    void Teacher::print() {
        cout << "class Teacher \n";
    }

    void AdministratorTeacher::print() {
        cout << "class AdministratorTeacher \n";
    }

//driver code
int main()
{
    Faculty* f1[3] = {
        new Teacher(),new Administrator(),new AdministratorTeacher()
    };
    for(int i=0;i<3;i++){
        f1[i]->print();
    }

    return 0;
}