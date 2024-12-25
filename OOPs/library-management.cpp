#include<iostream>
using namespace std;

class Book {
    protected:
        int bookID; 
        string title; 
        string author;
        bool isIssued; 
    public:
        void addBook(int bookID, string title, string author){
            this->bookID = bookID;
            this->title = title;
            this->author = author;
            this->isIssued = false;
            cout << "Book added successfully.... !" << endl;
        }

        void viewBookDetails(){
            cout << "\n-----------------------\n";
            cout << "Book ID :- " << this->bookID << endl;
            cout << "Title :- " << this->title << endl;
            cout << "Author Name :- " << this->author << endl;
            cout << "Available ? :-  " << (this->isIssued == true ? "No" : "Yes") << endl;
            cout << "-----------------------\n";
        }

        int getBookId(){
            return this->bookID;
        }
};

class IssuedBook : public Book {
    private:
        string issuedTo;
        string issueDate;
    public:
        void issueBook(string name, string date){
            if(this->isIssued == true){
                cout << "The book is already issued....\n";
            } else {
                this->issuedTo = name;
                this->issueDate = date;
                this->isIssued = true;
                cout << "\nBook issued to " << name << " on date : " << date << endl;
            }
        }
};

int main(){
    IssuedBook library[10];
    int bookCounter = 0; // 4
    int choice; // 4

    do {
        cout << "\n-----Library Management-----\n";
        cout << "1 to Add Book..." << endl;
        cout << "2 to View Book details..." << endl;
        cout << "3 to Issues a Book..." << endl;
        cout << "4 to Return Book..." << endl;
        cout << "5 to Exit..." << endl;
        cout << "\nEnter your choice : ";
        cin >> choice; // 3

        switch(choice){
            case 1: {
                int id;
                string name, author;
                
                cout << "Enter Book ID : ";
                cin >> id;

                cin.ignore();

                cout << "Enter Book Title : ";
                getline(cin, name);

                cout << "Enter Book Author Name : ";
                getline(cin, author);
                
                library[bookCounter].addBook(id, name, author);
                bookCounter++;
                break;
            }
            case 2: {
                for(int i = 0; i < bookCounter; i++){
                    library[i].viewBookDetails();
                }
                break;
            }
            case 3: {
                int id;
                string name, date;
                bool found = false;

                cout << "Enter book id : ";
                cin >> id;

                cin.ignore();

                cout << "Name : ";
                getline(cin, name);

                cout << "Date : ";
                getline(cin, date); 

                for(int i = 0; i < bookCounter; i++){
                    if(library[i].getBookId() == id){
                        found = true;
                        library[i].issueBook(name, date);
                        break;
                    }
                } 

                if(found == false){
                    cout << "\nBook is not available....." << endl;
                }
                break;
            }
            case 4:
                break;
            case 5:
                cout << "Thanks For visiting bro...";
                break;
        }
    } while(choice != 5);

    return 0;
}