#include <iostream>
#include <string>
using namespace std;

class SalaryEmployee {
private:
int bonus;
string name;
int age;
string job;
double salary;
int rank;

public:
SalaryEmployee() {
bonus = 0;
name = "None";
age = 0;
job = "None";
salary = 0;
rank = 0;
}

SalaryEmployee(int b, string n, int a, string j, double s, int r) {
    bonus = b;
    name = n;
    age = a;
    job = j;
    salary = s;
    rank = r;
}

void display() {
    cout << "Bonus: " << bonus << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Job: " << job << endl;
    cout << "Salary: " << salary << endl;
    cout << "Rank: " << rank << endl;
}

};

class HourlyEmployee : public SalaryEmployee {
private:
double workingRate;
int workingHours;

public:
HourlyEmployee() : SalaryEmployee() {
workingRate = 0;
workingHours = 0;
}

HourlyEmployee(int b, string n, int a, string j, double s, int r,
               double rate, int hours)
    : SalaryEmployee(b, n, a, j, s, r) {
    workingRate = rate;
    workingHours = hours;
}

void displayHourlyInfo() {
    display();
    cout << "Working Rate: " << workingRate << endl;
    cout << "Working Hours: " << workingHours << endl;
}

};

int main() {
HourlyEmployee employee(
500,
"Mariam",
20,
"Programmer",
8000,
1,
100,
160
);

employee.displayHourlyInfo();

return 0;
}
