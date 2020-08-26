#ifndef TRAFFICANALYZER_TRIP_H
#define TRAFFICANALYZER_TRIP_H

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
} trip_t;

int **average_time_on_business(trip_t **trips, int trips_num);

#endif //TRAFFICANALYZER_TRIP_H
