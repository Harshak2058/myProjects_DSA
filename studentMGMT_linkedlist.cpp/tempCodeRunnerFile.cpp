#include <iostream>
#include <iomanip>  // For setw()

using namespace std;

struct Student {
    string name;
    int rollNumber;
    string course;
    double grades;
    Student* next;
}* head = NULL,
*temp = NULL,
* loc = NULL;

// Function to add a student to the linked list
void addStudent(string name, int rollNumber, string course, double grades) {
    // Create a new student node
    Student* newStudent = new Student;
    newStudent->name = name;
    newStudent->rollNumber = rollNumber;
    newStudent->course = course;
    newStudent->grades = grades;
    newStudent->next = NULL;

    // If list is empty, make new student the head
    if (head == NULL) {
        head = newStudent;
    } else {
        // Traverse to the end of the list and append new student
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newStudent;
    }
    cout << "Student added successfully." << endl;
}

// Function to delete a student from the linked list
void deleteStudent(int rollNumber) {
    temp = head;
    bool found = false;

    // Traverse the list to find the student to delete
    while (temp != NULL) {
        if (temp->rollNumber == rollNumber) {
            if (loc == NULL) {
                head = temp->next;
            } else {
                loc->next = temp->next;
            }
            delete temp;
            cout << "Student deleted successfully." << endl;
            found = true;
            break;
        }
        loc = temp;
        temp = temp->next;
    }
    if (!found) {
        cout << "Student with roll number " << rollNumber << " not found." << endl;
    }
}

// Function to search for a student by roll number
void searchStudent(int rollNumber) {
    temp = head;
    bool found = false;

    // Traverse the list to find the student
    while (temp != NULL) {
        if (temp->rollNumber == rollNumber) {
            cout << "Student Details:" << endl;
            cout << "Name: " << temp->name << endl;
            cout << "Roll Number: " << temp->rollNumber << endl;
            cout << "Course: " << temp->course << endl;
            cout << "Grades: " << temp->grades << endl;
            found = true;
            break;
        }
        temp = temp->next;
    }
    if (!found) {
        cout << "Student with roll number " << rollNumber << " not found." << endl;
    }
}

// Function to display all students in the linked list
void displayStudents() {
    if (head == NULL) {
        cout << "No students in the record." << endl;
        return;
    }

    // Display header
    cout << setw(15) << "Name" << setw(15) << "Roll Number" << setw(15) << "Course" << setw(10) << "Grades" << endl;
    cout << "--------------------------------------------------------------" << endl;

    // Traverse and display each student's details
    temp = head;
    while (temp != NULL) {
        cout << setw(15) << temp->name << setw(15) << temp->rollNumber << setw(15) << temp->course << setw(10) << temp->grades << endl;
        temp = temp->next;
    }
}

int main() {
    char choice;

    do {
        int ch, rollNumber;
        string name, course;
        double grades;

        cout << "\nMenu:\n";
        cout << "1. Add Student\n";
        cout << "2. Delete Student\n";
        cout << "3. Search Student\n";
        cout << "4. Display Students\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter student details:\n";
                cout << "Name: ";
                cin >> name;
                cout << "Roll Number: ";
                cin >> rollNumber;
                cout << "Course: ";
                cin >> course;
                cout << "Grades: ";
                cin >> grades;
                addStudent(name, rollNumber, course, grades);
                break;

            case 2:
                cout << "Enter roll number of student to delete: ";
                cin >> rollNumber;
                deleteStudent(rollNumber);
                break;

            case 3:
                cout << "Enter roll number of student to search: ";
                cin >> rollNumber;
                searchStudent(rollNumber);
                break;

            case 4:
                displayStudents();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
                break;
        }

        cout << "\nDo you want to continue (Y/N)? ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}