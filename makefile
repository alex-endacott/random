random: main.o randBase.o randString.o powerBall.o megaMillions.o
	g++ main.o randBase.o randString.o powerBall.o megaMillions.o -std=c++11 -o bin/random && rm -rf *.o

main.o: main.cpp include/randBase.hpp
	g++ -c main.cpp -std=c++11

randBase.o: include/randBase.hpp src/randBase.cpp
	g++ -c src/randBase.cpp -std=c++11

randString.o: include/randString.hpp src/randString.cpp
	g++ -c src/randString.cpp -std=c++11

powerBall.o: include/powerBall.hpp src/powerBall.cpp
	g++ -c src/powerBall.cpp -std=c++11

megaMillions.o: include/megaMillions.hpp src/megaMillions.cpp
	g++ -c src/megaMillions.cpp -std=c++11