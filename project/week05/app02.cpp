#include <iostream>
#include <string>
using namespace std;

class Domitory {
public:
	void warn() { cout << "벌점부여" << endl; }
};

class Undergraduated {
public:
	void warn() { cout << "학사경고" << endl; }
};

class DomitoryUndergraduated : public Domitory, public Undergraduated { // Multiple Inheritance

}; 


int main(){
	DomitoryUndergraduated uds;
	//uds.warn(); // ambiguous
	return 0;
}