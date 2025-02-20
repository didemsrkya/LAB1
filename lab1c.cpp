#include <iostream>
using namespace std;

int main() {
    //Question 1
    string name1;
    string studentID;

    cout << "What is your name?\n";
    cin >> name1;
    cout << "Hello " << name1 << ".\n";

    cout << "What is your Student ID?\n";
    cin >> studentID;
    cout << "Your ID is " << studentID << ".\n";



    //Question 2
    double var1, var2, sum, diff, prod;

    cout << "Enter first number: ";
    cin >> var1;
    cout << "Enter second number: ";
    cin >> var2;

    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;

    cout << "var1: " << var1 << ", var2: " << var2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;


    //Question 3
    string name2;
    double lab, midterm, final, lastScore;

    cout << "Enter student's name: ";
    cin >> name2;
    cout << "Enter Lab grade: ";
    cin >> lab;
    cout << "Enter Midterm grade: ";
    cin >> midterm;
    cout << "Enter Final grade: ";
    cin >> final;

    lastScore = (lab * 0.25) + (midterm * 0.35) + (final * 0.40);

    cout << "Name: " << name2 << endl;
    cout << "Lab: " << lab << endl;
    cout << "Midterm: " << midterm << endl;
    cout << "Final: " << final << endl;
    cout << "Last Score: " << lastScore << endl;

    //Question 4
    cout << "*\n**\n***\n**\n*";

}
