#include <iostream>
#include <string>


int main()
{
	/////////////////////////////////////////
	//Variables
	/////////////////////////////////////////

	int job1Arrival = 0, job1Exe = 0, job2Arrival = 0, job2Exe = 0, job3Arrival = 0, job3Exe = 0, job4Arrival = 0, job4Exe = 0;

	

	/////////////////////////////////////////
	//Input/output block
	/////////////////////////////////////////

	std::cout << "I am a CPU. I need some jobs.\n";
	
	//////////////////////////////////////////////
	

	std::cout << "Please enter the arrival time for process 1 as a positive integer: ";
	std::cin >> job1Arrival;

	//////////////////////////////////////below is if the cin fails

	while (std::cin.fail() || job1Arrival < 0)
	{
		std::cout << "Please enter the arrival time for process 1 as a positive integer: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> job1Arrival;
	}



	std::cout << "Please enter the execution time for process 1 as a positive integer: ";
	std::cin >> job1Exe;

	//////////////////////////////////////below is if the cin fails

	while (std::cin.fail() || job1Exe < 0)
	{
		std::cout << "Please enter the arrival time for process 1 as a positive integer: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> job1Exe;
	}

	

	///////////////////////////////////////////////end of first job

	std::cout << "Please enter the arrival time for process 2 as a positive integer: ";
	std::cin >> job2Arrival;

	///////////////////////////////////////////////if the cin fails

	while (std::cin.fail() || job2Arrival < 0)
	{
		std::cout << "Please enter the arrival time for process 2 as a positive integer: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> job2Arrival;
	}



	std::cout << "Please enter the execution time for process 2 as a positive integer: ";
	std::cin >> job2Exe;

	/////////////////////////////////////////////////if the cin fails

	while (std::cin.fail() || job2Exe < 0)
	{
		std::cout << "Please enter the arrival time for process 2 as a positive integer: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> job2Exe;
	}



	//////////////////////////////////////////////// end of second job

	std::cout << "Please enter the arrival time for process 3 as a positive integer: ";
	std::cin >> job3Arrival;


	/////////////////////////////////////////////////if the cin fails

	while (std::cin.fail() || job3Arrival < 0)
	{
		std::cout << "Please enter the arrival time for process 3 as a positive integer: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> job3Arrival;
	}

	std::cout << "Please enter the execution time for process 3 as a positive integer: ";
	std::cin >> job3Exe;

	/////////////////////////////////////////////////if the cin fails

	while (std::cin.fail() || job3Exe < 0)
	{
		std::cout << "Please enter the arrival time for process 3 as a positive integer: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> job3Exe;
	}



	//////////////////////////////////////////////// end of third job

	std::cout << "Please enter the arrival time for process 4 as a positive integer: ";
	std::cin >> job4Arrival;

	/////////////////////////////////////////////////if the cin fails

	while (std::cin.fail() || job4Arrival < 0)
	{
		std::cout << "Please enter the arrival time for process 4 as a positive integer: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> job4Arrival;
	}

	std::cout << "Please enter the execution time for process 4 as a positive integer: ";
	std::cin >> job4Exe;

	/////////////////////////////////////////////////if the cin fails


	while (std::cin.fail() || job4Exe < 0)
	{
		std::cout << "Please enter the arrival time for process 4 as a positive integer: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> job4Exe;
	}
	/////////////////////////////////////////////// end of fourth job



	system("Pause");
	return 0;
}