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

	//cout << formatTime(54.0) << endl;





	return 0;
}
