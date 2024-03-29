#include "travel_itinerary.h"
#include "db_functions.h"
#include <stdio.h>
#include <stdlib.h>
// #include <sqlite3.h>

int	root_form()
{
	int	action = 0;
	int	res = 0;
	int	fseek_res = 0;

	printf("Welcome to your Travel Itinerary organizer!\n\nWhat would you like to do?\n1 = Start a new trip\n2 = Edit an existing trip\n3 = View a trip\n4 = Exit\n");
	while (1)
	{
		printf("check\n");
		res = scanf("%i", &action);
		if (res == EOF)
		{
			fseek_res = fseek(stdin, 0, SEEK_END);
			printf("fseek res: %i\n", fseek_res);
			// printf("Please enter a valid option\n");
			// continue;
		}
		if (!(action > 0 && action < 5))
		{
			printf("Please enter a valid option\n");
			continue;
		}
		break;
	}
	return action;
}

// best practice only open connection as needed
int	main(void)
{
	sqlite3	*db = open_db();
	int	action = 0;

	if (db == NULL)
		return EXIT_FAILURE;
	while (1)
	{
		action = root_form();
		if (action == NEW)
		{
			new_trip();
		}
		else if (action == EDIT)
		{
			// edit trip function
		}
		else if(action == VIEW)
		{
			// view trip function
		}
		else
		{
			sqlite3_close(db);
			return EXIT_SUCCESS;
		}
	}
	sqlite3_close(db);
	return(EXIT_FAILURE);
}
