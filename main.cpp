#include <iostream>
#include <vector>
using namespace std;
struct datta
{
    string name;
    int age;
    string country;
};
int main()
{
    vector<datta> dta;
    datta obj;
    char user;
    char customer;
    while (true)
    {
        cout<< "-------------------------------\n";
        cout <<"|   option 1 for data entry:   |\n";
        cout <<"|   option 2 to display data:  |\n";
        cout <<"|   option 3 to exit:          |\n";
        cout<< "-------------------------------\n";
        cin >> customer;
        if (customer == '1')
        {
            while (true)
            {
                cout << "please enter a name: ";
                cin >> obj.name;
                cout << "please enter a age: ";
                cin >> obj.age;
                cout << "please enter a country: ";
                cin >> obj.country;
                dta.push_back(obj);
                cout << "Stored data number " << dta.size() << "\n";

                cout << "enter c to continue enter y to exit: ";
                cin >> user;
                if (user == 'c')
                {
                    cout << "lets continue \n";
                }
                else
                {
                    break;
                }
            }
        }
        else if (customer == '2')
        {
            cout << "\n";
            cout << "stored data:  \n";
            for (const datta &stu : dta)
            {
                cout << "name: " << stu.name << " \n"
                     << "age: " << stu.age << " \n"
                     << "country: " << stu.country << " \n";

                cout << " \n";
            }
        }
        else if (customer == '3')
        {
            cout << "Thank you bye ";
            break;
        }
    }
    return 0;
}