// sir may error po yan pero pinass ko na lang, pag i-choose nyo po yung 4 nag i-infinite loop po sya
// di ko na alam ang gagawin dyan sir, na-stress ako saglit
#include <iostream>
using namespace std;

int main() {
    int id[100];
    string firstName[100], lastName[100], course[100];
    float gpa[100];
    int count = 0, choice;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add Student\n
        cout <<"2. Edit Student\n" 
        cout << "3. Delete Student\n"
        cout << "4. View Students\n"
        cout <<"5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
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
