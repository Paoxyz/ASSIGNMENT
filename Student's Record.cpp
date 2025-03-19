#include <iostream>
using namespace std;

struct Student {
    int id;
    string firstName;
    string lastName;
    string course;
    float gpa;
};

int main() {
    Student students[100];
    int count = 0;
    int choice;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add Student\n2. Edit Student\n3. Delete Student\n4. View Students\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter ID: ";
            cin >> students[count].id;
            cout << "Enter First Name: ";
            cin >> students[count].firstName;
            cout << "Enter Last Name: ";
            cin >> students[count].lastName;
            cout << "Enter Course: ";
            cin >> students[count].course;
            cout << "Enter GPA: ";
            cin >> students[count].gpa;
            count++;
            cout << "Student added!\n";
        }

        else if (choice == 2) {
            int editID, found = -1;
            cout << "Enter Student ID to edit: ";
            cin >> editID;

            for (int i = 0; i < count; i++) {
                if (students[i].id == editID) {
                    found = i;
                    break;
                }
            }

            if (found != -1) {
                cout << "Enter New First Name: ";
                cin >> students[found].firstName;
                cout << "Enter New Last Name: ";
                cin >> students[found].lastName;
                cout << "Enter New Course: ";
                cin >> students[found].course;
                cout << "Enter New GPA: ";
                cin >> students[found].gpa;
                cout << "Student record updated!\n";
            } else {
                cout << "Student not found!\n";
            }
        }

        else if (choice == 3) {
            int deleteID, found = -1;
            cout << "Enter Student ID to delete: ";
            cin >> deleteID;

            for (int i = 0; i < count; i++) {
                if (students[i].id == deleteID) {
                    found = i;
                    break;
                }
            }

            if (found != -1) {
                for (int i = found; i < count - 1; i++) {
                    students[i] = students[i + 1];  
                }
                count--;
                cout << "Student deleted!\n";
            } else {
                cout << "Student not found!\n";
            }
        }

        else if (choice == 4) {
            if (count == 0) {
                cout << "No students to display.\n";
            } else {
                cout << "\nStudent List:\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << students[i].id << ", Name: " << students[i].firstName << " " << students[i].lastName
                         << ", Course: " << students[i].course << ", GPA: " << students[i].gpa << endl;
                }
            }
        }

        else if (choice == 5) {
            cout << "Exiting program...\n";
            break;
        }

        else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
