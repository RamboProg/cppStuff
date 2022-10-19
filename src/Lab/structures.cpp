#include <iostream>
#include <cstdlib>
using namespace std;

class c{
    //attribiutes
    //constructor
    //methods
};

struct cStruct{
    //attribiutes
    //methods
};

struct student{
    int age;
    int id;

    student* creatH(int age, int id){
        student* s = (student*)malloc(sizeof(student));
        (*s).age = age;
        s -> id = id;
        return s;
    }

    student creatS(int age, int id){
        student s;
        s.age = age;
        s.id = id;
        return s;
    }


};

int main(){
    

    return 0;
}
