#include<iostream>

using namespace std;

int main(){
    char day, emoji = 3;

    cout << "Enter the first letter of day : ";
    cin >> day;

    switch(day){
        case 'm':
            cout << "Yayy ! Its Monday.....";
            break;
        case 't':
            cout << "Yayy ! Its Tuesday.....";
            break;
        case 'w':
            cout << "Yayy ! Its Wednesday.....";
            break;
        case 'T':
            cout << "Yayy ! Its Thursday.....";
            break;
        case 'f':
            cout << "Yayy ! Its Shukravar.....";
            break;
        case 's':
            cout << "Yayy ! Its Shaniday.....";
            break;
        case 'S':
            cout << "Yayy ! Its Sunvar..... " << emoji;
            break;
        default:
            emoji = 2;
            cout << "Areee tu jaa reee......" << emoji;
    }

    return 0;
}

// I 
// I N
// I N D 
// I N D I
// I N D I A