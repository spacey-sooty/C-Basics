echo Starting to Compile

while getopts "crhi" flag; do
 case $flag in
   c) # Handle the -c flag
   gcc -o target/main.exe src/c/Main.c
   ;;
   r) # Handle the -r
   gcc -o target/main.exe src/c/Main.c
   chmod u+rx target/Main.exe
   ./target/Main.exe
   ;;
   h) # Handle the -h flag
   echo call ./comp -i to initialise
   echo call ./comp -h for help
   echo call ./comp -c to compile
   echo call ./comp -r to run
   ;;
   i)
   mkdir target
   ;;
   \?)
   # Handle invalid options
   echo call ./comp -h for help
   ;;
 esac
done
