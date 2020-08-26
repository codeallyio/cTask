#include <stdlib.h>
#include "journey.h"

/** @brief Calculates average time spent in traffic.
 * Calculates average time per journey spent in traffic for every weekday
 * for all day and every hour.
 * Returns array containing average time in seconds. If average time is not
 * integer, rounds it. For example result[Monday][6] contains average time
 * per journey spent in traffic on Mondays from 06:00:00 to 06:00:59
 * and result[Monday][24] is average time in traffic spent on Mondays.
 * @param journeys [in]   - array of journey pointers.
 * @return Array with average time spent in traffic for every weekday
 * for all day end every hour calculated in seconds, NULL if @p journeys
 * is NULL.
 */
int **average_time_in_traffic(journey_t **journeys) {
    // TODO implement this function and complete documentation if necessary
    return NULL;
}