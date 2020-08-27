### Business Travel Analyzer

 Your company workers are very often on business trip. Each trip is shorter than 168 hours. You want to know when exactly 
 and how much time they spend on it. 
 
 Implement a function that will analyze array of travel data
 and return table with average time spent on trip for every weekday and for every hour.
 Returned values should be in seconds.
 
 Complete the function in <b>trip.c</b> file according to its documentation. In <b>main.c</b> file you can find
 some example data. All necessary information to complete this task are in <b>trip.c/.h</b> files.
 Do <b>NOT</b> change anything except <b>trip.c</b> file and <b>get_trip_example</b> function in <b>main.c</b>
 
##### Run your solution

To test your solution on example data, run in project directory:
```
./run.sh
```
If your solution runs properly, you will see the table like:
```
-------------------------------------
|       |00:00|01:00|...|23:00|Total|
-------------------------------------
|Monday |    0|  120|...|  720| 2500|
...
|Sunday |  360|  360|...|  360| 1080|
-------------------------------------
```


### Testing candidate solution

Run in project directory:
```
./test.sh
```
Test in file.in is PASSED, only if program compiles, doesn't timeout and output is the same as in file.out