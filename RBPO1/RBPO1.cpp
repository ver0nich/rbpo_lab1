#include <iostream>
#include <string>
using namespace std;
unsigned short ReadPersonAge() {
    cout << "Person's age is  \n";
    unsigned short age;
    cin >> age;
    cout << endl;
    return age;
}
string ReadPersonName() {
    cout << "Person's name is \n";
    string name;
    cin >> name;
    cout << endl;
    return name;
}
unsigned short height;
unsigned short ReadPersonHeight() {
    cout << "Person's height is \n";
    cin >> height;
    cout << endl;
    return height;
}
void ReadPersonWeight(unsigned short &weight) {
    cout << "Person's weight is  \n";
    cin >> weight;
    cout << endl;
    
}
void ReadPersonSalary(double* salary) {
    cout << "Person's salary is \n";
    cin >> *salary;
    cout << endl;
    
}
void ReadPersonData(string& name, unsigned short& age, double& salary) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}
void ReadPersonData(string &name, unsigned short &age, unsigned short &height, unsigned short &weight ) {
    name = ReadPersonName();
    age = ReadPersonAge();
    height = ReadPersonHeight();
    ReadPersonWeight(weight);

}

void WritePersonData(unsigned short age, const string& name, const string &height ="", const string &weight = "", const string &salary = "") {
    cout << "Result: " <<endl;
    cout << "Age " << age << endl;
    cout << "Name " << name << endl;
    cout << "Height " << height << endl;
    cout << "Weight " << weight << endl;
    cout << "Salary " << salary << endl;
}

int main()
{
    string name;
    unsigned short age, weight;
    double salary;
    ReadPersonData(name, age, salary);
    WritePersonData(age, name, "", "", to_string(salary));

    ReadPersonData(name, age, height, weight);
    WritePersonData(age, name,to_string(height), to_string(weight));
    return 0;

}

