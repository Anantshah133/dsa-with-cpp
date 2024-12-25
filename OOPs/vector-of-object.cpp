#include<iostream>
#include<vector>

using namespace std;

class Book {
    private:
        int bookID;
        string title;
        string author;
    public:
        Book(int bookID, string title, string author){
            this->bookID = bookID;
            this->title = title;
            this->author = author;
        }

        void displayBookDetails(){
            cout << "------------------" << endl;
            cout << "Name : " << this->title << endl;
            cout << "Book ID : " << this->bookID << endl;
            cout << "Author : " << this->author << endl;
            cout << "------------------" << endl;
        }

        int getBookId(){
            return this->bookID;
        }
};

int main(){
    vector<Book> library;
    int choice;

    do {
        cout << endl;
        cout << "Enter 1 to adding a book...." << endl;
        cout << "Enter 2 to removing a book...." << endl;
        cout << "Enter 3 to show all book...." << endl;
        cout << "Enter 4 to search a book...." << endl;
        cout << "Enter 5 to exit...." << endl;
        cout << "Enter your choice : "; 
        cin >> choice;

        switch(choice){
            case 1 : {
                int id;
                string name, author;

                cout << "Enter id : ";
                cin >> id;

                cin.ignore();

                cout << "Enter name : ";
                getline(cin, name);

                cout << "Enter author : ";
                getline(cin, author);

                library.push_back(Book(id, name, author));
                break;
            }
            case 2: {
                int id;

                cout << "Enter book id to remove : ";
                cin >> id;

                bool isFound = false;

                for(auto obj = library.begin(); obj != library.end(); obj++){
                    if(obj->getBookId() == id){
                        library.erase(obj);
                        isFound = true;
                        break; // ijjat thi Vaparvu
                    }
                }
                isFound == true ? cout << "Book removed successfully...." << endl : cout << "Book not found !" << endl;
                break;
            }
            case 3: {
                for(auto &book : library){
                    book.displayBookDetails();
                }
                break;
            }
            case 4: {
                int id;

                cout << "Enter book id to search : ";
                cin >> id;

                bool isFound = false;

                for(auto obj = library.begin(); obj != library.end(); obj++){
                    if(obj->getBookId() == id){
                        obj->displayBookDetails();
                        isFound = true;
                        break; // ijjat thi Vaparvu
                    }
                }
                isFound == true ? cout << "" << endl : cout << "Book not found !" << endl;
                break;
            }
        }

    } while(choice != 5);

    return 0;
}