#include <stdio.h>

enum WeekDay {
    Monday = 0,
    Tuesday = 1,
    Wednesday = 2,
    Thursday = 3,
    Friday = 4,
    Saturday = 5,
    Sunday = 6
};

typedef struct {
    enum WeekDay day;
    int hr, min, sec;
} timestamp_t;

typedef struct {
    timestamp_t *start, *end;
} journey_t;

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

int main() {
    printf("Hello, World!\n");
    return 0;
}
