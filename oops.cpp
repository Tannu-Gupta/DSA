 #include <iostream>
 #include <string>
 using namespace std;

//  class Teacher{
//     private:
//        double salary; 

//     public:
//       //properties / attributes
//        string name;
//        string dept;
//        string subject;
       

//        //Methods / member functions
//        void changeDept(string newDept){
//         dept = newDept;
//        }

//        void setSalary(double s){
//         salary = s;
//        }

//         double getSalary(){
//         return salary;
//        }
//     };

//  int main(){
//     Teacher t1;
//     t1.name = "Tannu";
//     t1.subject = "DSA";
//     t1.dept = "CSE";
//    // t1.salary = 1000;
//    t1.setSalary(25000);

//     cout << t1.name << " " << t1.subject << " " << t1.dept << " " << t1.getSalary() << endl;

//    return 0;
//  }



// class Account {
// private:
//     double balance;
//     string password; //data hiding

// public:
//     string accountID;
//     string username;
       
// };


            //Consturctor//

//  class Teacher{
//     private:
//        double salary; 

//     public:
//       Teacher(){
//         cout << "Hi, I am constructor\n";
//       }
      
//       string name;
      
//  };

//  int main(){
//     Teacher t1;
//     Teacher t2;
//     t1.name = "Tannu";
//     cout << t1.name << endl;
//     return 0;
//  }


//  class Teacher{
//     private:
//        double salary; 

//     public:
// string name;
// string dept;
// string subject;

// //non parameterized
//       Teacher(){
//         dept = "CSE";
//       }

//       //parameterized
//       Teacher(string name, string dept, string subject, double salary){
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//       }

//       //copy constructor
      
//       Teacher(Teacher &orgObj){
//         cout << "Hi, I am custom coopy constructor" << endl;

//         this->name = orgObj.name;
//         this->dept = orgObj.dept;
//         this->subject = orgObj.subject;
//         this->salary = orgObj.salary;
//       }

//       void changeDept(string newDept){
//         dept = newDept;
//       }

//       void getInfo(){
//         cout << "Name: " << name << endl;
//         cout << "Department: " << dept << endl;
//         cout << "Subject: " << subject << endl;
//         cout << "Salary: " << salary << endl;
//       }

//     };

//  int main(){
//     Teacher t1("Tannu", "CSE", "DSA", 25000);
//    // t1.getInfo();
    
//    Teacher t2(t1);   //default copy constructor
//    t2.getInfo();
//     return 0;
//  }


                                 //Shallow & Deep copy//

// #include <iostream>
// #include <string>
// using namespace std;

// class Student{
//     public:
//     string name;
//     double* cgpaPtr;

//     Student(string name, double cgpa){
//         this->name = name;
//         cgpaPtr = new double; //dynamic memory allocation
//         *cgpaPtr = cgpa;
//     }

//     // Student(Student &obj) {
//     // this->name = obj.name;
//     // this->cgpaPtr = obj.cgpaPtr;  //shallow copy
//     //}

//     Student(Student &obj){
//     this->name = obj.name;
//     cgpaPtr = new double;
//     *cgpaPtr = *(obj.cgpaPtr); //deep copy
// }

//     void getInfo(){
//         cout << "Name: " << name << endl;
//         cout << "CGPA: " << *cgpaPtr << endl;
//     }

// };

// int main(){
//     Student s1("Ankit", 9.9);
//     Student s2(s1);
    
//     s1.getInfo();
//     *(s2.cgpaPtr) = 9.2;

//     s1.name = "Tannu";
//     s1.getInfo();

//     s2.name = "Neha";
//     s2.getInfo();

//     s2.name = "Ashish";
//     s2.getInfo();

//     return 0;
// }

                         //Destructor//

// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
//     public:
//     string name;
//     double* cgpaPtr;

//     Student(string name, double cgpa) {
//         this->name = name;
//         cgpaPtr = new double; 
//         *cgpaPtr = cgpa;
//     }

//     //Destructor
//     ~Student() {
//         cout << "Hi, I delete everything\n";
//         delete cgpaPtr;
//     }

//     void getInfo() {
//         cout << "Name: " << name << endl;
//         cout << "CGPA: " << *cgpaPtr << endl;
//     }

// };

// int main(){
//     Student s1("Tannu Gupta", 9.8);
//     s1.getInfo();
//     return 0;
// }


                     //Inheritance//

// #include <iostream>
// #include <string>
// using namespace std;   

// class Person{
//      public:
//      string name;
//      int age;

//      Person(string name, int age){
//         this->name = name;
//         this->age = age;
//      }

// //      Person(){
// //         cout << "Parent constructor called\n";

// //      }

// };

// class Student : public Person{
//     public :
//     int rollNo;

