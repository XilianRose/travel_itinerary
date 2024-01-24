#include "travel_itinerary.h"

int	root_form(void)
{
	int	action;

	action = 0;
	printf("Welcome to your Travel Itinerary organizer!\n\nWhat would you like to do?\n1 = Start a new trip\n2 = Edit an existing trip\n3 = View a trip\n4 = Exit\n");
	while (1)
	{
		scanf("%i", &action);
		if (!(action > 0 && action < 5))
		{
			printf("Please enter a valid option\n");
			continue;
		}
		break;
	}
	if (action == NEW)
	{
		// new trip function
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
		return (EXIT_SUCCESS);
	return(EXIT_FAILURE);
}

int	main(void)
{
	if(root_form() == EXIT_SUCCESS)
		return EXIT_SUCCESS;
	return(EXIT_FAILURE);
}
