#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
using namespace std;

class Patient{
private:
    string name;
    string disease
    int severity; //(1-100)
    int age;
public:
    Patient(string = "N/A", string = "N/A", int = 0, int = 0);

    bool operator>(const Patient& other);
    bool operator<(const Patient& other);
    bool operator==(const Patient& other);
};

Patient::Patient(string n, string d, int s, int a){
    name = n;
    disease = d;
    severity = s;
    age = a;
}