#include <iostream>
#include <string>


using namespace std;


int main()
{
	string name = "Schumacher";
	int lap = 4;
	int engine = 254;
	int wheels = 93;
	int steeringWheel = 49;
	int wind = -21;
	int rain = -17;
	int speed = engine + wheels + steeringWheel + wind + rain;

	cout << "===================\n";
	cout << "Super racing. Lap " << lap << "\n";
	cout << "===================\n";
	cout << name << " (" << speed << ")\n";
	cout << "===================\n";
	cout << "Driver: " << name << "\n";
	cout << "Speed: " << speed << "\n";
	cout << "-------------------\n";
	cout << "Equipment\n";
	cout << "Engine: +" << engine << "\n";
	cout << "Wheels: +" << wheels << "\n";
	cout << "Steering wheel: +" << steeringWheel << "\n";
	cout << "-------------------\n";
	cout << "Weather effects\n";
	cout << "Wind: " << wind << "\n";
	cout << "Rain: " << rain << "\n";

	return 0;

}
