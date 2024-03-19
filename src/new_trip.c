// #include "travel_itinerary.h"
#include "utils.h"
#include <stdlib.h>
#include <stdio.h>

int	new_trip(void)
{
	char	*destination = NULL;
	char	*startDate = NULL;
	char	*endDate = NULL;

	printf("Please enter the destination of your new trip\n");
	destination = scanf_valid_str(destination);
	if (!destination)
	{
		//error handling
	}
	printf("Please enter the start date as DD/MM/YYYY\n");
	startDate = scanf_valid_str(startDate);
	if (!startDate)
	{
		//error handling
	}
	printf("Please enter the end date as DD/MM/YYYY\n");
	endDate = scanf_valid_str(endDate);
	if (!endDate)
	{
		//error handling
	}
	printf("Destination: %s\nStart date: %s\nEnd date: %s\n", destination, startDate, endDate);
	return EXIT_SUCCESS;
}
