/*
	C++ Program that creates a stack and implement basic
	stack operations i.e push, pop ...
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

#define max 1000

using namespace std;

class Stack
{
public:
	void push(int data) {
		if (top >= max - 1) {
			cout << "Stack Overflow";
		}
		else {
			top++;
			arr[top] = data;
		}
	}

	void pop() {
		if (top <= - 1) {
			cout << "Stack Underflow";
		}
		else {
			cout << "Popped Value: " << arr[top] << endl;
			top--;
		}
	}

	void display() {
		if (top >= 0) {
			cout << "Stack elements are: ";
			for (int i = top; i >= 0; i--)
				cout << arr[i] << " ";
			cout << endl;
		}
		else
			cout << "Stack is empty";
	}

private:
	int arr[max];
	int top = -1;
};

int main() {
	int ch, val;
	Stack stack;
	cout << "Program to Demostrate Stack Operations";
	cout << endl << "----------------------------------------------" << endl;
	cout << "1) Push in stack";
	cout << "\t\t2) Pop from stack" << endl;
	cout << "3) Display stack";
	cout << "\t\t4) Exit" << endl;
	do {
		cout << endl << "----------------------------------------------" << endl;
		cout << "Enter choice: ";
		cin >> ch;
		switch (ch) {
		case 1: {
			cout << endl << "----------------------------------------------" << endl;
			cout << "Enter value to be pushed: ";
			cin >> val;
			stack.push(val);
			break;
		}
		case 2: {
			cout << endl << "----------------------------------------------" << endl;
			stack.pop();
			break;
		}
		case 3: {
			cout << endl << "----------------------------------------------" << endl;
			stack.display();
			break;
		}
		case 4: {
			cout << endl << "----------------------------------------------" << endl;
			cout << "Exit" << endl;
			break;
		}
		default: {
			cout << endl << endl << "----------------------------------------------" << endl << endl;
			cout << "Invalid Choice" << endl;
		}
		}
	} while (ch != 4);

	system("pause");
	return 0;
}
