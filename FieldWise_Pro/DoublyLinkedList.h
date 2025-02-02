#pragma once
#include "Node2.h"
#include <iostream>
#include <vector>

using namespace std;

class Doubly_Linked_List
{
private:
	Node2* Head;
	Node2* Tail;
	int size;

public:
	Doubly_Linked_List()
	{
		Head = NULL;
		Tail = NULL;
		size = 0;
	}

	void Insert_Passed_Students(int i, double g, string* c)
	{
		Node2* temp = new Node2(i, g, c);

		if (Head == NULL)
		{
			Head = temp;
			Tail = temp;
		}
		else
		{
			temp->next = Head;
			Head->prev = temp;
			Head = temp;

		}
		size++;
	}



	void Sort(int index)
	{
		Node2* current = Head;

		double* gpa_array = new double[size];

		for (int i = 0; i < 10; i++)
		{
			gpa_array[i] = current->gpa;
			current = current->next;
		}

		//Bubble Sort Algorithm

		for (int i = 0; i < size - 1; ++i) {
			for (int j = 0; j < size - 1 - i; ++j) {
				if (gpa_array[j] > gpa_array[j + 1]) {
					// Swap elements if they are in the wrong order
					double temp = gpa_array[j];
					gpa_array[j] = gpa_array[j + 1];
					gpa_array[j + 1] = temp;
				}
			}
		}

		Print_Sorted(gpa_array, index);
	}


	void Print_Sorted(double gpa_arr[], int index)
	{
		Node2* current2 = Head;

		int EE = 0;
		int ME = 0;
		int MENA = 0;
		int CEE = 0;
		int CE = 0;

		vector<int> EE_list;
		vector<int> ME_list;
		vector<int> MENA_list;
		vector<int> CEE_list;
		vector<int> CE_list;


		//to obtained department list

		for (int i = size - 1; i >= 0; i--)
		{
			for (int j = 0; j < size; j++)
			{
				if (current2->gpa == gpa_arr[i])
				{

					for (int k = 0; k < size; k++)
					{
						if (current2->choices[k] == "EE")
						{
							if (EE < 3)
							{
								EE_list.push_back(current2->index);
								EE++;
								break;
							}
						}
						if (current2->choices[k] == "ME")
						{
							if (ME < 2)
							{
								ME_list.push_back(current2->index);
								ME++;
								break;
							}
						}
						if (current2->choices[k] == "MENA")
						{
							if (MENA < 1)
							{
								MENA_list.push_back(current2->index);
								MENA++;
								break;
							}
						}
						if (current2->choices[k] == "CEE")
						{
							if (CEE < 3)
							{
								CEE_list.push_back(current2->index);
								CEE++;
								break;
							}
						}
						if (current2->choices[k] == "CE")
						{
							if (CE < 1)
							{
								CE_list.push_back(current2->index);
								CE++;
								break;
							}
						}
					}
					current2->gpa = 0;
					break;

				}
				else
				{
					current2 = current2->next;
				}
			}
			current2 = Head;

		}


		size_t maxSize = std::max({ EE_list.size(), ME_list.size(), MENA_list.size(), CEE_list.size(), CE_list.size() });


		cout << endl << "CONGRATULATIONS!!!" << endl << "Your are Selected to : ";

		for (int i = 0; i < 3; i++)
		{
			if (EE_list[i] == index)
			{
				cout << "Electrical & Information Engineering" << endl << endl;
				break;
			}

		}
		for (int i = 0; i < 2; i++)
		{
			if (ME_list[i] == index)
			{
				cout << "Mechanical & Manufacturing Engineering" << endl << endl;
				break;
			}

		}

		for (int i = 0; i < 1; i++)
		{
			if (MENA_list[i] == index)
			{
				cout << "Marine Engineering and Naval Architecture" << endl << endl;
				break;
			}

		}
		for (int i = 0; i < 3; i++)
		{
			if (CEE_list[i] == index)
			{
				cout << "Civil & Environmental Engineering" << endl << endl;
				break;
			}

		}
		for (int i = 0; i < 1; i++)
		{
			if (CE_list[i] == index)
			{
				cout << "Computer Engineering" << endl << endl;
				break;
			}

		}




		cout << "====================================" << endl;
		cout << endl << "EE" << "\t" << "ME" << "\t" << "MENA" << "\t" << "CEE" << "\t" << "CE" << "\t" << endl;
		for (size_t i = 0; i < maxSize; ++i) {
			// Use a conditional statement to check if the index is within the bounds of each vector


			cout << (i < EE_list.size() ? std::to_string(EE_list[i]) : "") << "\t"
				<< (i < ME_list.size() ? std::to_string(ME_list[i]) : "") << "\t"
				<< (i < MENA_list.size() ? std::to_string(MENA_list[i]) : "") << "\t"
				<< (i < CEE_list.size() ? std::to_string(CEE_list[i]) : "") << "\t"
				<< (i < CE_list.size() ? std::to_string(CE_list[i]) : "") << "\n";
		}
		cout << "===================================="<<endl;
	}



};




