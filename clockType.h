#include <iostream>
using namespace std;

class clockType
{ public:
    void setTime(int hours, int minutes, int seconds);
		

    void getTime(int& hours, int& minutes, int& seconds) const;
		

    void printTime() const;
		

    void incrementSeconds();
		

    void incrementMinutes();
		

    void incrementHours();
		

	bool equalTime(const clockType& otherClock) const;
		

    clockType(int hours, int minutes, int seconds);
		

    clockType();
		

  private:
    int hr;  //stores the hours
    int min; //stores the minutes
    int sec; //stores the seconds
};
