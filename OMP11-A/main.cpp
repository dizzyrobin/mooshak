#include <iostream>
#include <string>
using namespace std;

const int DAYS_IN_WEEK = 7;

int get_day_of_year(int month, int day) {
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayOfYear = day - 1;

    for (int m = 0; m < (month - 1); m++) {
        dayOfYear += monthDays[m];
    }

    return dayOfYear;
}

// 4-4-2011 is Monday
// Calculate the 2011 delay
int calculate_delay_week() {
    int dayOfYear = get_day_of_year(4, 4);
    return dayOfYear % DAYS_IN_WEEK;
}

string week_to_string(int n) {
    switch (n) {
        case 0: return "Monday";
        case 1: return "Tuesday";
        case 2: return "Wednesday";
        case 3: return "Thursday";
        case 4: return "Friday";
        case 5: return "Saturday";
        case 6: return "Sunday";
    }

    return NULL;
}

int main(void) {
    int nCases;
    int day, month;
    int delayWeek = calculate_delay_week();
    cin >> nCases;

    for (int i = 0; i < nCases; i++) {
        cin >> month >> day;
        int dayOfYear = get_day_of_year(month, day);
        // (+ DAYS_IN_WEEK) prevents negative numbers
        int weekDay = (dayOfYear + DAYS_IN_WEEK - delayWeek) % DAYS_IN_WEEK;
        cout << week_to_string(weekDay) << endl;
    }

    return 0;
}
