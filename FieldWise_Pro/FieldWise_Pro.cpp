
#include <iostream>
#include <cstdlib>
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"


using namespace std;
int main()
{
    int index;
    double Sem1results[8];
    double Sem2results[7];
    string Choices[5];
    double gpa;

    string temp1[5] = { "MENA","ME","EE","CEE","CE" };
    string temp2[5] = { "EE","ME","MENA","CEE","CE" };
    string temp3[5] = { "ME","EE","MENA","CEE","CE" };
    string temp4[5] = { "CEE","ME","MENA","EE","CE" };
    string temp5[5] = { "EE","ME","MENA","CEE","CE" };
    string temp6[5] = { "EE","ME","MENA","CEE","CE" };
    string temp7[5] = { "ME","CE","MENA","CEE","EE" };
    string temp8[5] = { "EE","CE","MENA","CEE","ME" };
    string temp9[5] = { "EE","ME","MENA","CEE","CE" };
    string temp10[5] = { "EE","ME","MENA","CEE","CE" };
   
    cout << "                                       $$$$$$$$\\ $$$$$$\\ $$$$$$$$\\ $$\\       $$$$$$$\\  $$\\      $$\\ $$$$$$\\  $$$$$$\\  $$$$$$$$\\       $$$$$$$\\  $$$$$$$\\   $$$$$$\\  " << endl;
    cout << "                                       $$  _____|\\_$$  _|$$  _____|$$ |      $$  __$$\\ $$ | $\\  $$ |\\_$$  _|$$  __$$\\ $$  _____|      $$  __$$\\ $$  __$$\\ $$  __$$\\ " << endl;
    cout << "                                       $$ |        $$ |  $$ |      $$ |      $$ |  $$ |$$ |$$$\\ $$ |  $$ |  $$ /  \\__|$$ |            $$ |  $$ |$$ |  $$ |$$ /  $$ |" << endl;
    cout << "                                       $$$$$\      $$ |  $$$$$\\    $$ |      $$ |  $$ |$$ $$ $$\\$$ |  $$ |  \\$$$$$$\\  $$$$$\\          $$$$$$$  |$$$$$$$  |$$ |  $$ |" << endl;
    cout << "                                       $$  __|     $$ |  $$  __|   $$ |      $$ |  $$ |$$$$  _$$$$ |  $$ |   \\____$$\\ $$  __|         $$  ____/ $$  __$$< $$ |  $$ |" << endl;
    cout << "                                       $$ |        $$ |  $$ |      $$ |      $$ |  $$ |$$$  / \\$$$ |  $$ |  $$\\   $$ |$$ |            $$ |      $$ |  $$ |$$ |  $$ |" << endl;
    cout << "                                       $$ |      $$$$$$\\ $$$$$$$$\\ $$$$$$$$\\ $$$$$$$  |$$  /   \\$$ |$$$$$$\\ \\$$$$$$  |$$$$$$$$\\       $$ |      $$ |  $$ | $$$$$$  |" << endl;
    cout << "                                       \\__|      \\______|\\________|\\________|\\_______/ \\__/     \\__|\\______| \\______/ \\________|      \\__|      \\__|  \\__| \\______/ " << endl;
    cout << endl;


  
    cout << "Enter Your Registration number:";
    cin >> index;
    cout << endl;
    cout << "=====================================================" << endl << endl;
    cout << "Enter Your Semester 1 results in following order:" << endl << endl;
    cout << "=====================================================" << endl;
    cout << "  CE1101 Basic Concepts of Environmental Engineering  " << endl <<
        "  CE1202 Introduction to Infrastructure Planning           " << endl <<
        "  EE1101 Computer Programming I                           " << endl <<
        "  EE1302 Introduction to Electrical Engineering           " << endl <<
        "  ME1201 Introduction to Mechanical Engineering   " << endl <<
        "  ME1202 Drawing                                  " << endl <<
        "  IS1402 Mathematical Fundamental for Engineers   " << endl <<
        "  IS1302 Communication for Engineers              " << endl;
    cout << "====================================================" << endl;
    cout << endl;
    cout << " |A+ : 4  |\t|A :  4  |\n |-A : 3.7|\t|B+ : 3.3|\n |B  : 3.0|\t|B- : 2.7|\n |C+ : 2.3|\t|C  : 2.0|\n |C- : 1.7|\t|E  : 0  |";
    cout << endl;

    for(int i = 0; i < 8; i++)
    {
        cout << endl << "Module[" << i + 1 << "] : ";
        cin >> Sem1results[i];
    }


    cout << "=====================================================" << endl;
    cout << "  CE2201 Fundamental of Fluid Mechanics" << endl <<
        "  CE2302 Mechanics of Material" << endl <<
        "  EE2201 Computer Programming II" << endl <<
        "  EE2202 Introduction to Electronic Engineering" << endl <<
        "  ME2201 Fundamental of Engineering Thermodynamics" << endl <<
        "  ME2302 Introduction to Materials Science" << endl <<
        "  IS2401 Linear Algebra and Differential Equations" << endl;
    cout << "======================================================" << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << endl << "Module[" << i + 1 << "] : ";
        cin >> Sem2results[i];
    }

    SinglyLinkedList list;
    list.InsertStudent(index, Sem1results, Sem2results);
    gpa = list.Calculate_GPA();
    int total_earned_credits = list.Eligibily_Next_Year();

    if (total_earned_credits > 25)
    {
        cout << "Congratulations! now you can select your preferred fields." << endl<<endl;
        cout << endl;
        cout << "==============================================================================================" << endl;
        cout << "  _    _   _          _   ___         _        ___     __   _       _   _  ___  ___   _        " << endl;
        cout << " | \\  |_  |_)   /\\   |_)   |   |\\/|  |_  |\\ |   |     (_   |_  |   |_  /    |    |   / \\  |\\ | " << endl;
        cout << " |_/  |_  |    /--\\  | \\   |   |  |  |_  | \\|   |     __)  |_  |_  |_  \\_   |   _|_  \\_/  | \\| " << endl;
        cout << " " << endl;
        cout << "===============================================================================================" << endl;
        cout << endl;
        cout << "Enter the relevant keyword for department (eg:- Enter the first choice : CE )" << endl;
        cout << "\tCE   - Computer Engineering" << endl;
        cout << "\tEE   - Electrical Engineering" << endl;
        cout << "\tME   - Mechanical Engineering" << endl;
        cout << "\tCEE  - Civil and Environmental Engineering" << endl;
        cout << "\tMENA - Marine and Naval Architecture" << endl;
        cout << endl;


        for (int i = 0; i < 5; i++)
        {
            cout << "Enter Choice[" << i+1 << "] : ";
            cin >> Choices[i];
        }
        
    }
    else
    {
        
        cout << endl << "Sorry! You are Batch Missed." << endl;
       
    }
    cout << endl;


    Doubly_Linked_List student;

    student.Insert_Passed_Students(4502, 4.0, temp1);
    student.Insert_Passed_Students(4503, 3.9, temp2);
    student.Insert_Passed_Students(4504, 3.8, temp3);
    student.Insert_Passed_Students(4505, 3.7, temp4);
    student.Insert_Passed_Students(4506, 3.6, temp5);
    student.Insert_Passed_Students(4600, 3.5, temp6);
    student.Insert_Passed_Students(4700, 3.4, temp7);
    student.Insert_Passed_Students(4800, 3.3, temp8);
    student.Insert_Passed_Students(4250, 3.2, temp9);
    student.Insert_Passed_Students(index, gpa, Choices);

    student.Sort(index); 
}

