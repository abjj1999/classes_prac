#include<iostream>

using namespace std;

// include the StudentClass.h
#include "StudentClass.h"

int main(){

    /*create a student object using the overloaded constructor */
  Student s;
  s.setFirstName("Sandy");
  s.setLastName("Santos");
  s.setStudentID(6337130);

  cout << s.getFirstName() << " "<< s.getLastName() << " "<<s.getStudentID()<< endl;
    
    /*print out the student information using the individual accessor functions */
  
    
    return 0;
}