#include<bits/stdc++.h>
using namespace std;


struct Student {
    // Data Members 
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    //member functions
    void addDetails(const string& studentName, int studentRollNo, const string& studentDegree,
                    const string& studentHostel, float studentCGPA) {
        name = studentName;
        rollNo = studentRollNo;
        degree = studentDegree;
        hostel = studentHostel;
        currentCGPA = studentCGPA;
    }

    void updateDetails(const string& newName, const string& newDegree) { //i'm using inplace operations to keep changes effective overall
        name = newName;
        degree = newDegree;
    }

    void updateCGPA(float newCGPA) {
        currentCGPA = newCGPA;
    }

    void updateHostel(const string& newHostel) {
        hostel = newHostel;
    }

    //finally rhe display function
    void displayDetails() const {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main()
{
    Student s1;

    s1.addDetails("Agrim Verma", 102303350 , "B.E.", "M" ,8.20 );
    s1.displayDetails();    
    cout<<"\nDetails Updatation ...\n\n";
    s1.updateHostel("J");
    s1.updateCGPA(8.5);
    s1.updateDetails("Agrim","B.Tech");
    s1.displayDetails();
}