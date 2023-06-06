#include <iostream>
using namespace std;

struct HourlyPaidWorker {
  int hoursWorked;
  double hourlyRate;
};

struct SalariedWorker {
  double salary;
  double bonus;
};

union Worker {
  HourlyPaidWorker hourlyWorker;
  SalariedWorker salariedWorker;
};

int main() {
  Worker worker;
  cout << "Are you calculating pay for an hourly paid worker or a salaried worker? (Enter 'hourly' or 'salaried'): ";
  string workerType;
  cin >> workerType;
if (workerType == "hourly") {
    cout << "Enter number of hours worked: ";
    cin >> worker.hourlyWorker.hoursWorked;
    
    while (worker.hourlyWorker.hoursWorked < 0 || worker.hourlyWorker.hoursWorked > 80) {
      cout << "Invalid input. Enter a number between 0 and 80: ";
      cin >> worker.hourlyWorker.hoursWorked;
    }

    cout << "Enter hourly rate: ";
    cin >> worker.hourlyWorker.hourlyRate;
    
    while (worker.hourlyWorker.hourlyRate < 0) {
      cout << "Invalid input. Enter a positive number: ";
      cin >> worker.hourlyWorker.hourlyRate;
    }

    double pay = worker.hourlyWorker.hoursWorked * worker.hourlyWorker.hourlyRate;
    cout << "Pay for hourly paid worker: $" << pay << endl;
  }
  else if (workerType == "salaried") {
    cout << "Enter salary: ";
    cin >> worker.salariedWorker.salary;
    while (worker.salariedWorker.salary < 0) {
      cout << "Invalid input. Enter a positive number: ";
      cin >> worker.salariedWorker.salary;
    }

    cout << "Enter bonus: ";
    cin >> worker.salariedWorker.bonus;
   
    while (worker.salariedWorker.bonus < 0) {
      cout << "Invalid input. Enter a positive number: ";
      cin >> worker.salariedWorker.bonus;
    }
}
}

