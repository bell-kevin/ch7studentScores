// ch7studentScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ch7studentScores.h"
using namespace std;
struct Student
{
	string firstName;
	string lastName;
	int studentID{};
	double testScore1{};
	double testScore2{};
	double testScore3{};
};
// Function prototypes
void storeStudentData(Student &);
void displayStudent(const Student & );
void displayAverage(const Student &, const Student &, const Student &);

int main()
{
	cout << "Chapter 7 Student Scores by Kevin Bell\n" << endl;
	Student student1, student2, student3;
	// Store student data
	storeStudentData(student1);
	storeStudentData(student2);
	storeStudentData(student3);
	cout << "List of Students" << endl;
	// Display student data
	displayStudent(student1);
	displayStudent(student2);
	displayStudent(student3);
	// Display average
	displayAverage(student1, student2, student3);
	system("pause");
	return 0;
}

void displayStudent(const Student &student)
{
	cout << student.firstName << " " << student.lastName << ", ID: " << student.studentID << endl;
	cout << "Test scores: " << student.testScore1 << ", " << student.testScore2 << ", " << student.testScore3 << endl;
	double average = (student.testScore1 + student.testScore2 + student.testScore3) / 3;
	cout << "Average: " << average << endl << endl;
} // end displayStudent

void displayAverage(const Student& student1, const Student& student2, const Student& student3)

{
	cout << "Average of test scores\n";
	cout << "Test 1: " << student1.testScore1 << " " << student2.testScore1 << " " << student3.testScore1 << " " << "Avg: " << (student1.testScore1 + student2.testScore1 + student3.testScore1) / 3 << endl;
	cout << "Test 2: " << student1.testScore2 << " " << student2.testScore2 << " " << student3.testScore2 << " " << "Avg: " << (student1.testScore2 + student2.testScore2 + student3.testScore2) / 3 << endl;
	cout << "Test 3: " << student1.testScore3 << " " << student2.testScore3 << " " << student3.testScore3 << " " << "Avg: " << (student1.testScore3 + student2.testScore3 + student3.testScore3) / 3 << endl;
} // end displayAverage


//Create a function to store data for a single student -- pass the student structure by reference. In the main function, call this function 3 times, once for each of 3 different students.
void storeStudentData(Student&student)
{
	//Prompt the user for the student's first name, last name, and ID number.
	//Prompt the user for the student's 3 test scores.
	//Store the data in the student structure.
	cout << "Enter student's first name: ";
	cin >> student.firstName;
	cout << "Enter student's last name: ";
	cin >> student.lastName;
	cout << "Enter the student ID: ";
	cin >> student.studentID;
	cout << "First test score: ";
	cin >> student.testScore1;
	cout << "Second test score: ";
	cin >> student.testScore2;
	cout << "Third test score: ";
	cin >> student.testScore3;
	cout << endl;
} // end storeStudentData
