#ifndef TRAFFICANALYZER_UTILS_H
#define TRAFFICANALYZER_UTILS_H

#include "journey.h"

int display_average_time_spent(int **average_time_spent);

journey_t **get_journeys_from_stdin();

journey_t *create_journey(enum WeekDay day1, int hr1, int min1, int sec1,
                          enum WeekDay day2, int hr2, int min2, int sec2);

#endif //TRAFFICANALYZER_UTILS_H
