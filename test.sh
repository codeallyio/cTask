gcc -c -Wall -Wextra main.c utils.c trip.c
gcc -o travelAnalyzer main.o utils.o trip.o
rm *.o
count=0;
passed=0;
for f in $(find tests/in -name '*.in');
do
  ((count++));
  dir=$(dirname $f);
  name=$(basename $f);
  ./travelAnalyzer t <$f> tests/result.out
  echo -n "TEST ${f##*/} : ";
  if diff -q tests/result.out ${dir%in}out/${name%in}out;
    then echo "PASSED";
      ((passed++));
    else echo "FAILED";
    fi;
done;
rm -f tests/result.out
rm -f travelAnalyzer
echo -n "Passed ";
echo -n $passed;
echo -n "/";
echo $count;