#include<bits/stdc++.h>
using namespace std;

class Student {
private:
    // data members
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    
    void privateFunction() {
        cout << "This is a private function for demo purpose" << endl;
    }

public:
    // fetching details of the student
    void addDetails(const string& studentName, int studentRollNo, const string& studentDegree,
                    const string& studentHostel, float studentCGPA) {
        name = studentName;
        rollNo = studentRollNo;
        degree = studentDegree;
        hostel = studentHostel;
        currentCGPA = studentCGPA;
    }

    // updation
    void updateDetails(const string& newName, const string& newDegree) {
        name = newName;
        degree = newDegree;
    }

    void updateCGPA(float newCGPA) {
        currentCGPA = newCGPA;
    }


    void updateHostel(const string& newHostel) {
        hostel = newHostel;
    }

    // display function
    void displayDetails() const {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main() {
    
    Student s1;

    // add initial details
    s1.addDetails("Agrim Verma", 102303350, "B.E.", "Hostel M", 8.5);
    s1.displayDetails();

    cout<<"\n__________________________________\n";
    cout<<"\nUpdation in Progress...\n";
    cout<<"__________________________________\n\n";
    s1.updateDetails("Surkhab", "  B.Tech");
    s1.updateCGPA(9.0);
    s1.updateHostel("Hostel J");

    // Displaying updated details
    s1.displayDetails();

    return 0;
}
