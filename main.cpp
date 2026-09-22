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
    while (true)
    {
        cout << "please enter a name: ";
        cin >> obj.name;
        cout << "please enter a age: ";
        cin >> obj.age;
        cout << "please enter a country: ";
        cin >> obj.country;
        dta.push_back(obj);

        cout<<"enter c to continue enter y to exit: ";
        cin>>user;
        if (user == 'c'){
            cout<<"lets continue \n";
        }else{
            break;
        }
    }
    cout<<"\n";
    cout<<"stored data:  \n";
    for(const datta& stu : dta){
        cout<<"name: "<<stu.name<<" \n"
            <<"age: "<<stu.age<<" \n"
            <<"country: "<<stu.country<<" \n";

            cout<<" \n";
    }

    return 0;
}