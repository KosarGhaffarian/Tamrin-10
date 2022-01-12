#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
private:
    int hour,minute,seconds,seconds_alone,remain,second,time;
    int hh,mm,ss;
public:
    int choice;
    void getTime(void);
    void sum(Time Ts1,Time Ts2);
    void convertIntoSeconds(void);
    void convertIntoTime(void);
    void displayTime(void);
};

void Time::getTime(void)
{
    cout << "\n\t\t\t\t\t****CLOCK****\t\t\t\t\t" << endl << "\n\n\n";
    cout << "choose: "<< endl;
    cout << endl << " 1 - second to time.\n"<< " 2 - time to second.\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "\n\n\n";
        cout << "\t----Enter time--- " << endl;
        cout << "Hours-->  ";
        cin >> hh;
        cout << "Minute--> ";
        cin >> mm;
        cout << "Seconds--> ";
        cin >> ss;

        break;
    case 2:
        cout << "Seconds alone--> ";
        cin >> seconds_alone;
        convertIntoTime();
        break;
    }
}

void Time::convertIntoSeconds(void)
{
    seconds = hh*3600 + mm*60 + ss;
}


void Time::convertIntoTime(void)
{
    hour = ss / 3600;
    remain = ss % 3600;
    minute = remain / 60;
    second = remain % 60;
    time = hh*3600 + mm*60 + ss;
}

void Time::sum(Time Ts1,Time Ts2)
{

    seconds=Ts1.seconds+Ts2.seconds;
    minute=Ts1.minute+Ts2.minute + this->seconds/60;;
    hour= Ts1.hour+Ts2.hour + (this->minute/60);
    minute %=60;
    seconds %=60;
}


void Time::displayTime(void)
{
    cout << "\n\nThe time is = " << setw(2) << setfill('0') << hh << ":"
         << setw(2) << setfill('0') << mm << ":"
         << setw(2) << setfill('0') << ss << endl;
    cout << "\n\nTime in total seconds: " << seconds << "\n\n\n";
}

int main()
{
    Time t;
    Time t1;
    Time t2;

    t1.getTime();
    t2.getTime();
    t.convertIntoSeconds();
    t.displayTime();
    t.sum(t1,t2);

    return 0;
}
