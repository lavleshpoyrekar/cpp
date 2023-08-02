#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student
{
private:
    int age, standard;
    string first_name, last_name;

public:
    void set_age(int x)
    {
        age = x;
    }
    void set_standard(int x)
    {
        standard = x;
    }
    void set_first_name(string x)
    {
        first_name = x;
    }
    void set_last_name(string x)
    {
        last_name = x;
    }
    void get_age()
    {
        cout << age << endl;
    }
    void get_standard()
    {
        cout << standard << endl;
    }
    void get_first_name()
    {
        cout << first_name << endl;
    }
    void get_last_name()
    {
        cout << last_name;
    }
    void to_string()
    {
        cout << age << "," << first_name << "," << last_name << "," << standard << endl;
    }
};
int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    st.get_age();
    st.get_last_name();
    cout << ", ";
    st.get_first_name();
    st.get_standard();
    cout << "\n";
    st.to_string();

    return 0;
}