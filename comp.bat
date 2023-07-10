@ECHO OFF

echo starting to compile


:GETOPTS
 if /I "%1" == "-i" (
  mkdir target
 )
 if /I "%1" == "-h" (
  echo -h called
  echo call -h for help
  echo call -c to compile
  echo call -r to compile
  echo call -i for install
 )
 if /I "%1" == "-c" (
  echo -c called
  gcc -o target\main.exe src\main.c
 )
 if /I "%1" == "-r" (
  echo -r called
  gcc -o target\main.exe src\main.c
  start target\main.exe
  .\target\main.exe
 )
 shift
