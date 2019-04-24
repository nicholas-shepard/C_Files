#include <iostream>
#include <string>
#include "Runner.h"

using namespace std;

int main() {

	Runner runner;

	runner.setname("Nick Shepard");
	runner.setage(18);
	runner.set400(0, 54.0);
	runner.set800(2, 6.5);
	runner.set1600(4, 31.45);
	runner.setmile(4, 34.0);
	runner.set3200(10, 54.0);
	runner.set5000(17, 30.3);

	cout << runner.get400() << endl;

	runner.printrunner();

	cout << endl;

	cout << formatTime(getPace(400, runner.get400())) << " per mile" << endl;
	cout << formatTime(getPace(800, runner.get800())) << " per mile" << endl;
	cout << formatTime(getPace(1600, runner.get1600())) << " per mile" << endl;
	cout << formatTime(runner.getmile()) << " per mile" << endl;
	cout << formatTime(getPace(3200, runner.get3200())) << " per mile" << endl;
	cout << formatTime(getPace(5000, runner.get5000())) << " per mile" << endl;





	return 0;
}
