#include <iostream>
#include <string>
using namespace std;

class Student {
protected :
	string name;
public:
	Student(string name) : name(name) {}
};

class Domitory : virtual public Student {			// virtual inheritance
public:
	Domitory(string name, int roomNum) : Student(name), roomNum(roomNum) {}
	
	int roomNum;
	void warn() {
		cout << "기숙사생 이름 : " << name << endl;
		cout << "기숙사 호실 : " << roomNum << endl;
		cout << "벌점부여" << endl; 
	}
};

class Undergraduated : virtual public Student {		// virtual inheritance
public:
	Undergraduated(string name, int id) : Student(name), id(id) {}

	int id;
	void warn() {
		cout << "학부생 이름 : " << name << endl;
		cout << "학부생 학번 : " << id << endl;
		cout << "학사경고" << endl; 
	}
};

class DUstudent : public Domitory, public Undergraduated { // Multiple Inheritance
public:
	DUstudent(string name, int roomNum, int id) : Student(name), Domitory(name, roomNum), Undergraduated(name, id) {}

	void warn() {
		cout << "학생 정보 : " << roomNum << "호실의 " << id << " 학번 , " << name << "학생" << endl;
		cout << "경고 누적" << endl;
	}
}; 


int main(){
	DUstudent std("DL.Kim",1003,1234);
	std.warn();

	return 0;
}