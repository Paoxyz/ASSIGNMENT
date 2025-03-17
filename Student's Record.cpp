#include <iostream>
using namespace std;

int main() {
    int id[100];
    string firstName[100], lastName[100], course[100];
    float gpa[100];
    int count = 0, choice;

    while (true) {
        // Display Menu
        cout << "\nMenu:\n";
        cout << "1. Add Student\n2. Edit Student\n3. Delete Student\n4. View Students\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        // Add Student
        if (choice == 1) {
            cout << "Enter ID: ";
            cin >> id[count];
            cout << "Enter First Name: ";
            cin >> firstName[count];
            cout << "Enter Last Name: ";
            cin >> lastName[count];
            cout << "Enter Course: ";
            cin >> course[count];
            cout << "Enter GPA: ";
            cin >> gpa[count];
            count++;
            cout << "Student added!\n";
        }

        // Edit Student
        else if (choice == 2) {
            int editID, found = -1;
            cout << "Enter Student ID to edit: ";
            cin >> editID;

            for (int i = 0; i < count; i++) {
                if (id[i] == editID) {
                    found = i;
                    break;
                }
            }

            if (found != -1) {
                cout << "Enter New First Name: ";
                cin >> firstName[found];
                cout << "Enter New Last Name: ";
                cin >> lastName[found];
                cout << "Enter New Course: ";
                cin >> course[found];
                cout << "Enter New GPA: ";
                cin >> gpa[found];
                cout << "Student record updated!\n";
            } else {
                cout << "Student not found!\n";
            }
        }

        // Delete Student
        else if (choice == 3) {
            int deleteID, found = -1;
            cout << "Enter Student ID to delete: ";
            cin >> deleteID;

            for (int i = 0; i < count; i++) {
                if (id[i] == deleteID) {
                    found = i;
                    break;
                }
            }

            if (found != -1) {
                for (int i = found; i < count - 1; i++) {
                    id[i] = id[i + 1];
                    firstName[i] = firstName[i + 1];
                    lastName[i] = lastName[i + 1];
                    course[i] = course[i + 1];
                    gpa[i] = gpa[i + 1];
                }
                count--;
                cout << "Student deleted!\n";
            } else {
                cout << "Student not found!\n";
            }
        }

        // View Students
        else if (choice == 4) {
            if (count == 0) {
                cout << "No students to display.\n";
            } else {
                cout << "\nStudent List:\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << id[i] << ", Name: " << firstName[i] << " " << lastName[i]
                         << ", Course: " << course[i] << ", GPA: " << gpa[i] << endl;
                }
            }
        }

        // Exit Program
        else if (choice == 5) {
            cout << "Exiting program...\n";
            break;
        }

        // Invalid Option
        else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}