#include <iostream>
#include "group.h"

using namespace std;

Group::Group()
{
    name = "";
    sex = "";
    birth = 0;
    death = 0;
}
void Group::InputPeople()
{
    cout << "Name: ";
    cin >> name;
    cout << "Sex: ";
    cin >> sex;
    cout << "Year of birth: ";
    cin >> birth;
    cout << "Year of death: ";
    cin >> death;

}
