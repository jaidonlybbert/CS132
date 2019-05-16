// Jaidon Lybbert
// January 24, 2019
// Assignment 11: Stopwatch
// Built with GNU bash, and Atom

#include<iostream>
#include<chrono>
using namespace std::chrono;

class Stopwatch {
	private:
		system_clock::time_point startTime, endTime;

	public:
		Stopwatch() {
			system_clock::time_point t1 = system_clock::now();
			system_clock::time_point t2 = system_clock::now();
		}

		void start() {
			startTime = system_clock::now();
		}

		void stop() {
			endTime = system_clock::now();
		}

		system_clock::time_point getStartTime() const {
			return startTime;
		}

		system_clock::time_point getEndTime() const {
			return endTime;
		}

		double getElapsedTime() const {
			return (duration<double>(endTime - startTime).count());
		}
	};

int main() {
	Stopwatch redStopwatch;
	std::string x;
	std::cout << "Press any key and hit enter to start: ";
	std::cin >> x;
	redStopwatch.start();
	std::cout << "Press any key and hit enter to stop: ";
	std::cin >> x;
	redStopwatch.stop();
	std::cout << redStopwatch.getElapsedTime() << " seconds passed.\n";
	return 0;
}
