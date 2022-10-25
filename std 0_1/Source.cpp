#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <stdlib.h> i
using namespace std;
class Student
{
	// student default data //
public:
	char stud_name[100];
	int stud_id;
	float g1, g2, g3, g4, g5;
	char cls[3];
	float total;
	float gpa_total;
	char gpa;
	// Class function decleration //
	void new_stud();
	void show_stud();
	void total_calc();
	void gpa_calc();
	int ret_stud_id() const;
	void show_all() const;
	void mod_stud();
	int return_gpa();
	int return_total();
};
/*Class Functions*/
//####################################################################################################################//
// a function to add a new student //
void Student::new_stud()
{
	cout << "Enter the student's name (Max 100 chars) :" << endl;
	cin.ignore();
	gets_s(stud_name, 100);
	cout << "Enter the student's ID (Max 6 chars) :" << endl;
	cin >> stud_id;
	cout << "Enter the student's Class (no,letter) :" << endl;
	cin.ignore();
	gets_s(cls, 3);
	cout << "###########################################" << endl;
	cout << "\nEnter the marks:" << endl;
	cout << "Enter the student's mark of Physics: ";
	cin >> g1;
	cout << "Enter the student's mark of Chemistry: ";
	cin >> g2;
	cout << "Enter the student's mark of Math(1): ";
	cin >> g3;
	cout << "Enter the student's mark of Arabic: ";
	cin >> g4;
	cout << "Enter the student's mark of Biology: ";
	cin >> g5;
	total_calc();
	gpa_calc();
	cout << "STUDENT HAS BEEN ADDED SUCCESSFULLY !!" << endl;
}
// a function to modify a student's data //
void Student::mod_stud()
{
	cout << "Enter the student's name (Max 100 chars) :" << endl;
	cin.ignore();
	gets_s(stud_name, 100);
	cout << "Enter the student's ID (Max 6 chars) :" << endl;
	cin >> stud_id;
	cout << "Enter the student's Class (no,letter) :" << endl;
	cin.ignore();
	gets_s(cls, 3);
	cout << "###########################################" << endl;
	cout << "\nEnter the marks:" << endl;
	cout << "Enter the student's mark of Physics: ";
	cin >> g1;
	cout << "Enter the student's mark of Chemistry: ";
	cin >> g2;
	cout << "Enter the student's mark of Math(1): ";
	cin >> g3;
	cout << "Enter the student's mark of Arabic: ";
	cin >> g4;
	cout << "Enter the student's mark of Biology: ";
	cin >> g5;
	cout << "STUDENT HAS BEEN MODIFIED SUCCESSFULLY !!" << endl;
}
// a function to show one student's data //
void Student::show_stud()
{
	cout << "student's name :" << endl;
	cout << stud_name << endl;
	cout << "student's ID :" << endl;
	cout << stud_id << endl;;
	cout << "student's Class :" << endl;
	cout << cls << endl;
	cout << "###########################################" << endl;
	cout << "\nthe marks:" << endl;
	cout << "The student's mark of Physics: ";
	cout << g1 << endl;
	cout << "The student's mark of Chemistry: ";
	cout << g2 << endl;
	cout << "The student's mark of Math(1): ";
	cout << g3 << endl;
	cout << "The student's mark of Arabic: ";
	cout << g4 << endl;
	cout << "The student's mark of Biology: ";
	cout << g5 << endl;


}
// a function to calculate the total marks // 
void Student::total_calc()
{
	total = g1 + g2 + g3 + g3 + g4 + g5;
}
// a function to return student's ID // 
int Student::ret_stud_id() const
{
	return stud_id;
}

// a function to show all student's data in table form //
void Student::show_all() const
{
	cout << stud_name << setw(15) << stud_id << setw(15) << cls << setw(15) << g1 << setw(15) << g2 << setw(15) << g3 << setw(15) << g4 << setw(15) << g5 << setw(15) << total << setw(15) << gpa << endl;
	cout << "\n" << endl;
	cout << "*************************************************************************************************************************************************************************" << endl;
}

// a function to calculate the GPA of student //
void Student::gpa_calc()
{
	gpa_total = ((g1 + g2 + g3 + g4 + g5) / 500) * 100;
	if (gpa_total >= 90)
	{
		gpa = 'A';
	}
	else if (gpa_total >= 85 && gpa_total <= 90)
	{
		gpa = 'B';
	}
	else if (gpa_total >= 75 && gpa_total <= 85)
	{
		gpa = 'C';
	}
	else if (gpa_total >= 65 && gpa_total <= 75)
	{
		gpa = 'D';
	}
	else if (gpa_total < 50)
	{
		gpa = 'F';
	}
}

// a function to return gpa //
int Student::return_gpa()
{
	return gpa;
}

// a function to return the total //
int Student::return_total()
{
	return total;
}
/*########################################################################################################################
  ########################################################################################################################*/

  // functions decelartion //
void add_student();
void show_student(int n);
void show_students();
void delete_student(int n);
void modify_student(int n);
void show_students_table();

int main()
{
	add_student();

	system("pause");
}



void add_student()
{
	Student st;
	ofstream out_file;
	out_file.open("std.txt", ios::binary | ios::app | ios::out);
	if (out_file.fail())
	{
		cout << "Error :-\n Can not access database ." << endl;
	}
	st.new_stud();
	out_file.write(reinterpret_cast<char*>(&st), sizeof(Student));
	out_file.close();
}

// a function to show a certain student //

void show_student(int n)
{

}

// a function to show all student's data //
void show_students()
{

}

// a function to delete certain student's data //
void delete_student(int n)
{

}

// a function to modify a certain student //
void modify_student(int n)
{

}

// a function to show all students in table form //
void show_students_table()
{


}