all:
	gcc -o ecalc ecalc.c -lm
install:
	cp ecalc /usr/bin
