#include<iostream>

using namespace std;

int main(){
    int i, start_year, end_year, count = 0;

    cout << "Enter Starting year : ";
    cin >> start_year;

    cout << "Enter ending year : ";
    cin >> end_year;

    if(start_year > end_year){
        start_year = start_year + end_year;
        end_year = start_year - end_year;
        start_year = start_year - end_year;
    }

    if(start_year % 4 == 0){
        for(i=start_year; i<=end_year; i+=4){
            cout << i << " ";
            count++;
        }
    } else {
        start_year = start_year + (4 - (start_year % 4));
        for(i=start_year; i<=end_year; i+=4){
            cout << i << " ";
            count++;
        }
    }

    cout << endl << "Count : " << count;

    return 0;
}