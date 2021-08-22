// algolancer c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define TABLEHEIGHT 10
using namespace std;

struct elem {
	string name;
	elem* next;
};

elem * table[TABLEHEIGHT];
void setNull() {
	for (int i = 0; i < 10; i++)
		table[i] = NULL;
}
void addElement() {
	string name;
	cout << "the name: "; cin >> name;
	int sum = 0, pos;
	for (int i = 0; i < name.length(); i++) {
		sum += name[i];
	}
	pos = sum % TABLEHEIGHT;
	elem* e = new elem();
	e->next = NULL;
	e->name = name;
	if (table[pos] == NULL)
		table[pos] = e;
	else {
		elem* e1;
		for (e1 = table[pos]; e1->next != NULL; e1 = e1->next);
		e1->next = e;
	}
}
void showTable() {
	elem *e;
	for (int i = 0; i < TABLEHEIGHT; i++) {
		cout << "table[" << i << "] : ";
		for (e = table[i]; e != NULL; e = e->next) {
			cout << e->name << " ";
		}
		cout << endl;
	}
}
int check(string nameToSearch) {
	int sum = 0, pos;
	for (int i = 0; i < nameToSearch.length(); i++) {
		sum += nameToSearch[i];
	}
	pos = sum % TABLEHEIGHT;
	int b = -1;
	elem* e;
	for (e = table[pos]; e != NULL; e = e->next) {
		if (e->name == nameToSearch) {
			b = pos;
			break;
		}
	}
	return b;
}
void deleteElement(string nametodelete, int pos) {
	elem* e, *e1;
	if (table[pos]->name == nametodelete) {
		e = table[pos];
		table[pos] = table[pos]->next;
		free(e);
	}
	else {
		for (e = table[pos]; e != NULL; e = e->next) {
			if (e->next->name == nametodelete) {
				e1 = e->next;
				e->next = e->next->next;
				free(e1);
				break;
			}
		}
	}
}
int main() {
	setNull();
	int option = 1;
	cout << "please choose option:\nto add element press 1\nto check element existance press 2\nto delete element press 3\nchoose one: ";
	cin >> option;
	while (option >= 1 && option <= 3) {
		switch (option) {
		case 1: {
			addElement();
		}break;
		case 2: {
			string nameToSearch = "";
			cout << "name to search: "; cin >> nameToSearch;
			int b = check(nameToSearch);
			if (b == -1)
				cout << "this name is not exists" << endl;
			else
				cout << "this name exists in the postition " << b << endl;
		}break;
		case 3: {
			string nametodelete;
			cout << "name to delete: "; cin >> nametodelete;
			int b = check(nametodelete);
			if (b == -1)
				cout << "this name is not exists" << endl;
			else {
				deleteElement(nametodelete, b);
			}
		}break;

		};
		showTable();
		cout << "-----------------------------------------------------\n";
		cout << "please choose option:\nto add element press 1\nto check element existance press 2\nto delete element press 3\nchoose one: ";
		cin >> option;
	}
	cout << "program ends";
}