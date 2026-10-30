//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

// Q99: Change date format from dd/mm/yyyy to dd-Mmm-yyyy.

#include <stdio.h>

int main() {
    int day, month, year;

    char months[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                          "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d-%s-%d", day, months[month - 1], year);

return 0;
}