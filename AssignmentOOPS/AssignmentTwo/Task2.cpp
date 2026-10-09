#include<conio.h>
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<windows.h>
using namespace std;
class Calendar{
    private:
    int days;
    int months;
    int years;
    inline static const char* MONTH_NAMES[] = {"","January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};
public:
    Calendar(){
        days=0;
        years=0;
        months=0;
    }
    Calendar(int days,int months,int years){
   this->days=days;
    this->months=months;
    this->years=years;
    int y=years-(14-months)/12;
    int x=y=y/4 - y/100 + y/400;
    int m=months +12 *((14-months)/12)-2;
    int d=(days+x+(31*m)/12)%7;    
    }
    bool leapYear(int num){
        if(num%4==0 ){
            if(num%100 == 0){
                if(num%400==0){
                    return true;

                }
                else
                return false;

            }
            else
            return true;

        }
        else{
            return false;

        }
    }
    int daysInMonth(int m,int y){
        switch(m){
            case 1 : case 3 : case 5 : case 7 : case 9 : case 11:
            return 31;
            case 4 : case 6 : case 8 : case 10 : case 12:
            return 30;
            case 2:
            return leapYear(y)?29:28;
        }

        }
 void printCalendar(int d,int m,int y){
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    const WORD NORMAL = 7;                                   // white on black
    const WORD HIGHLIGHT = BACKGROUND_GREEN | BACKGROUND_INTENSITY | 0; // highlighted

    cout << "\n   " << MONTH_NAMES[m] << " " << y << "\n\n";
    cout << setw(3) << "S" << setw(3) << "M" << setw(3) << "Tu"
         << setw(3) << "W" << setw(3) << "Th" << setw(3) << "F"
         << setw(3) << "S" << "\n";
         int start=(1,m,y);
         int total=(m,y);
         for(int i=0;i<start;i++){
            cout<<setw(3)<<" ";
         }
         int cols=start;
         for(int days=1;days<=12;days++){
            if(d==days){
                SetConsoleTextAttribute(h,HIGHLIGHT);
                cout<<setw(3)<<days;
                SetConsoleTextAttribute(h,NORMAL);
            }else{
                cout<<setw(3)<<days;
            }
            cols++;
            if(cols=7){
                cout<<endl;
                cols=0;
            }
            
         }
         if(cols!=0) cout<<"\n";
            cout<<"\n";
 }
 void getDate(){
int y, m, d;

    do {
        cout << "Enter year (1900 - 2099): ";
        cin >> y;
        if (y < 1900 || y > 2099)
            cout << "Invalid year. Try again.\n";
    } while (y < 1900 || y > 2099);

    do {
        cout << "Enter month (1 - 12): ";
        cin >> m;
        if (m < 1 || m > 12)
            cout << "Invalid month. Try again.\n";
    } while (m < 1 || m > 12);

    int maxDay = daysInMonth(m, y);
    do {
        cout << "Enter day (1 - " << maxDay << "): ";
        cin >> d;
        if (d < 1 || d > maxDay)
            cout << "Invalid day. Try again.\n";
    } while (d < 1 || d > maxDay);

    years = y;
    months = m;
    days = d;
 }
void setUpCalendar() {
    getDate();

    while (true) {
        system("cls") ;
        // keep highlighted day valid if the new month is shorter
        int d = days;
        int maxDay = daysInMonth(months, years);
        if (d > maxDay) d = maxDay;

        printCalendar(d, months, years);
        cout << "Arrows: Right=next month, Left=previous month, "
                "Up=next year, Down=previous year, Esc=exit\n";

        int key = _getch();
        if (key == 27) break;                    // Esc

        if (key == 0 || key == 224) {            // special key prefix
            key = _getch();
            int newMonth = months, newYear = years;

            switch (key) {
                case 77:                         // right arrow
                    newMonth++;
                    if (newMonth > 12) { newMonth = 1; newYear++; }
                    break;
                case 75:                         // left arrow
                    newMonth--;
                    if (newMonth < 1) { newMonth = 12; newYear--; }
                    break;
                case 72:                         // up arrow
                    newYear++;
                    break;
                case 80:                         // down arrow
                    newYear--;
                    break;
            }

            if (newYear >= 1900 && newYear <= 2099) {
                months = newMonth;
                years = newYear;
            }
        }
    }
}
};
int main(){

}