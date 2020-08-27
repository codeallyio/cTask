#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "utils.h"

trip_t **get_example_trips() {
    trip_t **trips = malloc(5 * sizeof(trip_t *));
    if (trips == NULL)
        return NULL;
    trips[0] = create_trip(Monday, 14, 0, 0, Monday, 17, 0, 0);
    trips[1] = create_trip(Tuesday, 12, 30, 0, Tuesday, 13, 0, 0);
    trips[2] = create_trip(Wednesday, 21, 0, 0, Thursday, 1, 0, 0);
    trips[3] = create_trip(Friday, 11, 0, 0, Sunday, 13, 0, 0);
    trips[4] = create_trip(Saturday, 20, 0, 0, Sunday, 10, 0, 0);
    for (int i = 0; i < 5; i++) {
        if (trips[i] == NULL) {
            for (int j = 0; j < 5; j++)
                free(trips[j]);
            free(trips);
            return NULL;
        }
    }
    return trips;
}

int main(int argc, char *argv[]) {
    int trips_num;
    trip_t **trips;

    if (argc == 1) {
        trips_num = 5;
        trips = get_example_trips();
    } else {
        trips_num = get_trips_num_from_stdin();
        trips = get_trips_from_stdin(trips_num);
    }

    if (trips == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        return 1;
    }

    int **average_time_table = average_time_on_business(trips, trips_num);
    if (display_average_time_spent(average_time_table) != 0) {
        fprintf(stderr, "Memory allocation error\n");
        return 1;
    }
}
