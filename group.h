#ifndef GROUP_H
#define GROUP_H
#include <iostream>
#include <string>

using namespace std;

class Group
{
public:
    Group();
    void InputPeople();
private:
    string name;
    string sex;
    int birth;
    int death;

};

#endif // GROUP_H
