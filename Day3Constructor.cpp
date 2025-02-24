#include <iostream>
using namespace std;

class person
{
private:
    string name;
    int age;
    string gender;
public:
    person(string name, int age, string gender){
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    ~person(){
        cout << "patay" << endl;
    }

    void display() {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }

};

int main()
{
    person superman("CK", 90, "male");
    superman.display();

    return 0;
}
