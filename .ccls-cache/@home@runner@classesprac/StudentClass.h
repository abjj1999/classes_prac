#ifndef STUDENTCLASS_H
#define STUDENTCLASS_H
#include <iostream>
using namespace std;

//include the necessary headers

//declare the Student class as instructed
class Student{
  private:
    string f_name;
    string l_name;
    int Id;

  public: 
    Student(){
      f_name = "";
      l_name = "";
      Id = 0;
    }
    void setFirstName(string name){
      f_name  = name;
    }
    void setLastName(string name){
      l_name  = name;
    }
    void setStudentID(int num){
      Id = num;
    }
    string getFirstName(){
      return f_name;
    }
    string getLastName(){
      return l_name;
    }
    int getStudentID(){
      return Id;
    }
};

#endif