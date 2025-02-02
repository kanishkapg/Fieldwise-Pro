#pragma once
class Node
{
public:
	int index;
	double* sem1 = new double[8];
	double* sem2 = new double[7];
	Node* next;



	Node(int ele,double* Sem1,double* Sem2)
	{
		index = ele;
		sem1 = Sem1;
		sem2 = Sem2;
	}
};

