#include<iostream>
using namespace std;
int main()
{
	const int SIZE = 5;
	int i = 0, count = 0, rollno[SIZE], operation = 0;
	int quizes[SIZE] = {}, assignments[SIZE] = {}, CP[SIZE] = {}, MM[SIZE] = {}, FM[SIZE] = {};

	char a, grade[5];
	float sum = 0, per[5] = {};

	cout << "\t\t\t********************************\n";
	cout << "\t\t\t|    School management System  |\n";
	cout << "\t\t\t********************************\n";
	do
	{

		count++;
		cout << "Please enter roll no:";
		cin >> rollno[i];

		do
		{

			cout << " please enter the marks of quizes in range of 10 to 30=";
			cin >> quizes[i];
		} while (quizes[i] < 0 || quizes[i]>100);

		do
		{
			cout << " please enter the marks of Assignments in range of 10 to 30=";
			cin >> assignments[i];
		} while (assignments[i] < 0 || assignments[i]>100);
		do
		{
			cout << " please enter the marks of CP in range of 10 to 30=";
			cin >> CP[i];
		} while (CP[i] < 0 || CP[i]>100);
		do
		{
			cout << " please enter the marks of MIDS exams in range of 10 to 30=";
			cin >> MM[i];
		} while (MM[i] < 0 || MM[i]>100);
		do
		{
			cout << " please enter the marks of Final Exams in range of 10 to 30=";
			cin >>FM[i];
		} while (FM[i] < 0 || FM[i]>100);

		sum = quizes[i] + assignments[i],CP[i],MM[i],FM[i];
		float total = 200;
		per[i] = (sum / total) * 100;

		if (per[i] >= 91) {

			grade[i] = 'A';
		}
		else if (per[i] >= 75) {

			grade[i] = 'B';
		}
		else if (per[i] >= 60) {

			grade[i] = 'C';

		}
		else if (per[i] >= 50) {

			grade[i] = 'D';

		}
		else if (per[i] < 50) {

			grade[i] = 'F';
		}

		system("cls");
		cout << "please enter Y to enroll another student and N for not enrolling another student= ";
		cin >> a;

		if (a == 'y' || a == 'Y')
		{
			i++;
			if (i == 5)
			{
				cout << "your limit has been reached" << endl;
				cout << "Thank you for your enrollments:";
			}
		}

		else if (a == 'N' || a == 'n')
		{
			i = 5;
			cout << "Thank you for your enrolments:" << endl << endl;
		}


	} while (i != 5);

	for (int x = 0; x < count; x++)
	{
		cout << "Roll no of student " << x + 1 << " is:" << rollno[x] << endl;
		cout << "Marks of Quizes: " << x + 1 << " is: " << quizes[x] << endl;
		cout << "Marks of Assignments: " << x + 1 << " is: " << assignments[x] << endl;
		cout << "Marks of class participation: " << x + 1 << " is: " << CP[x] << endl;
		cout << "Marks of Mids: " << x + 1 << " is: " << MM[x] << endl;
		cout << "Marks of Finals: " << x + 1 << " is: " <<FM[x] << endl;
		cout << "Percentage of Student: " << x + 1 << " is: " << per[x] << endl;
		cout << "Grade of Student: " << x + 1 << " is: " << grade[x] << endl;

	}

	cout << "please enter y to go for advance options and n for ending the program= ";
	cin >> a;
	cout << endl;
	if (a == 'y' || a == 'Y') {

		cout << "Press 1 to update Roll Number of a particular Student" << endl;
		cout << "Press 2 to update marks of a particular student for CS" << endl;
		cout << "Press 3 to update marks of CS for all students who are already enrolled" << endl;
		cout << "Press 4 to update marks for Mathematics" << endl;
		cout << "Press 5 to update marks of Mathematics for all students who are already enrolled" << endl;
		cout << "Press6 to sort data in assending order on the basis of genatic order" << endl;
		cout << "Press 7 to delete the record of a particular student." << endl;
		cin >> operation;




		if (operation == 1) {
			cout << "Please enter students no whose roll no you want to change= ";
			cin >> i;
			i--;
			cout << "Old roll no is: " << rollno[i] << endl << "Now please enter new roll no= ";
			cin >> rollno[i];
		}
		else if (operation == 2) {
			cout << "Please enter students no whose marks of CS you want to change=";
			cin >> i;
			i--;
			cout << "Old no is :" <<assignments[i] << endl << "now please enter the new marks";
			cin >> assignments[i];

		}
		else if (operation == 3) {

			for (i = 0; i < count; i++)
			{
				cout << "Previous marks of student:" << i + 1 << " is: " << assignments[i] << " Now please enter new marks: ";
				cin >> assignments[i];
			}
		}
		else if (operation == 4) {
			cout << "Please enter student no whoes marks you want to change=";
			cin >> i;
			i--;
			cout << "Old no is :" << quizes[i] << endl << "now please enter the new marks=";
			cin >> quizes[i];
		}
		else if (operation == 5) {

			for (i = 0; i <= count; i++)
			{
				cout << "Previous marks of student:" << i + 1 << " is: " << quizes[i] << " Now please enter new marks: ";
				cin >> quizes[i];
			}
		}
		else if (operation == 6) {
			for (i = 1; i < count; i++)
			{
				for (int j = 0; j < count - 1; j++)
				{

					if (per[j] < per[j + 1])
					{
						int temp = per[j];
						per[j] = per[j + 1];
						per[j + 1] = temp;

						temp = quizes[j];
						quizes[j] = quizes[j + 1];
						quizes[j + 1] = temp;

						temp = assignments[j];
						assignments[j] = assignments[j + 1];
						assignments[j + 1] = temp;

						temp = grade[j];
						grade[j] = grade[j + 1];
						grade[j + 1] = temp;

						temp = rollno[j];
						rollno[j] = rollno[j + 1];
						rollno[j + 1] = temp;

					}
				}

			}

		}
		else if (operation == 7) {
			cout << "Enter student no whose information you  want to delete=";
			cin >> i;
			i--;
			rollno[i] = 0;
			quizes[i] = 0;
			assignments[i] = 0;
			grade[i] = 0;
			per[i] = 0;
		}

	}

	else if (a == 'N' || a == 'n')
	{
		cout << "Exit" << endl;
	}

	for (int x = 0; x < count; x++)
	{
		cout << "Roll no of student " << x + 1 << " is:" << rollno[x] << endl;
		cout << "Marks of Computer Science of Student: " << x + 1 << " is: " << assignments[x] << endl;
		cout << "Marks of Mathematics of Student: " << x + 1 << " is: " << quizes[x] << endl;
		cout << "Percentage of Student: " << x + 1 << " is: " << per[x] << endl;
		cout << "Grade of Student: " << x + 1 << " is: " << grade[x] << endl;
		cout << "*********" << endl;

	}

	return 0;
}