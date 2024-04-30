//Anish KC
//30-04-2024

#include <iostream>
using namespace std;

class Person
{
private:
int id;
string name;
public:
void set_p(){ //setter function
  cout<<"Enter the id: ";
  cin >> id;
  cout<<"Enter the name: ";
  cin >> name;
}
void display_p(){ //getter function
  cout << "\nID: " << id << "\nName: " << name << endl;
}

};
class Student : private Person //Student class is derived from Person class(inheretance)
{
private:
string course;
int fee;
public:
void set_s(){ //setter function
  set_p();
  cout<<"Enter the course: ";
  cin >> course;
  cout<<"Enter the fee: ";
  cin >> fee;
}
void display_s(){ //getter function
  display_p();
  cout << "Course: " << course << "\nFee: " << fee << endl;
}

};

int main() {

  Student s; //object of Student class
  s.set_s(); //calling set_s() function
  s.display_s(); //calling display_s() function
  return 0;
}