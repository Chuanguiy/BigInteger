Demo:BigInt.o test.o
	@g++ -o Demo BigInt.o test.o
BigInt.o:BigInt.h BigInt.cpp
	@g++ -c BigInt.cpp
test.o:BigInt.h test.cpp
	@g++ -c test.cpp
 .PHONY:clean
 clean:
	@rm -f BigInt.o test.o Demo
.PHONY:test
test:
	./Demo
