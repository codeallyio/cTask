#include <stdlib.h>
#include "trip.h"


/** @brief Calculates average time spent on business trip.
 * Calculates average time per journey spent on business trip for every weekday
 * for all day and every hour.
 * Returns array containing average time in seconds. If average time is not
 * integer, rounds it. For example result[Monday][6] contains average time
 * per trip spent on business on Mondays from 06:00:00 to 06:00:59
 * and result[Monday][24] is average time on business trips spent on Mondays.
 * @param trips [in]     - array of trip pointers,
 * @param trips_num [in] - number of trips in array.
 * @return Array with average time spent in traffic for every weekday
 * for all day end every hour calculated in seconds, NULL if @p trips
 * is NULL or @p trips_num is not positive integer.
 */
int **average_time_on_business(trip_t **trips, int trips_num) {
    // TODO implement this function and complete documentation if necessary
    return NULL;
}