//phonebook header

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct Contact
{
public:
    string name;
    string home_number;
    string work_number;
    string personal_number;
    string details;
};

class Phonebook
{
    public:
    vector <Contact> contacts;
    
    Phonebook () {}
    ~Phonebook() {}


    void add_contact (Contact contact);
    void remove_contact (Contact contact);
    Contact find_contact (string name);
    void print_book ();
    void readF ();
    void writeF ();
    int find_place (string name);
};