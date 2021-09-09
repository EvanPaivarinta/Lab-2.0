/*
C++ Fall 2021
Due: September 15th
Lab 2
Creating text on the screen
*/




#include <iostream>
using namespace std;
int main()
{
	// making schedule on screen
	const string m = "Monday";
	const string t = "Tuesday";
	const string w = "Wednesday";
	const string th = "Thursday";
	const string f = "Friday";
	const string fct = "8:20"; // fct = first class time
	const string fcn = "Macroeconomics 104"; // fcn = first class name
	const string sct = "8:20"; // sct = second class time 
	const string scn = "Python 106"; // scn = second class name
	const string tct = "10:00"; // tct = third class time
	const string tcn = "C++ 106"; // tcn = third class name
	const string foct = "12:41"; // foct = fourth class time
	const string focn = "Government";
	const string pf = "  *   *   *   *"; // pf = pattern one
	const string pt = "*   *   *   * "; // pt = pattern two
	cout << m << "\t\t" << fct << "\t" << fcn << endl;
	cout << m << "\t\t" << tct << "\t" << tct << endl;
	cout << m << "\t\t" << foct << "\t" << focn << endl;
	cout << t << "\t\t" << sct << "\t" << scn << endl;
	cout << t << "\t\t" << tct << "\t" << tcn << endl;
	cout << t << "\t\t" << foct << "\t" << focn << endl;
	cout << w << "\t" << fct << "\t" << fcn << endl;
	cout << w << "\t" << tct << "\t" << tcn << endl;
	cout << w << "\t" << foct << "\t" << focn << endl;
	cout << th << "\t" << sct << "\t" << scn << endl;
	cout << th << "\t" << tct << "\t" << tcn << endl;
	cout << th << "\t" << foct << "\t" << focn << endl;
	cout << f << "\t\t" << fct << "\t" << fcn << endl;
	cout << f << "\t\t" << tct << "\t" << tcn << endl;
	cout << f << "\t\t" << foct << "\t" << focn << endl;
	cout << "     " << endl;

	cout << pf << endl;
	cout << pt << endl;
	cout << pf << endl;
	cout << pt << endl;
	cout << pf << endl;
	cout << pt << endl;
	cout << pf << endl;
	cout << pt << endl;

	return 8008135;
}