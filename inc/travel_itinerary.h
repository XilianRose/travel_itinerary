/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   travel_itinerary.h                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mstegema <mstegema@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/01 09:10:01 by mstegema      #+#    #+#                 */
/*   Updated: 2023/12/01 12:40:25 by mstegema      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRAVEL_ITINERARY_H
# define TRAVEL_ITINERARY_H

# include <time.h>

// parked for later add rental type to rental_struct
// typedef enum rental_type
// {
// 	TRANSPORTATION,

// }

typedef enum transport_type
{
	FLIGHT = 0,
	TRAIN = 1,
	BUS = 2,
	BOAT = 3
}	transport_type;

typedef struct address
{
	char		*street;
	char		*additional;
	char		*postal;
	char		*city;
	char		*country;
}	address;

typedef struct location
{
	char		*name;
	address		address_;
	char		*phone_nr;
}	location;

typedef struct rental
{
	location	company_info;
	char		*description;
	char		*booking_nr;
	tm			date;
	timespec	duration;
}	rental;

// rename to more descriptive
typedef struct transport
{
	transport_type	type;
	struct{
		location	location_;
		tm			date;
	}	depart_info;
	struct{
		location	location_;
		tm			date;
	}	arrive_info;
	char		*booking_nr;
}	transport;

#endif

