//Implementation of the First Come first serve algorithm of os scheduling.
//program assumes that the processes arrive in order from 1-4.

//Player will enter in burst time and the program will compute the wait time for each process, the average wait time

#include <iostream>
#include <string>


int main()
{
	/////////////////////////////////////////
	//Variables
	/////////////////////////////////////////

	int jobExe[4], jobWait[4], jobServe[4]; //the burst time, wait time, and service time respectivley


	int test;

	/////////////////////////////////////////
	//Input/output block
	/////////////////////////////////////////

	std::cout << "I am a CPU. I need some jobs.\n";

	for (int i = 0; i < 4; i++)
	{
		std::cout << "\nPlease enter the burst time for process " << i + 1 << " as a positive integer: ";
		std::cin >> jobExe[i];

		//if the cin fails

		while (std::cin.fail() || jobExe[i] < 0)
		{
			std::cout << "Please enter the burst time for process " << i + 1 << " as a positive integer. Make sure it's a positive integer this time: ";
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> jobExe[i];
		}

	}
	
	/////////////////////////////////////////////
	//Input is secured. Time to run the algorithm
	/////////////////////////////////////////////

	//First job has no wait time and is at 0 service time
	jobWait[0] = 0;
	jobServe[0] = 0;
	/////////////////////////////////////////////////////

	for (int i = 1; i <= 4; i++)//calculate service time
	{


	}
	

	
	
	
	system("Pause");
	return 0;
}