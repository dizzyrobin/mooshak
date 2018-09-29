#include <iostream>
#include <string>
using namespace std;

const int DAYS_IN_WEEK = 7;
const string WEEK_DAYS[DAYS_IN_WEEK] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

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
        cout << WEEK_DAYS[weekDay] << endl;
    }

    return 0;
}
