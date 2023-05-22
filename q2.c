#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year)
{
    if (year % 400 == 0)
        return true;
    else if (year % 100 == 0)
        return false;
    else if (year % 4 == 0)
        return true;
    else
        return false;
}

int day_of_year(int month, int day, int year)
{
    int days_per_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (is_leap_year(year))
        days_per_month[2] = 29;

    int day_of_year = 0;
    for (int i = 1; i < month; i++)
        day_of_year += days_per_month[i];
    day_of_year += day;

    return day_of_year;
}

int main(int argc, char const *argv[])
{
    printf("%d", day_of_year(5, 21, 2023));
    return 0;
}
