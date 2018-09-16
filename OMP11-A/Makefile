main: main.cpp
	g++ -g -Wall -o main main.cpp

data.out: main
	./main < data.in > data.out

test: data.out
	diff data.out data.sol && echo "\n\033[0;32m+----------+\n| Success! |\n+----------+\033[0m\n"

clean:
	rm main data.out

