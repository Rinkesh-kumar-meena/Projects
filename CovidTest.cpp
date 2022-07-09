#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;
void corona()
{
    cout << "corona positive" << endl;
}
void normal()
{
    cout << "normal" << endl;
}
void total_negative()
{
    cout << "corona negative" << endl;
}
int age, date, a;
char name[100], fathername[100], gender[40];
char b, c, d, e, f, g, h, i, j, k, l, y, ch;
char m, n, o, p, q, r, s, t, u, v, w, x, z;

void time_display()

{

    time_t timetoday;
    time(&timetoday);
    cout << asctime((localtime(&timetoday)));
}

int main()
{

    cout << "*********************" << endl;
    cout << "    C++ Project      " << endl;
    cout << "    Covid-19 Test     " << endl;
    cout << "***************" << endl;
    cout << endl;

    cout << "Please enter your personal information which is required" << endl
         << endl;

    cout << "*******************" << endl;
    cout << "*******************" << endl;

    cout << "       REPORT    " << endl;
    cout << "*******************" << endl;
    cout << "*******************" << endl;

    cout << "Patient name :" << endl;
    cin >> name;

    cout << "Father name :" << endl;
    cin >> fathername;

    cout << "gender :" << endl;
    cin >> gender;

    cout << "Age :" << endl;
    cin >> age;

    cout << "Enter 1 for Corona Test" << endl;

    cout << "Please enter your choice" << endl;
    cin >> a;
    cout << endl;
    if (a < 1 || a > 1)
    {
        cout << "invalid entry" << endl;

        cout << "Please enter valid choice" << endl;
    }

    else if (a == 1)
    {
        cout << "****************" << endl;
        cout << "COVID-19" << endl;
        cout << "********************" << endl;
        cout << "NOW WE START TEST" << endl;

        cout << "Please answer the following questions" << endl;
        cout << "With either 'yes' for y and 'no' for n" << endl;

        cout << "Does patient have a fever" << endl;
        cin >> b;
        cout << "Does patient have a fever from previous 1 week" << endl;

        cin >> c;
        cout << "Does patient have a headache" << endl;
        cin >> d;
        cout << "Does patient have a running nose" << endl;
        cin >> e;
        cout << "Does patient have a dry cough" << endl;
        cin >> f;
        cout << "Does patient have a body ache" << endl;

        cin >> g;
        cout << "Does patient loss of taste or smell" << endl;
        cin >> h;
        cout << "Does patient have a sore throat" << endl;
        cin >> i;
        cout << "Does patient feel difficulty in breathing or shortness of breathendl" << endl;
        cin >> j;
        cout << "Does patient feel chest pain or pressure" << endl;
        cin >> k;
    }
    cout << "***********************************************" << endl;
    cout << "***********************************************" << endl;
    cout << "name: " << name << endl;
    cout << "Father name: " << fathername << endl;
    cout << "Gender: " << gender << endl;
    cout << "Age: " << age << endl;

    if ((b == 'y') && (c == 'y') && (d == 'y') && (e == 'y') && (f == 'y') && (g == 'y') && (h == 'y') && (i == 'y') && (j == 'y') && (k == 'y'))

    {

        corona();
    }

    else if ((b == 'y') && (d == 'y') && (e == 'y') && (h == 'y'))
    {
        normal();
    }
    else if ((b == 'n') && (c == 'n') && (d == 'n') && (e == 'n') && (f == 'n') && (g == 'n') && (h == 'n') && (i == 'n') && (j == 'n') && (k == 'n'))

    {
        total_negative();
    }

    else
    {

        cout << "The patient have not any symptoms \n"
             << endl;
        cout << "It indicate that the patient is 'totaly negative case " << endl
             << endl;
        cout << "THANK YOU FOR USING THIS SYSTEM" << endl;
    }

    time_display();

    cout << "***********************************************" << endl;
    cout << "***********************************************" << endl;

    return 0;
}
