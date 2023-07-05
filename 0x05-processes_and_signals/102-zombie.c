#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * infinite_while - creates an infinite sleep loop
 *
 * Return: 0
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - creates the 5 zombie processes
 *
 * Return: infinite_while zombies
 */

int main(void)
{
	pid_t zombie_PID;
	int i;

	for (i = 0; i < 5; i++)
	{
		zombie_PID = fork();
		if (zombie_PID == 0)
			exit(0);
		else
			printf("Zombie process created, PID: %d\n", zombie_PID);
	}
	return (infinite_while());
}