//     Student(string name, int age, int rollNo) : Person(name, age){
//         // cout << "Child constructor called\n";
//         this-> rollNo = rollNo;
//     }

//     void getInfo(){
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Roll No: " << rollNo << endl;
//     }

// };

// int main(){
//    // Student s1;

//    Student s1("Tannu", 21, 202);

//     // s1.name = "Tannu";
//     // s1.age = 21;
//     // s1.rollNo = 202;

//     s1.getInfo();
//     return 0;
// }


    //Multi Level Inheritance//

// #include <iostream>
// #include <string>   
// using namespace std;

// class Person{
//     public:
//     string name;
//     int age;
// };

// class Student : public Person{
//     public :
//     int rollNo;
// };

// class GradeStudent : public Student{
//     public:
//     string researchArea;
// };

// int main(){
//     GradeStudent s1;

//     s1.name = "Tannu";
//     s1.age = 21;
//     s1.rollNo = 202;
//     s1.researchArea = "AI";

//     cout << s1.name << " " << s1.age << " " << s1.rollNo << " " << s1.researchArea << endl;
//     return 0;
// }

                //Multiple Inheritance//

// #include <iostream>
// #include <string>   
// using namespace std;

// class Student{
//     public:
//     string name;
//     int rollNo;
// };

// class Teacher {
//     public :
//    string subject;
//    double salary;
// };

// class TA : public Student, public Teacher{
// };

// int main(){
//     TA t1;
//     t1.name = "Tannu";
//     t1.subject = "DSA";

//     cout << t1.name << " " << t1.subject << endl;
//     return 0;
// }


              //Hierarchical Inheritance//

// #include <iostream>
// #include <string>   
// using namespace std;

// class Person{
//     public:
//     string name;
//     int age; 
// };

// class  Student : public Person{
//     public:
//     int rollNo;
// };

// class Teacher : public Student {
//     public :
//    string subject;
// };

// int main(){
//     Teacher t1;
//     t1.name = "Tannu";
//     t1.subject = "DSA";

//     cout << t1.name << " " << t1.subject << endl;
//     return 0;
// }


                           //Polymorphism//

// #include <iostream>
// #include <string>   
// using namespace std;

// class Student{
//     public:
//     string name;

//     Student() {
//         cout << "non-parameterized\n";
//     }

//     Student(string name) {
//         this->name = name;
//         cout << "parameterized\n";
//     }

// };

// int main(){
//     Student s1;
//     Student s2("Tannu");  //constructor overloading

//     return 0;
// }

           //Overloading//

// #include <iostream>
// #include <string>
// using namespace std;

// class Print {
//     public:
//     void show(int x){
//         cout << "int :" << x << endl;
//     }

//     void show(char ch){
//         cout << "char : " << ch << endl;
//     }
// };

// int main(){
//     Print p1;
//     p1.show(107);
//     p1.show('A');  //function overloading
//     return 0;
// }


                       //Overriding//

// #include <iostream>
// #include <string>
// using namespace std;

// class Parent {
//     public:
//         void getInfo() {
//            cout << "Hi, I am parent\n";
//     }
// };

// class Child : public Parent {
//     public:
//         void getInfo() {
//         cout << "Hi, I am child\n";
//     }
// };

// int main(){
//     Parent p1;
//     p1.getInfo();  //parent class function called

//     Child c1;
//     c1.getInfo();  //child class function called

//     return 0;
// }

                //Abstraction//

// #include <iostream>
// #include <string>
// using namespace std;

// class Shape{
//     public:
//     virtual void draw() = 0; //pure virtual function
// };

// class Circle : public Shape {
//     public:
//     void draw() {
//         cout << "drawing a circle\n";
//     }
// };

// int main() {
//     Circle c1;
//     c1.draw();
//     return 0;
// }

                      //Stactic function//

#include <iostream>
#include <string>
using namespace std;

// void fun() {
//   // int x = 2;
//     static int x = 2; //static variable
//     cout << "x : " << x << endl;
//     x++;
// }

// int main() {
//     fun(); 
//     fun();
//     fun();
//     return 0;
// }


// class A {
//     public :
//     int x;

//     void incX() {
//         x = x+1;

//     }
// };

// int main (){
//     A obj;
//     obj.x = 0;

//     cout << obj.x << endl;
//     obj.incX();
//     cout << obj.x << endl;

//     return 0;
// }


class ABC {
    public:
        ABC(){
           cout << "Hi, I am constructor\n";
    }

       ~ABC(){
         cout << "Hi, I am destructor\n";
       }
};

int main(){
    if(true){
       //ABC obj1;
       static ABC obj1; //static object
    }

    cout << "end of main function\n";
    return 0;
}