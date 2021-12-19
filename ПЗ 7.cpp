#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

struct Students {
	string first_name;
	string surname;
	string patronomic;
	struct {
		int day;
		int mounth;
		int year;
	}birth_date;
	double average_grade;
	string faculty;
	string speciality;
}stud[100];

struct Students buff;

enum myChoice {
	ENTER = 1,
	PRINT = 2,
	SORT = 3,
	MOSTCOMMON = 4,
	AVGAGE = 5,
	EXIT = 6
};
void printStruct();
void enterStruct();
void sortStruct();
void findTheMostCommonName();
void findAverageAge();
int countAge();
int InputInt();
double InputDouble();
int menu();

int counter;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	counter = 0;
	while (true) {
		switch (menu())
		{
		case ENTER:
			enterStruct();
			break;
		case PRINT:
			printStruct();
			break;
		case SORT:
			sortStruct();
			break;
		case MOSTCOMMON:
			findTheMostCommonName();
			break;
		case AVGAGE:
			findAverageAge();
			break;
		case EXIT:
			return 0;
		default:
			cout << "ERROR" << endl;
			break;
		}
	}
}

int menu() {
	cout << "1)Ввод данных" << endl;
	cout << "2)Вывод данных" << endl;
	cout << "3)Сортировка" << endl;
	cout << "4)Поиск самого распространённого имени" << endl;
	cout << "5)Средний возраст" << endl;
	cout << "6)Выход" << endl;
	cout << "Ваш выбор?" << endl;
	int choice = InputInt();
	return choice;
}

int InputInt() {
	int a;
	while (!(cin >> a) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Ошибка!" << endl;
	}
	return a;
}

double InputDouble() {
	double a;
	while (!(cin >> a) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Ошибка!" << endl;
	}
	return a;
}

void enterStruct() {
	cout << "Сколько вы вхотите ввести студентов?" << endl;
	int x = InputInt();
	for (int i = counter; x > 0; i++, x--)
	{
		system("cls");
		cout << "Введите фамилию" << endl;
		cin >> stud[i].surname;
		system("cls");
		cout << "Введите имя" << endl;
		cin >> stud[i].first_name;
		system("cls");
		cout << "Введите отчество" << endl;
		cin >> stud[i].patronomic;
		system("cls");
		cout << "Введите факультет" << endl;
		rewind(stdin);
		getline(cin, stud[i].faculty);//ввод строки чтобы считывалась строка с пробелами(если пользоваться просто cin и ввести строку с пробелами, то считается только перое слово до пробела) 
		system("cls");
		cout << "Введите специальность" << endl;
		rewind(stdin);
		getline(cin, stud[i].speciality);
		system("cls");
		cout << "Введите средний балл студента" << endl;
		rewind(stdin);
		stud[i].average_grade = InputDouble();
		system("cls");
		cout << "Введите дату дня рождения" << endl;
		cout << "Год: ";
		stud[i].birth_date.year = InputInt();
		cout << "Месяц: ";
		stud[i].birth_date.mounth = InputInt();
		cout << "День: ";
		stud[i].birth_date.day = InputInt();
		counter++;
		system("cls");
		int choice = 0;
		cout << "Продолжить ввод?(1-ДА||2-НЕТ)" << endl;
		while (choice != 1 && choice != 2) {
			choice = InputInt();
		}
		if (choice == 2) {
			x = 0;
		}
		system("cls");
	}
}

void sortStruct()
{
	cout << "Сортировка Студентов по фамилии" << endl;
	for (int i = 0; i < counter; i++) {
		for (int j = 0; j < counter - 1; j++) {
			if (stud[j].average_grade > stud[j + 1].average_grade) {
				buff = stud[j]; // создали дополнительную переменную
				stud[j] = stud[j + 1]; // меняем местами
				stud[j + 1] = buff; // значения элементов
			}
		}
	}
}

void findTheMostCommonName()
{
	string buff, mostCommon;
	int maxCount = 0, count = 0;
	for (int i = 0; i < counter; i++)
	{
		buff = stud[i].first_name;
		for (int j = i; j < counter; j++)
		{
			if (stud[i].first_name == stud[j].first_name) {
				count++;
				if (count > maxCount) {
					mostCommon = buff;
				}
			}
		}
	}
	cout << "Самое распространнённое имя: " << mostCommon << endl;
	system("pause");
}


void findAverageAge()
{
	double AvgAge = 0;
	for (int i = 0; i < counter; i++)
	{
		//AvgAge+=countAge(stud[i].birth_date.year, stud[i].birth_date.mounth, stud[i].birth_date.day);
		AvgAge += (2021 - stud[i].birth_date.year);
	}
	AvgAge /= counter;
	cout << "Средний возраст студентов: " << AvgAge << endl;
	system("pause");
}

int countAge(int year, int mounth, int day) {
	return 0;
}

void printStruct() {
	if (counter)
	{
		for (int i = 0; i < counter; i++)
		{
			cout << stud[i].surname << " " << stud[i].first_name[0] << ". " << stud[i].patronomic[0] << "." << stud[i].birth_date.year << "." << stud[i].birth_date.mounth << "." << stud[i].birth_date.day << ", " << stud[i].faculty << ", " << stud[i].speciality << ", " << stud[i].average_grade << endl;
		}
	}
	else
	{
		cout << "Студентов нет." << endl;
	}
	system("pause");
}