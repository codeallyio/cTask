gcc -c -Wall -Wextra main.c utils.c trip.c
gcc -o travelAnalyzer main.o utils.o trip.o
rm *.o
./travelAnalyzer
rm travelAnalyzer