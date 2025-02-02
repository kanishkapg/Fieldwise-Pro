#pragma once
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Node2
{
public:
	int index;
	double gpa;
	string* choices = new string[5];

	Node2* next;
	Node2* prev;


	Node2()
	{
		index = 0;
		gpa = 0;
	}

	Node2(int i,double g, string* c)
	{
		index = i;
		gpa = g;
		choices = c;
		
	}
};

