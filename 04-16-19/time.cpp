#include <iostream>
using namespace std;

class TimeHrMn {
   friend ostream& operator<<(ostream& output, const TimeHrMn &thm);

public:
   TimeHrMn(int timeHours = 0, int timeMinutes = 0);
   void Print() const;
   TimeHrMn operator+(TimeHrMn rhs) ;
private:
   int hours;
   int minutes;
};

// Overload + operator for TimeHrMn
TimeHrMn TimeHrMn::operator+(TimeHrMn rhs) {
   TimeHrMn timeTotal;
   
   timeTotal.hours   = hours   + rhs.hours;
   timeTotal.minutes = minutes + rhs.minutes;
   if (timeTotal.minutes >= 60) {
      timeTotal.hours = timeTotal.hours + 1;
      timeTotal.minutes = timeTotal.minutes - 60;
   }
   return timeTotal;
}

   ostream& operator<<(ostream& output, const TimeHrMn &thm) {
      output << "H: " << thm.hours << ", " << "M: " << thm.minutes;

      return output;

   }

      

TimeHrMn::TimeHrMn(int timeHours, int timeMinutes) {
   hours  = timeHours;
   minutes = timeMinutes;
}

void TimeHrMn::Print() const {
   cout << "H:" << hours << ", " << "M:" << minutes << endl;
}

int main() {
   TimeHrMn time1(3, 22);
   TimeHrMn time2(2, 50);
   TimeHrMn timeTot;
   
   timeTot = time1 + time2;
   timeTot.Print();

   cout << time1 << " + " << time2 << " = " << timeTot << endl;
   
   return 0;
}

