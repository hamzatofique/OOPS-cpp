#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

using namespace std;
class Person {
private:
	int age;
	char* name;
public:
	Person() :age(0), name(nullptr) {
		cout << "DEAFULT CONSTRUCTOR"<< endl;
	}
	Person(const int& age, const char* name) : age(age) {
		cout << "Person created with age: " << age << endl;
		name = new char[strlen(name) + 1];
		strcpy(this->name,name);
	}
	Person( const Person& other) : age(other.age),name(nullptr) {
		cout << "COPY CONSTRUCTOR CALLED" << endl;
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
	}
	int getAge() const {
		return age;
	}
	~Person() {
		cout << "DESTRUCTOR CALLED" << endl;
		delete[] name;
	}

};
int main() {
	Person* p2_ptr = new Person[3]{Person(),Person(),Person(20,"hamza")};// 3 objects created and must be initialied with default ctor
	for(int i=0; i < 3; i++) {
		cout << p2_ptr[i].getAge() << endl;
	}
	delete[] p2_ptr;
	
	Person p1(25, "Ali");
	Person p2 = p1; // copy constructor called
	Person* p1_ptr = &p2;       // store p1's address

	cout << p1.getAge();   // normal object
	cout << (*p1_ptr).getAge(); // dereference first, then use dot
	cout << p1_ptr->getAge();
    cout << (*p1_ptr).getAge();         // object 1
cout << (*(p1_ptr + 1)).getAge();   // object 2

}