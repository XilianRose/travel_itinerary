#include "travel_itinerary.h"
#include <sqlite3.h>

sqlite3	*open_db(void)
{
	sqlite3	*db;
	int		rc;

	rc = sqlite3_open("../test.db", &db);
	if (rc != SQLITE_OK)
	{
		printf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		return NULL;
	}
	return db;
}
