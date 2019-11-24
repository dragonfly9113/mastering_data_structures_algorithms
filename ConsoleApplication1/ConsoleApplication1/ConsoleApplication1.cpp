// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Rectangle {
	int length;
	int breadth;
};


struct Point {
	int x;
	int y;
};

struct Complex {
	int real;
	int img;
};

struct Student {
	int roll;
	char name[25];
	char dep[10];
	char address[50];
};


int main(int argc, char* argv[]) {

	int A[5];

	int B[] = { 2, 4, 6, 8, 10 };

	char name[25] = "Mike";

	for (int i = 0; i < 5; i++) {

		printf("B[%d] = %d\n", i, B[i]);

	}

	struct Rectangle r = { 10, 5 };
	struct Point p;
	struct Student s;
	s.roll = 10;
	strcpy_s(s.name, "John Doe");

	printf("%d %d\n", r.length, r.breadth);
	printf("Area of Rectangle is %d\n", r.length * r.breadth);

	printf("name = %s\n", s.name);

	return 0;
}
