#include <iostream>

using namespace std;

struct Month {
    const char* name;
    int days;
};

void printMonthTable(const Month months[], int size) {
    cout << "Month\t\t\tDays" << endl;
    cout << "------------------------------" << endl;
    for (int i = 0; i < size; i++) {
        cout << months[i].name << "\t\t\t" << months[i].days << endl;
    }
}

int main() {
    Month months[] = {
        {"January", 31}, {"February", 28}, {"March", 31}, {"April", 30},
        {"May", 31}, {"June", 30}, {"July", 31}, {"August", 31},
        {"September", 30}, {"October", 31}, {"November", 30}, {"December", 31}
    };

    const int monthCount = sizeof(months) / sizeof(months[0]);

    cout << "Month Table using Array of Structure of Months" << endl;
    printMonthTable(months, monthCount);

    cout << "\nMonth Table using Array of Month Names and Days" << endl;
    
    const char* monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printMonthTable(months, monthCount); // Call the function again for consistency

    return 0;
}
