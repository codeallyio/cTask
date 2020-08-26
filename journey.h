#ifndef TRAFFICANALYZER_JOURNEY_H
#define TRAFFICANALYZER_JOURNEY_H

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

int **average_time_in_traffic(journey_t **journeys);

#endif //TRAFFICANALYZER_JOURNEY_H
