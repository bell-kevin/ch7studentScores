// ch7studentScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct GradeBook
{
	string firstName;
	string lastName;
	int studentID;
	double testScore1;
	double testScore2;
	double testScore3;
};

int main()
{
    cout << "Chapter 7 Student Scores by Kevin Bell\n\n";
	GradeBook student1;
	GradeBook student2;
	GradeBook student3;
	cout << "Enter student's first name: ";
	cin >> student1.firstName;
	cout << "Enter student's last name: ";
	cin >> student1.lastName;
	cout << "Enter the student ID: ";
	cin >> student1.studentID;
	cout << "First test score: ";
	cin >> student1.testScore1;
	cout << "Second test score: ";
	cin >> student1.testScore2;
	cout << "Third test score: ";
	cin >> student1.testScore3;
	cout << endl;
	
	cout << "Enter student's first name: ";
	cin >> student2.firstName;
	cout << "Enter student's last name: ";
	cin >> student2.lastName;
	cout << "Enter the student ID: ";
	cin >> student2.studentID;
	cout << "First test score: ";
	cin >> student2.testScore1;
	cout << "Second test score: ";
	cin >> student2.testScore2;
	cout << "Third test score: ";
	cin >> student2.testScore3;
	cout << endl;
	
	cout << "Enter student's first name: ";
	cin >> student3.firstName;
	cout << "Enter student's last name: ";
	cin >> student3.lastName;
	cout << "Enter the student ID: ";
	cin >> student3.studentID;
	cout << "First test score: ";
	cin >> student3.testScore1;
	cout << "Second test score: ";
	cin >> student3.testScore2;
	cout << "Third test score: ";
	cin >> student3.testScore3;
	cout << endl;
	
	cout << "List of Students" << endl;
	cout << student1.firstName << " " << student1.lastName << ", ID: " << student1.studentID << endl;
	cout << "Test scores: " << student1.testScore1 << ", " << student1.testScore2 << ", " << student1.testScore3 << endl;
	double average = (student1.testScore1 + student1.testScore2 + student1.testScore3) / 3;
	cout << "Average: " << average << endl << endl;

	cout << student2.firstName << " " << student2.lastName << ", ID: " << student2.studentID << endl;
	cout << "Test scores: " << student2.testScore1 << ", " << student2.testScore2 << ", " << student2.testScore3 << endl;
	average = (student2.testScore1 + student2.testScore2 + student2.testScore3) / 3;
	cout << "Average: " << average << endl << endl;
	
	cout << student3.firstName << " " << student3.lastName << ", ID: " << student3.studentID << endl;
	cout << "Test scores: " << student3.testScore1 << ", " << student3.testScore2 << ", " << student3.testScore3 << endl;
	average = (student3.testScore1 + student3.testScore2 + student3.testScore3) / 3;
	cout << "Average: " << average << endl << endl;

	cout << "Average of test scores\n";
	cout << "Test 1: " << student1.testScore1 << " " << student2.testScore1 << " " << student3.testScore1 << " " << "Avg: " << (student1.testScore1 + student2.testScore1 + student3.testScore1) / 3 << endl;
	cout << "Test 2: " << student1.testScore2 << " " << student2.testScore2 << " " << student3.testScore2 << " " << "Avg: " << (student1.testScore2 + student2.testScore2 + student3.testScore2) / 3 << endl;
	cout << "Test 3: " << student1.testScore3 << " " << student2.testScore3 << " " << student3.testScore3 << " " << "Avg: " << (student1.testScore3 + student2.testScore3 + student3.testScore3) / 3 << endl;
	system("pause");
	return 0;
}
