#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Runner {
	public:
		void setname(string username);
		void setage(int userage);
		void set400(int minutes, double seconds);
		void set800(int minutes, double seconds);
		void set1600(int minutes, double seconds);
		void setmile(int minutes, double seconds);
		void set3200(int minutes, double seconds);
		void set5000(int minutes, double seconds);
		double get400();
		double get800();
		double get1600();
		double getmile();
		double get3200();
		double get5000();
		void printrunner();
	private:
		string name;
		int age;
		double four, eight, sixteen, mile, two, five;
		
};

string formatTime(double time);
