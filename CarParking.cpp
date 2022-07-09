#include <iostream>
using namespace std;

int main()
{

    int c = 0;
    int r = 0;
    int b = 0;
    int input;
    int amount = 0, count = 0;

    cout << "Press 1 for rickshaw" << endl;
    cout << "Press 2 for car" << endl;
    cout << "Press 3 for bus" << endl;
    cout << "Press 4 to show the record" << endl;
    cout << "Press 5 to delete the record" << endl;
    while (true)
    {
        cin >> input;

        if (input == 1)
        {
            if (count <= 50)
            {
                r++;
                amount = amount + 100;
                count = count + 1;
            }

            else
            {
                cout << "Parking is full" << endl;
            }
        }

        else if (input == 2)
        {
            if (count <= 50)
            {
                amount = amount + 200;
                count = count + 1;
                c++;
            }

            else
            {
                cout << "Parking is full" << endl;
            }
        }

        else if (input == 3)
        {

            if (count <= 50)
            {
                b++;
                amount = amount + 300;
                count = count + 1;
            }

            else
            {
                cout << "Parking is full" << endl;
            }
        }

        else if (input == 4)
        {
            cout << "*******************" << endl;
            cout << "The total amount=" << amount << endl;
            cout << "The total number of vehicles parked=" << count << endl;
            cout << "The total number of rikshaw parked=" << r << endl;
            cout << "The total number of car parked=" << c << endl;
            cout << "The total number of bus parked=" << b << endl;
            cout << "*******************" << endl;
        }

        else if (input == 5)
        {

            amount = 0;
            count = 0;
            r = 0;
            c = 0;
            b = 0;
            cout << "*******************" << endl;
            cout << "Record Deleted" << endl;
            cout << "*******************" << endl
                 << endl;
        }

        else
        {
            cout << "Invalid Number" << endl;
            break;
        }
    }

    return 0;
}
