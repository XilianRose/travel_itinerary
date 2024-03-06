#pragma once

#include <sqlite3.h>

typedef struct sqlite3 sqlite3;
sqlite3	*open_db(void);
