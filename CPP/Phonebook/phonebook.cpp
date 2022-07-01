#include "phonebook.h"

void Phonebook::add_contact (Contact contact)
{
    contacts.push_back(contact);
}

void Phonebook::remove_contact (Contact contact)
{
    contacts.erase(contacts.begin() + find_place(contact.name));
}

/*
Contact Phonebook::find_contact (string name)
{
    int id = find_place(name);

    return id == -1 ? nullptr:contacts [find_place(name)];
}
*/

void Phonebook::print_book ()
{
    for (auto contact:contacts)
    {
        cout << contact.name << endl;
    }
}

void Phonebook::readF ()
{

}

void Phonebook::writeF ()
{
    string stream;
    ofstream PhonebookCSV;
    PhonebookCSV.open ("PhonebookDB.csv");
    for (size_t i = 0; i < 5; i++)
        {
            cin >> stream;
            PhonebookCSV << stream + ";";
        }
    PhonebookCSV << "\n";
    PhonebookCSV.close();
}

int Phonebook::find_place (string name)
{
    for (size_t i = 0; i < contacts.size(); i++)
    {
        if(!contacts[i].name.compare(name))
            return i;
    }
    return -1;
}