#include <bits/stdc++.h>
using namespace std;

class StudentInfo {
protected:
    int id;
    string studentName;

public:
    void inputDetails() {
        cout << "Enter student ID: ";
        cin >> id;
        cout << "Enter student name: ";
        cin >> studentName;
    }

    void printDetails() {
        cout << id << " " << studentName << " ";
    }
};

class MarksInfo : public StudentInfo {
protected:
    int marks1, marks2;

public:
    void inputMarks() {
        cout << "Enter marks in subject 1: ";
        cin >> marks1;
        cout << "Enter marks in subject 2: ";
        cin >> marks2;
    }

    void printMarks() {
        cout << marks1 << " " << marks2 << " ";
    }
};

class FinalResult : public MarksInfo {
private:
    int totalMarks;

public:
    void calculateTotal() {
        totalMarks = marks1 + marks2;
    }

    void printResult() {
        cout << totalMarks << " ";
        if (totalMarks >= 50) {
            cout << "PASS" << endl;
        } else {
            cout << "FAIL" << endl;
        }
    }
};

int main() {
    int studentCount;
    cout << "Enter the number of students: ";
    cin >> studentCount;

    FinalResult* allStudents = new FinalResult[studentCount];
    for (int i = 0; i < studentCount; i++) {
        allStudents[i].inputDetails();
        allStudents[i].inputMarks();
        allStudents[i].calculateTotal();
    }

    cout << "\nID Name Subject1 Subject2 Total Result" << endl;
    cout << "---------------------------------------" << endl;

    for (int i = 0; i < studentCount; i++) {
        allStudents[i].printDetails();
        allStudents[i].printMarks();
        allStudents[i].printResult();
    }

    delete[] allStudents;

    return 0;
}
