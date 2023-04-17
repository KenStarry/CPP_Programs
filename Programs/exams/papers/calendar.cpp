//
// Created by kenne on 4/17/2023.
//
#include <iostream>
#include <string>

using namespace std;

string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
string names[12] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};
int mons[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};
int bday, bmonth, year;

bool isLeapYear(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        return true;

    } else {
        return false;
    }
}

int firstOfJan(int y) {

    int r4 = 5 * ((y - 1) % 4);
    int r100 = 4 * ((y - 1) % 100);
    int r400 = 6 * ((y - 1) % 400);

    int firstDayOfWeek = (r4 + r100 + r400) % 7;

    return firstDayOfWeek;
}

int dayIndex(int d, int m, int y) {

    int firstJan = firstOfJan(y);

    if (isLeapYear(y)) {
        mons[1] = 29;
    }

    int totalDays = 0;
    for (int i = 0; i < m - 1; i++) {
        totalDays += mons[i];
    }

    totalDays += d - 1;
    int dayIndex = (firstJan + totalDays) % 7;

    return dayIndex;
}

void displayCalendar(int y, int m) {

    int daysInMonth = mons[m - 1];
    int firstDayOfCurrentMonth = dayIndex(1, m, y);

    cout << "Mo\tTu\tWe\tTh\tFr\tSa\tSu" << endl;

    //  printing calendar days
    int dayOfMonth = 1;
    int daysPrinted = 0;

    for (int row = 0; row < 6; row++) {

        for (int col = 0; col < 7; col++) {

            if (row == 0 && col < firstDayOfCurrentMonth) {
                cout << "\t";

            } else if (dayOfMonth <= daysInMonth) {
                cout << dayOfMonth << "\t";
                dayOfMonth++;

            } else {
                cout << "\t";
            }
        }

        cout << endl;
        if (dayOfMonth > daysInMonth) {
            break;
        }
    }

}


int main() {

    year = 2023;
    bday = 20;
    bmonth = 3;

    cout << "First day of " << year << " = " << days[firstOfJan(year)] << endl;
    cout << "Birthday Day is " << days[dayIndex(bday, bmonth, year)] << endl;

    cout << "Calendar for " << names[bmonth - 2] << endl;
    displayCalendar(year, bmonth - 1);

    cout << "Calendar for " << names[bmonth - 1] << endl;
    displayCalendar(year, bmonth);

    cout << "Calendar for " << names[bmonth] << endl;
    displayCalendar(year, bmonth + 1);

    cout << endl;

    return 0;
}
