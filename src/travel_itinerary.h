#ifndef TRAVEL_ITINERARY_H
# define TRAVEL_ITINERARY_H

# include <time.h>

// parked for later add rental type to rental_struct
// typedef enum rental_type
// {
// 	TRANSPORTATION,

// }

typedef enum root_action
{
	NEW = 1,
	EDIT = 2,
	VIEW = 3,
	EXIT = 4
}	root_action;

typedef enum transport_type
{
	FLIGHT = 1,
	TRAIN = 2,
	BUS = 3,
	BOAT = 4
}	transport_type;

typedef struct address
{
	char			*street;
	char			*additional;
	char			*postal;
	char			*city;
	char			*country;
}	address;

typedef struct location
{
	char			*name;
	address			address_;
	char			*phone_nr;
}	location;

typedef struct rental
{
	location		company_info;
	char			*description;
	char			*booking_nr;
	struct tm		date;
	time_t			duration;
}	rental;

// rename to more descriptive
typedef struct transport
{
	transport_type	type;
	struct{
		location	location_;
		struct tm	date;
	}	depart_info;
	struct{
		location	location_;
		struct tm	date;
	}	arrive_info;
	char			*booking_nr;
}	transport;

int	new_trip(void);

#endif

