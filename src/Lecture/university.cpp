#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string first_name, last_name;

    //initialize the class

};
class University{
private:
    int capacity;
    string name;
    void enroll(int x);
    
public:
    void defineCapacity(int c){
        capacity = c;
    }
    void University::enroll(int x);
};

int main(){
    University uni;
    uni.defineCapacity(5000);
    uni.enroll(500);

    Student s1;

    return 0;
}