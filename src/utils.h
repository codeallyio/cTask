#ifndef TRAFFICANALYZER_UTILS_H
#define TRAFFICANALYZER_UTILS_H

#include "trip.h"

int display_average_time_spent(int **average_time_spent);

trip_t **get_trips_from_stdin(int trips_num);

trip_t *create_trip(enum WeekDay day1, int hr1, int min1, int sec1,
                    enum WeekDay day2, int hr2, int min2, int sec2);

int get_trips_num_from_stdin();

#endif //TRAFFICANALYZER_UTILS_H
