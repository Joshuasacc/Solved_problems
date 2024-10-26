#include <iostream> 
#include <string>

using namespace std;

class Library {
    // For option 1
    string authorName;
    string book;
    int ISBN;

    // For option 2
    string memName;
    string memID;

    public:
    void setBook (string &author, string &book, int &ISBN) { 
        this->authorName = author;
        this->book = book;
        this->ISBN = ISBN;
        cout << "Book " << book << " added successfully!" << endl; 
    }
    void setMember (string name, string ID) {
        this->memName = name;
        this->memID = ID;
        cout << "Member " << memName << " registered successfully" << endl;
    }
    void setIssue (string issueMemID, int issueISBN) {
        if (issueMemID == memID || issueISBN == ISBN ) {
            cout << "Book " << book << " issue to " << memName << endl;
        }else {
            cout << "We don't have data for that." << endl;
        }
    }
};

int main () {
    cout << "1. Add Book" << endl;
    cout << "2. Register Member" << endl;
    cout << "3. Issue Book" << endl;
    cout << "4. Exit" << endl;
    Library person;
    string author, book;
    string memName, memID;
    int ISBN;

    string _memID;
    int _ISBN;
    while (true) {
        cout << "Select and option: ";
        int userPick; cin >> userPick;
        cin.ignore();

        switch (userPick) {

            case 1:
            cout << "Enter Book Title: ";
            getline (cin, book);

            cout << "Enter Author: ";
            getline (cin, author);

            cout << "Enter ISBN: ";
            cin >> ISBN;
            person.setBook(author, book, ISBN);
            break;
            
            case 2:
            cout << "Enter Member name: ";
            getline (cin, memName);

            cout << "Enter Member ID: ";
            getline (cin, memID);
            person.setMember (memName, memID);
            break;
            person.setMember (memName, memID);
            
            case 3:
            cout << "Enter Member ID: ";
            getline (cin, _memID);
            cout << "Enter ISBN of the book to issue: ";
            cin >> _ISBN;
            person.setIssue (_memID, _ISBN);
            break;

            case 4:
            cout << "Exiting the Library Management System. Goodbye!" << endl;
            return 0;
            break;
        }
    }
    return 0;
}
