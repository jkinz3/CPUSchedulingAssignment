//Implementation of the First Come first serve algorithm of os scheduling.
//program assumes that the processes arrive in order from 1-4.

//Player will enter in burst time and the program will compute the wait time for each process, the average wait time

#include <iostream>


int main()
{
	/////////////////////////////////////////
	//Variables
	/////////////////////////////////////////

	int jobExe[4], jobWait[4], jobServe[4]; //the burst time, wait time, and service time respectivley

	float avgWait = 0;

	float sum = 0;

	int temp = 0;

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


	////////////////calculate service time///////////////
	for (int i = 1; i < 4; i++)
	{
		jobServe[i] = jobExe[i - 1] + jobServe[i - 1];

	}

	////////////////calculate wait time/////////////////

	for (int i = 1; i < 4; i++)
	{
		jobWait[i] = jobServe[i] - (i);


	}
	


	///////////////////calculate avg wait time///////


	sum = jobWait[0] + jobWait[1] + jobWait[2] + jobWait[3];
	
	avgWait = sum / 4;

	//////////////OUTPUT Y'ALL////////////////

	std::cout << "Process Number" << "\t" << "Burst Time" << "\t" << "Waiting Time " << "\t" << "Service Time\n";


	for (int i = 0; i < 4; i++)
	{
		std::cout << i + 1 << "  \t\t" << jobExe[i] <<  "  \t\t" << jobWait[i] << "  \t\t" << jobServe[i] << "\n";

	}
	
	std::cout << "Average Wait Time was " << avgWait << std::endl << "Thanks! See you later!\n\n";



	return 0;
}