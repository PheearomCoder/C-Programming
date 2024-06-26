#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<iomanip>
#include<conio.h>
using namespace std;
class Person
{
    protected:
        int code;
        char name[100], sex[100], dob[100];
    public:
        int getCode() { return code; }
        char getName() { return name[100]; }
        void Input()
        {
            cout << "Enter ID : "; cin >> code;
            cout << "Enter Name : "; cin.ignore();cin.getline(name, 100);
            cout << "Enter Sex : "; cin.getline(sex, 100);
            cout << "Enter DOB : "; cin.getline(dob, 100);
        }
        void Output()
        {
            cout << "\t\t\t\t\tID : " << code <<endl;
            cout << "\t\t\t\t\tName : " << name <<endl;
            cout << "\t\t\t\t\tSex : " << sex <<endl;
            cout << "\t\t\t\t\tDOB : " << dob <<endl;
        }
};
class Employee:public Person 
{
    private:
        float rate, salary;
        double total_of_salary;
    public:
        double getTotal() { return total_of_salary; }
        void Input()
        {
            Person::Input();
            cout << "Enter Salary : ";
            cin >> salary;
            cout << "Enter rate : ";
            cin >> rate;
            total_of_salary = salary * rate;
            cout << "-------------------------------" << endl;
    }
    void Output()
    {
        Person::Output();
        cout << "\t\t\t\t\t===========================" << endl;
        cout << "\t\t\t\t\t"<< "Salary" << setw(10) << "Rate" << setw(10) << "Total" << endl;
        cout << "\t\t\t\t\t"<< "------" << setw(10) << "----" << setw(10) << "-----" << endl;
        cout << "\t\t\t\t\t" << salary << setw(12) << rate << setw(12) << total_of_salary << endl;
        cout << "\t\t\t\t\t===========================" << endl;
    }
};
class Student:public Person 
{
    private:
        float score1,score2,score3,score4;
        double total,avg;
    public:
    double getAvg() { return avg; }
    void Input()
    {
        Person::Input();
        cout << "Enter C Pro score : "; cin >> score1;
        cout << "Enter C ++ score : "; cin >> score2;
        cout << "Enter Java score : "; cin >> score3;
        cout << "Enter Flutter score : "; cin >> score4;
        total = score1 + score2 + score3 + score4;
        avg = total / 4;
        cout << "-------------------------------" << endl;
    }
    void Output()
    {
        Person::Output();
        cout << "\t\t\t\t\tC Programming : " << score1 << endl;
        cout << "\t\t\t\t\tC Plus Plus : " << score2 << endl;
        cout << "\t\t\t\t\tJava : " << score3 << endl;
        cout << "\t\t\t\t\tFlutter : " << score4 << endl;
        cout << "\t\t\t\t\tTotal : " << total << endl;
        cout << "\t\t\t\t\tAverage : " << avg << endl;
    }
};
int main()
{
    int i, j, n,Choice;
    system("cls");
    cout << "\t\t\t\t\t----------------------------------------------" << endl;
    cout << "\t\t\t\t\t|        Student and Employee SYSTEM         |" << endl;
    cout << "\t\t\t\t\t----------------------------------------------" << endl;
    cout << "\n\t\t\t\t\t1.The Information of Student.(Object Array)" << endl;
    cout << "\t\t\t\t\t2.The Information of Employee.(Object Pointer)" << endl;
    cout << "\n\t\t\t\t\t----------------------------------------------" << endl;
    do
    {
        cout << "\n\t\t\t\t\tLet's choose one (1/2) --> ";
        cin >> Choice;
        switch(Choice)
        {
            case 1 :
            {
                Student  Stu[100];
                system("cls");
                int Menu;
                cout << "\t\t\t\t\t----------------------------------------" << endl;
                cout << "\t\t\t\t\t|      Student Managerment System      |" << endl;
                cout << "\t\t\t\t\t----------------------------------------" << endl;
                cout << "\n\t\t\t\t\t\t1.Input the Information." << endl;
                cout << "\t\t\t\t\t\t2.Output the Information." << endl;
                cout << "\t\t\t\t\t\t3.Search the Information." << endl;
                cout << "\t\t\t\t\t\t4.Sort the Information." << endl;
                cout << "\t\t\t\t\t\t5.Update the Information." << endl;
                cout << "\t\t\t\t\t\t6.Delete the Information." << endl;
                cout << "\t\t\t\t\t\t7.Insert the Information." << endl;
                cout << "\n\t\t\t\t\t----------------------------------------" << endl;
                do
                {
                    cout << "\n\n\t\t\t\t\tLet's choose one (1/2/3/4/5/6/7.) --> ";
                    cin >> Menu;
                    switch(Menu)
                    {
                        case 1 :
                        {
                            cout << "How many Student : ";
                            cin >> n;
                            for (i = 0; i < n;i++)
                            {
                                cout << "\t\tStudent[" << i + 1 << "]" << endl;
                                Stu[i].Input();
                            }
                        }
                        break;
                        case 2 :
                        {
                            system("cls");
                            cout << "\t\t\t\t\tOutput the list of Student." << endl;
                            cout << "\t\t\t\t\t---------------------------" << endl;
                            for (i = 0; i < n;i++)
                            {
                                Stu[i].Output();
                                cout << "\n\n"<< endl;
                            }
                        }
                        break;
                        case 3 :
                        {
                            system("cls");
                            int Search_Code, Found_Search = 0;
                            cout << "Which Code that you wanna Search Now : ";
                            cin >> Search_Code;
                            cout << "----------------------------------------------" << endl;
                            for (i = 0;i<n;i++)
                            {
                                if(Stu[i].getCode()==Search_Code)
                                {
                                    cout << "\n\n" << endl;
                                    cout << "\t\t\t\t\tSearching Result!" << endl;
                                    cout << "\t\t\t\t\t-----------------" << endl;
                                    Stu[i].Output();
                                    Found_Search = 1;
                                    cout << "\n\t\t\t\t\t\t-------------------------" << endl;
                                    cout << "\t\t\t\t\t\t| Successful Searching! |" << endl;
                                    cout << "\t\t\t\t\t\t-------------------------" << endl;
                                }
                            }
                            if(Found_Search==0)
                            {
                                cout << "\n\t\t\t\t\t\t--------------------------" << endl;
                                cout << "\t\t\t\t\t\t|  No record information |" << endl;
                                cout << "\t\t\t\t\t\t--------------------------" << endl;
                            }
                        }
                        break;
                        case 4 :
                        {
                            system("cls");
                            Student temp;
                            for (i = 0; i < n;i++)
                            {
                                for (j = i + 1; j < n;j++)
                                {
                                    if(Stu[i].getName()<Stu[j].getName())
                                    {
                                        temp = Stu[i];
                                        Stu[i] = Stu[j];
                                        Stu[j] = temp;
                                    }
                                }
                            }
                            cout << "\t\t\t\t\tOutput after Sorted!" << endl;
                            cout << "\t\t\t\t\t--------------------" << endl;
                            for (i = 0; i < n;i++)
                            {
                                Stu[i].Output();
                                cout << "\n\n"<< endl;
                            }
                        }
                        break;
                        case 5 :
                        {
                            system("cls");
                            int Update_ID, Found_Update = 0;
                            cout << "Which Code that you wanna Search Now : ";
                            cin >> Update_ID;
                            cout << "----------------------------------------------" << endl;
                            for (i = 0;i<n;i++)
                            {
                                if(Stu[i].getCode()==Update_ID)
                                {
                                    Stu[i].Input();
                                    Found_Update = 1;
                                    cout << "\n\t\t\t\t\t\t-------------------------" << endl;
                                    cout << "\t\t\t\t\t\t| Successful Updating! |" << endl;
                                    cout << "\t\t\t\t\t\t-------------------------" << endl;
                                }
                            }
                            if(Found_Update==0)
                            {
                                cout << "\n\t\t\t\t\t\t------------------------------------" << endl;
                                cout << "\t\t\t\t\t\t|  Can't use this ID for Updating. |" << endl;
                                cout << "\t\t\t\t\t\t------------------------------------" << endl;
                            }
                        }
                        case 6 :
                        {
                            system("cls");
                            double Delete_Avg;
                            int Found_Delete = 0;
                            cout << "Which Average that you wanna Delete : ";
                            cin >> Delete_Avg;
                            for (i = 0; i < n;i++)
                            {
                                if(Stu[i].getAvg()==Delete_Avg)
                                {
                                    for (j = i; j < n;j++)
                                    {
                                        Stu[j] = Stu[j + 1];
                                        n--;
                                    }
                                Found_Delete = 1;
                                cout << "\n\t\t\t\t\t\t-------------------------" << endl;
                                cout << "\t\t\t\t\t\t|   Delete Completely!  |" << endl;
                                cout << "\t\t\t\t\t\t-------------------------" << endl;
                                }
                            }
                            if(Found_Delete==0)
                            {
                                cout << "\n\t\t\t\t\t\t-----------------------------" << endl;
                                cout << "\t\t\t\t\t\t|   Delete Not Completely!  |" << endl;
                                cout << "\t\t\t\t\t\t-----------------------------" << endl;
                            }
                        }
                        break;
                        case 7 :
                        {
                            system("cls");
                            int pos;
                            cout << "Which Position that you wanna Insert : ";
                            cin >> pos;
                            for (i = n; i >= pos;i--)
                                Stu[i] = Stu[i - 1];
                            i = pos - 1;
                            Stu[i].Input();
                            n = n + 1;
                        }
                        break;
                        default :
                            exit(0);
                    }
                } while (Menu!=0);
            }
            break;
            case 2 :
            {
                system("cls");
                int Option;
                Employee *Emp;
                cout << "\t\t\t\t\t----------------------------------------" << endl;
                cout << "\t\t\t\t\t|      Employee Managerment System     |" << endl;
                cout << "\t\t\t\t\t----------------------------------------" << endl;
                cout << "\n\t\t\t\t\t\t1.Input the Information." << endl;
                cout << "\t\t\t\t\t\t2.Output the Information." << endl;
                cout << "\t\t\t\t\t\t3.Sort the Information." << endl;
                cout << "\t\t\t\t\t\t4.Update the Information." << endl;
                cout << "\t\t\t\t\t\t5.Delete the Information." << endl;
                cout << "\t\t\t\t\t\t6.Search the Information." << endl;
                cout << "\t\t\t\t\t\t7.Insert the Information." << endl;
                cout << "\n\t\t\t\t\t----------------------------------------" << endl;
                do
                {
                    cout << "\t\t\t\t\tLet's choose one (1/2) --> ";
                    cin >> Option;
                    switch(Option)
                    {
                        case 1 :
                        {
                            cout << "How many Employee : ";
                            cin >> n;
                            Emp = (Employee *)calloc(n, sizeof(Employee));
                            for (i = 0; i < n;i++)
                            {
                                cout << "\t\tEmployee[" << i + 1 << "]" << endl;
                                (Emp + i)->Input();
                            }
                        }
                        break;
                        case 2 :
                        {
                            system("cls");
                            cout << "\t\t\t\t\tOutput the list of Employee." << endl;
                            cout << "\t\t\t\t\t----------------------------" << endl;
                            for (i = 0; i < n;i++)
                            {
                                (Emp + i)->Output();
                                cout << "\n\n"<< endl;
                            }
                        }
                        break;
                        case 3 :
                        {
                            system("cls");
                            Employee *temp;
                            temp = (Employee *)malloc(sizeof(Employee));
                            for (i = 0; i < n;i++)
                            {
                                for (j = i + 1; j < n;j++)
                                {
                                    if((Emp+i)->getTotal()<(Emp+j)->getTotal())
                                    {
                                        *temp = *(Emp+i);
                                        *(Emp+i) = *(Emp+j);
                                        *(Emp+j) = *temp;
                                    }
                                }
                           }
                            cout << "\t\t\t\t\tOutput after Sorted!" << endl;
                            cout << "\t\t\t\t\t--------------------" << endl;
                            for (i = 0; i < n;i++)
                            {
                                (Emp + i)->Output();
                                cout << "\n\n"<< endl;
                            }
                        }
                        break;
                        case 4 :
                        {
                            system("cls");
                            int UpID,Found_Update=-1;
                            cout << "Which ID that you use for Update : ";
                            cin >> UpID;
                            for (i = 0; i < n;i++)
                            {
                                if(UpID==(Emp+i)->getCode())
                                {
                                    (Emp + i)->Input();
                                    Found_Update = i;
                                    cout << "\n\t\t\t\t\t\t-------------------------" << endl;
                                    cout << "\t\t\t\t\t\t|  Successful Updating! |" << endl;
                                    cout << "\t\t\t\t\t\t-------------------------" << endl;
                                }
                            }
                            if(Found_Update==-1)
                            {
                                cout << "\n\t\t\t\t\t\t------------------------" << endl;
                                cout << "\t\t\t\t\t\t|    Wrong Updating!   |" << endl;
                                cout << "\t\t\t\t\t\t------------------------" << endl;
                            }
                        }
                        break;
                        case 5 :
                        {
                            system("cls");
                            int Delete_ID,Found_Delete = -1;
                            cout << "Which ID that you wanna delete the information : ";
                            cin >> Delete_ID;
                            for (i = 0; i < n;i++)
                            {
                                if(Delete_ID==(Emp+i)->getCode())
                                {
                                    for (j = i; j < n;j++)
                                    {
                                        *(Emp + j) = *(Emp + (j + i));
                                        n = n - 1;
                                    }
                                Found_Delete = i;
                                cout << "\n\t\t\t\t\t\t-------------------------" << endl;
                                cout << "\t\t\t\t\t\t|   Delete Completely!  |" << endl;
                                cout << "\t\t\t\t\t\t-------------------------" << endl;
                                }
                            }
                            if(Found_Delete==-1)
                            {
                                cout << "\n\t\t\t\t\t\t-----------------------------" << endl;
                                cout << "\t\t\t\t\t\t|   Delete Not Completely!  |" << endl;
                                cout << "\t\t\t\t\t\t-----------------------------" << endl;
                            }
                        }
                        break;
                        case 6 :
                        {
                            system("cls");
                            int Search_ID, Found_ID = -1;
                            cout << "Which ID that you wanna search the information : ";
                            cin >> Search_ID;
                            for (i = 0; i<n;i++)
                            {
                                if(Search_ID==(Emp+i)->getCode())
                                {
                                    (Emp + i)->Output();
                                    Found_ID = i;
                                    cout << "\n\t\t\t\t\t\t-------------------------" << endl;
                                    cout << "\t\t\t\t\t\t| Successful Searching! |" << endl;
                                    cout << "\t\t\t\t\t\t-------------------------" << endl;
                                }
                            }
                            if(Found_ID==-1)
                            {
                                cout << "\n\t\t\t\t\t\t--------------------------" << endl;
                                cout << "\t\t\t\t\t\t|  No record information |" << endl;
                                cout << "\t\t\t\t\t\t--------------------------" << endl;
                            }
                        }
                        break;
                        case 7 :
                        {
                            system("cls");
                            int pos;
                            cout << "Which Position that you wanna Insert : ";
                            cin >> pos;
                            if(pos>n)
                            {
                                cout << "\n\t\t\t\t\t\t---------------------------------------------------------------------" << endl;
                                cout << "\t\t\t\t\t\t| How can you insert you if enter thhe position bigger that N term! |" << endl;
                                cout << "\t\t\t\t\t\t---------------------------------------------------------------------" << endl;
                            }
                            else
                            {
                                for (i = n; i >= pos;i--)
                                    *(Emp+i) = *(Emp+(i-1));
                                i = pos - 1;
                                (Emp+i)->Input();
                                n = n + 1;
                                cout << "\n\t\t\t\t\t\t--------------------------" << endl;
                                cout << "\t\t\t\t\t\t|  Succuessful Insert!!  |" << endl;
                                cout << "\t\t\t\t\t\t--------------------------" << endl;
                            }
                        }
                        break;
                    }
                } while (1);
                
            }
            break;
        }
        getch();
    } while (1);
    
}
