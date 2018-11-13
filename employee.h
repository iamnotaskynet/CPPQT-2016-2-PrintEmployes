#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class iostream;
class string;
#include <iostream>
#include <string>
using namespace std;

class Employee : public Printable 
{	
	private:
		string mFirsName;
		string mPhoneNumber;
		string mHomeAddress;
		int mSalaryDollars;
		int mYearStarts;

	public:
		Employee();
		~Employee();
		Employee(string name, string phone, string address, int salary, int years);
		
		void print() const;
		//virtual void print();
};
#endif // EMPLOYEE_H