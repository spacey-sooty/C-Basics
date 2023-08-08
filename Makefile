INC = -I src/include
run:
	gcc $(INC) -o target/main.exe src/c/Main.c
	./target/main.exe
