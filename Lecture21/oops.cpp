// oops.cpp
#include <bits/stdc++.h>
using namespace std;

class Complex{
public:
	int real , imag ;


	Complex(){

	}

	Complex(int r , int i){
		real = r ; 
		imag = i ;
	}


	Complex add(Complex c){
		Complex res;
		res.real = real + c.real;
		res.imag = imag + c.imag;

		return res;
	}

	Complex operator + (Complex c){
		Complex res;
		res.real = real + c.real;
		res.imag = imag + c.imag;

		return res;
	}

	void display(){

		cout << real << " + " << imag << "i" <<endl;
	}
};







class Student{
public:
	string name;
	int age;
	int rollNo;

	Student(){

		cout << " Default Constructor getting called " << endl;
	}

	Student(string n , int a , int r){

		cout << " Parameterized Constructor getting called " << endl;

		name = n ; 
		age = a ; 
		rollNo = r ;
	}

	Student(Student& originalStu){

		cout <<" Copy Constructor " << endl;
		name = originalStu.name;
		age = originalStu.age;
		rollNo = originalStu.rollNo;
	}

	// void setDetails(string n , int a , int r){
	// 	name = n ;
	// 	age = a ;
	// 	rollNo = r ;
	// }
	void showDetails(){
		cout << " Name : " << name << endl;
		cout << " Age : " << age << endl;
		cout << " Roll Number : " << rollNo << endl;
	}

	~Student(){
		cout << "Destructor getting called " << endl;
	}
};






int main(){


	Complex c1(2,3);
	Complex c2(3,2);

	Complex c3;

	// c3 = c1.add(c2);
	c3 = c1 + c2 ;

	c3.display();


	// Student s1("Student_1" , 12 , 1);

	// // s1.name = "Student_1";
	// // s1.age = 12;
	// // s1.rollNo = 1;

	// // s1.setDetails("Student_1" , 12 , 1);

	// // cout << s1.name << " " << s1.age << " " << s1.rollNo << endl;

	// s1.showDetails();

	// Student s2("Student_2" , 13 , 2);

	// // s2.name = "Student_2";
	// // s2.age = 13;
	// // s2.rollNo = 2;

	// // s2.setDetails("Student_2" , 13 , 2);


	// // cout << s2.name << " " << s2.age << " " << s2.rollNo << endl;
	// cout << endl;
	// s2.showDetails();

	// cout << endl;
	// Student s3(s1);

	// s3.showDetails();



	return 0;
}