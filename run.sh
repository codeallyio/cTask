gcc -c -Wall -Wextra src/main.c src/utils.c src/trip.c
gcc -o travelAnalyzer main.o utils.o trip.o
rm *.o
./travelAnalyzer
rm travelAnalyzer