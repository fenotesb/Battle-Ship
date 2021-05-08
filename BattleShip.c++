#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

vector<vector<string>> matrix(5, vector<string>(11, "*"));

class person{
private:
	string name;
	string shipCord;
public:
	bool status;
	//we are able to create methods with same name because they each have
	//different parameters
	person() {
		this->name = "-1";
		// fill in rest of variables with default values
	}
	person(string name, string shipCord) {
		this->name = name;
		this->shipCord = shipCord;
	}
	person(string name, string shipCord, bool status) {
		this->name = name;
		this->shipCord = shipCord;
		this->status = status;
	}

	string getName() {
		return this->name;
 	}

	void setName(string name) {
 		this->name = name;
	}

	void setWinStatus(bool status) {
		this->status = status;
	}

	//create get / set for shipCord
};

void display() {

	cout << "in the beginning there was... " << endl;
	for (int i = 0; i < 5; i++) {
		cout << " --  --  -- - - - -  -" << endl;
		for (int j = 0; j < 11; j++) {
			cout << matrix[i][j] << " " << "|";
		}
		cout << endl;
	}

	/*
	cout << "now, give me character" << endl;
	string answer;
	cin >> answer;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 11; j++) {
			matrix[i][j] = answer;
			cout << matrix[i][j];
		}
		cout << endl;
	}
	*/
}

void editMatrix(string row, string col) {
	int _row = stoi(row);
	int _col = stoi(col);
	cout << _row << " ";
	cout << _col;
	matrix[_row][_col] = "S";
}


int main() {
	/*
 	string question2 = "Where do you live? ";
	string answer = "";
	cout << question2;
	cin >> answer;
	answer += " it worked as planned i can edit what the user said";
	cout << answer;
	*/

	display();
	cout << endl << endl << "Change!" << endl;
	cout << "Give me coordinate 1" << endl;
	string c1;
	cin >> c1;
	cout << "Give me coorindate 2" << endl;
	string c2;
	cin >> c2;
	editMatrix(c1, c2);
	display();

	cout << "classes" << endl;
	person p1();
	person p2("nigel", "B5");
	// correct initialization
	person p3("fenote", "B5", false);

	cout << p3.getName();
	cout << p3.status;

	if (p3.getName() == "nigel");
	{

	}

	while (p2.status && p3.status) {

		//if(user's coordinate to attack is GOOD (*){then attack}

		//if (player 2 has lost)
		{p2.status = false; }
		//if (player 3 has lost)
		{p3.status = false; }
	}

 	getchar();
	getchar();
	return 0;
