#include <algorithm>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <typeinfo>
//#include <cstdlib>
#include <ctype.h>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
class student {
private:
	string _name;
	string _surname;
	string _dateOfBirth;
	int _phoneNumber;
	string _country;
	string _eduInstName;
	int _groupId;

	void SetData(
		const string& Name, 
		const string& Surname, 
		const string& DateOfBirth, 
		const int& PhoneNumber, 
		const string& Country, 
		const string& EduInstName, 
		const int& GroupId)
	{
		_name = Name;
		_surname = Surname;
		_dateOfBirth = DateOfBirth;
		_phoneNumber = PhoneNumber;
		_country = Country;
		_eduInstName = EduInstName;
		_groupId = GroupId;
	}//Можно было бы и написать для каждого поля отдельный метод

	void GetData() {
		if (_name == "" ||
			_surname == "" ||
			_dateOfBirth == "" ||
			_phoneNumber == NAN ||
			_country == "" ||
			_eduInstName == "" ||
			_groupId == NAN
			) {
			cout << "Ошибка: Введена пустая строка";
		}
		else {
			cout << "Имя: " << _name << "\nФамилия: " << _surname << "\nДата рождения:" << _dateOfBirth
				<< "\nНомер телефона" << _phoneNumber << "\nСтрана: " << _country << "Название учебного заведения"
				<< _eduInstName << "\nНомер группы:" << _groupId;
		}
	}//Можно было создать для всех отдельные методы
};

class dot {
public:
	double _x;
	double _y;
	double _z;

	void SetData(
		const double& X,
		const double& Y,
		const double& Z
	)
	{
		_x = X;
		_y = Y;
		_z = Z;
	}

	void GetData() {
		if (_x == NAN || _y == NAN || _z == NAN) {
			cout << "Введены пустые данные";
		}
		else {
			cout << "X:" << _x << "\nY:" << _y << "\nZ:";
		}
	}

	void FileTransfer() {
		ofstream newFile("coordinates.txt");
		if (newFile.is_open()) {
			newFile << "X:" << _x << " Y:" << _y << " Z:" << _z;
			newFile.close();
		}
	}
};

int main() {
	setlocale(LC_ALL, "RUS");
	dot newDot;
	newDot.SetData(1, 2, 3);
	newDot.FileTransfer();
	
}