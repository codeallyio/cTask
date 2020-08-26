#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "utils.h"


journey_t **get_example_journeys() {
    journey_t **journeys = malloc(5 * sizeof(journey_t *));
    journeys[0] = create_journey(Monday, 14, 0, 0, Monday, 17, 0, 0);
    journeys[1] = create_journey(Tuesday, 12, 30, 0, Tuesday, 13, 0, 0);
    journeys[2] = create_journey(Wednesday, 21, 0, 0, Thursday, 1, 0, 0);
    journeys[3] = create_journey(Friday, 11, 0, 0, Sunday, 13, 0, 0);
    journeys[4] = create_journey(Saturday, 20, 0, 0, Sunday, 10, 0, 0);
    for (int i = 0; i < 5; i++) {
        if (journeys[i] == NULL) {
            for (int j = 0; j < 5; j++)
                free(journeys[j]);
            free(journeys);
            return NULL;
        }
    }
    return journeys;
}

int main(int argc, char *argv[]) {
    journey_t **journeys;

    if (argc == 1) {
        journeys = get_example_journeys();
    } else {
        journeys = get_journeys_from_stdin();
    }

    if (journeys == NULL) {
        fprintf(stderr, "Memory allocation error\n");
    }

    int **average_time_table = average_time_in_traffic(journeys);
    if (display_average_time_spent(average_time_table) != 0)
        fprintf(stderr, "Memory allocation error\n");

    return 0;
}
