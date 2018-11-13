#include <iostream>
#include <string>

#include "employee.h"
using namespace std;


Employee::Employee()
	: mFirsName{"-1"}, mPhoneNumber{"-1"}, mHomeAddress{"-1"}, mSalaryDollars{-1}, mYearStarts{-1}
{

}
Employee::~Employee(){}

Employee::Employee(std::string name,
					 std::string phone,
					 std::string address,
					 int salary, int years) 
	: mFirsName(name), mPhoneNumber(phone), mHomeAddress(address), mSalaryDollars(salary), mYearStarts(years)
{

}

void Employee::print() const
{
	cout << "Name:\t" << mFirsName <<
				<< ";\tPhone:\t" << mPhoneNumber <<
				<< ";\tAddress:\t" << mHomeAddress <<
				<< ";\tSalary:\t" << mSalaryDollars <<
				<< ";\tYear:\t" << mYearStarts << ";\n";
}
