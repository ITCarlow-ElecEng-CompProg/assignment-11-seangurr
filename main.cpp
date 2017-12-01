/** Sean Gurr
 *  C00221886
 *  Ex. 11
 *  Tomorrows Date Calculator
 *  15/11/2017
 */

/**< Preprocessor directives */
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdio>
#include <windows.h>

using namespace std;

/** structure containing day, month and year */
struct date
{
    int day ;
    int month ;
    int year ;
};

/** Main function */
int main()
{
    int monthlength [12] = {31, 28, 31, 30, 30, 30, 31, 31, 30, 31, 30, 31};

    struct date today, tomorrow;

    cout << "\nEnter Todays Date\n\n" ;
    cout << "\nDay :\t" ;
    cin >> today.day ;
    cout << "\nMonth :\t" ;
    cin >> today.month;
    cout << "\nYear :\t" ;
    cin >> today.year;

    /**< Display todays date */
    cout << "\nTodays Date is: \t" << today.day << "/" << today.month << "/" << today.year << endl;


    if(today.year % 4 == 0)

    {
        if(today.year % 100 == 0)

        {
            if(today.year % 400 == 0)

            {
                monthlength[1] = 29;
            }

        }

        else

        {
            monthlength[1] = 29;
        }
    }

    if(today.day >= monthlength[today.month -1])

    {
        if (today.month == 12)
        {
            tomorrow.day = 1;
            tomorrow.month = 1;
            tomorrow.year = today.year + 1;
        }
        else
        {
            tomorrow.day = 1;
            tomorrow.month = today.month + 1;
            tomorrow.year = today.year;
        }
    }
    else
    {
        tomorrow.day = today.day +1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }


    /**< Display tomorrows date */
    cout << "\nTomorrows Date is :\t" << tomorrow.day << "/" << tomorrow.month << "/" << tomorrow.year << endl;


    return 0;
}

