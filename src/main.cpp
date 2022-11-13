#include <iostream>
#include "mainHeader.h"
using namespace std;

int Student::getAge(){
	return this->age;
}


int main(){
	Student s;
	cout<<s.getAge()<<endl;

}