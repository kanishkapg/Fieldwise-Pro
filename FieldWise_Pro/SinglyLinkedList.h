#pragma once
#include "Node.h"
#include <iostream>
#include <cstdlib>

using namespace std;

class SinglyLinkedList
{
private:
	Node* Head;
	Node* Tail;
	int size;

public:
	SinglyLinkedList()
	{
		Head = NULL;
		Tail = NULL;
		size = 0;
	}

	void InsertStudent(int index, double* Sem1, double* Sem2)
	{
		Node* temp = new Node(index,Sem1,Sem2);

		if (Head == NULL)
		{
			Head = temp;
			Tail = temp;
		}
		else
		{
			temp->next = Head;
			Head = temp;

		}
		size++;
	}

	double Calculate_GPA() {
		Node* current = Head;
		

		int sem1Credits [8] = {1,2,1,3,2,2,4,3};
		int sem2Credits [7] = {2,3,2,2,2,3,4};

		double Sem1GPA = 0;
		double Sem2GPA = 0;
	
		
		for (int i = 0; i < 8; i++)
		{
			Sem1GPA = Sem1GPA + (current->sem1[i] * sem1Credits[i]);
		}
		for (int i = 0; i < 7; i++)
		{
			Sem2GPA = Sem2GPA + (current->sem2[i] * sem2Credits[i]);
		}

		cout << "=====================================" << endl;
		cout <<  "Your GPA : ";
		cout << (Sem1GPA + Sem2GPA)/36 << endl;
		cout << "=====================================" << endl;
		return (Sem1GPA + Sem2GPA) / 36;
	}

	int Eligibily_Next_Year()
	{
		Node* current = Head;
		

		int sem1Credits[8] = { 1,2,1,3,2,2,4,3 };
		int sem2Credits[7] = { 2,3,2,2,2,3,4 };

		int Total_credits = 36;

		for (int i = 0; i < 8; i++)
		{
			if (current->sem1[i] == 0)
			{
				Total_credits -= sem1Credits[i];
			}
		}
		for (int i = 0; i < 7; i++)
		{
		
			if (current->sem2[i] == 0)
			{
				Total_credits -= sem1Credits[i];
			}
		}

		return Total_credits;
	}
};

