#include <iostream>
using namespace std;

struct stDate {
    short Day;
    short Month;
    short Year;
};

bool isLeapYear(short Year)
{
    return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    short NumberOfDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

bool isLastDayInMonth(stDate Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool isLastMonthInYear(short Month)
{
    return (Month == 12);
}



short ReadDay()
{
    short Day;
    cout << "Please enter a Day? ";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

stDate ReadFullDate()
{
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

stDate IncreaseDateByOneDay(stDate Date)
{
    if (isLastDayInMonth(Date))
    {
        if (isLastMonthInYear(Date.Month))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }

    return Date;
}

stDate IncreaseDateByxDay(stDate Date)
{
    short dayx = 10;
    for (int i = 1; i <= dayx; i++) {
    if (isLastDayInMonth(Date))
    {
        if (isLastMonthInYear(Date.Month))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }
}
    return Date;
}

stDate IncreaseDateByoneweek(stDate Date)
{
    short week = 7;
    for (int i = 1; i <= week; i++) {
        if (isLastDayInMonth(Date))
        {
            if (isLastMonthInYear(Date.Month))
            {
                Date.Day = 1;
                Date.Month = 1;
                Date.Year++;
            }
            else
            {
                Date.Day = 1;
                Date.Month++;
            }
        }
        else
        {
            Date.Day++;
        }
    }
    return Date;
}

stDate IncreaseDateByxweek(stDate Date)
{
    short weekx = 10;
    short week = 7* weekx;
    for (int i = 1; i <= week; i++) {
        if (isLastDayInMonth(Date))
        {
            if (isLastMonthInYear(Date.Month))
            {
                Date.Day = 1;
                Date.Month = 1;
                Date.Year++;
            }
            else
            {
                Date.Day = 1;
                Date.Month++;
            }
        }
        else
        {
            Date.Day++;
        }
    }
    return Date;
}

stDate IncreaseDateByonemonth(stDate Date)
{
  
    short month = NumberOfDaysInAMonth(Date.Month, Date.Year);
    for (int i = 1; i <= month; i++) {
        if (isLastDayInMonth(Date))
        {
            if (isLastMonthInYear(Date.Month))
            {
                Date.Day = 1;
                Date.Month = 1;
                Date.Year++;
            }
            else
            {
                Date.Day = 1;
                Date.Month++;
            }
        }
        else
        {
            Date.Day++;
        }
    }
    return Date;
}

stDate IncreaseDateByxmonth(stDate Date)
{
    short monthx = 5;
    short month = NumberOfDaysInAMonth(Date.Month, Date.Year)*monthx;

    for (int i = 1; i <= month; i++) {
        if (isLastDayInMonth(Date))
        {
            if (isLastMonthInYear(Date.Month))
            {
                Date.Day = 1;
                Date.Month = 1;
                Date.Year++;
            }
            else
            {
                Date.Day = 1;
                Date.Month++;
            }
        }
        else
        {
            Date.Day++;
        }
    }
    return Date;
}
int main()
{
    
    stDate Date1 = ReadFullDate();
    cout << "\n";
    Date1= IncreaseDateByOneDay(Date1);
 cout << "Date After Adding One Day: "
        << Date1.Day << "/"
        << Date1.Month << "/"
        << Date1.Year << endl;
 Date1 = IncreaseDateByxDay(Date1);
 cout << "Date After Adding One Day: "
     << Date1.Day << "/"
     << Date1.Month << "/"
     << Date1.Year << endl;

 Date1 = IncreaseDateByoneweek( Date1);
 cout << "Date After Adding One Day: "
     << Date1.Day << "/"
     << Date1.Month << "/"
     << Date1.Year << endl;

 Date1 = IncreaseDateByxweek(Date1);
 cout << "Date After Adding One Day: "
     << Date1.Day << "/"
     << Date1.Month << "/"
     << Date1.Year << endl;
 Date1 = IncreaseDateByonemonth(Date1);
 cout << "Date After Adding One Day: "
     << Date1.Day << "/"
     << Date1.Month << "/"
     << Date1.Year << endl;
 Date1 = IncreaseDateByxmonth(Date1);
 cout << "Date After Adding One Day: "
     << Date1.Day << "/"
     << Date1.Month << "/"
     << Date1.Year << endl;
    system("pause>0");
    return 0;
}