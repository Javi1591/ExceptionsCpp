// Nazario, Xavier
// November 13, 2025 ©
// Chapter 16 Programming Assignment
// References:
//  Gaddis, Tony. Starting Out with C++ from
//	 Control Structures Through Objects. (10th Edition). Pearson Education (US), 2022.


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Base class Employee
class Employee
{
private:
	string employeeName;
	int employeeNumber;
	string hireDate;

	// Member function to validate employee number
	void checkEmployeeNumber()
	{
		if (employeeNumber < 0 || employeeNumber > 9999)
		{
			throw InvalidEmployeeNumberException();
		}
	}

public:

	// Exception class
	class InvalidEmployeeNumberException
	{
	};

	// Constructor
	Employee(string name, int number, string hDate)
	{
		employeeName = name;
		employeeNumber = number;
		hireDate = hDate;

		// Check the employee number
		checkEmployeeNumber();
	}

	// Mutators
	void setEmployeeName(string name) { employeeName = name; }

	void setEmployeeNumber(int number)
	{
		employeeNumber = number;
		checkEmployeeNumber();
	}

	void setHireDate(string hDate) { hireDate = hDate; }

	// Accessors
	string getEmployeeName() { return employeeName; }
	int getEmployeeNumber() { return employeeNumber; }
	string getHireDate() { return hireDate; }
};

// Derived class ProductionWorker from Employee
class ProductionWorker : public Employee
{
private:
	int shift;
	double hourlyPayRate;

	// Member function to validate shift
	void checkShift()
	{
		if (shift < 1 || shift > 2)
		{
			throw InvalidShift();
		}
	}

	// Member function to validate pay rate
	void checkPayRate()
	{
		if (hourlyPayRate < 0)
		{
			throw InvalidPayRate();
		}
	}

public:

	// Exception classes
	class InvalidShift
	{
	};

	class InvalidPayRate
	{
	};

	// Constructor
	ProductionWorker(string name, int number, string hDate, int shiftNum, double payRate)
		: Employee(name, number, hDate)
	{
		shift = shiftNum;
		hourlyPayRate = payRate;

		// Check shift and pay rate
		checkShift();
		checkPayRate();
	}

	// Mutators
	void setShift(int shiftNum)
	{
		shift = shiftNum;
		checkShift();
	}

	void setHourlyPayRate(double payRate)
	{
		hourlyPayRate = payRate;
		checkPayRate();
	}

	// Accessors
	int getShift() { return shift; }
	double getHourlyPayRate() { return hourlyPayRate; }
};

// Function Prototype
void testValues(string, int, string, int, double);

// Main function starts here
int main()
{
	// Test Cases
	// Good Data Test
	cout << "Testing good data...\n";
	testValues("John Doe", 1234, "12/01/2009", 1, 22.50);

	// Bad employee number test
	cout << "\nTesting bad employee number...\n";
	testValues("John Doe", -99, "12/01/2009", 1, 22.50);

	// Bad shift test
	cout << "\nTesting bad shift...\n";
	testValues("John Doe", 1234, "12/01/2009", 5, 22.50);

	// Bad pay rate test
	cout << "\nTesting bad pay rate...\n";
	testValues("John Doe", 1234, "12/01/2009", 1, -100.00);

	return 0;
}

// Function to test values and handle exceptions
void testValues(string name, int number, string hDate, int shift, double payRate)
{
	// Test InvalidEmployeeNumber exception
	try
	{
		// Create ProductionWorker object withinvalid number
		ProductionWorker worker(name, number, hDate, shift, payRate);

		// Report good data
		cout << "Good Data\n";
	}
	catch (Employee::InvalidEmployeeNumberException)
	{
		cout << "Error: Invalid employee number. It must be between 0 and 9999.\n";
	}
	catch (ProductionWorker::InvalidShift)
	{
		cout << "Error: Invalid shift. It must be 1 (day) or 2 (night).\n";
	}
	catch (ProductionWorker::InvalidPayRate)
	{
		cout << "Error: Invalid pay rate. It must be a non-negative value.\n";
	}
}