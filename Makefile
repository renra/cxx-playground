all:
	g++ -std=c++11 -Wall lab.cxx -o lab
	g++ -std=c++11 -Wall namespace_conflict.cxx -o namespace_conflict
clean:
	rm -rf lab
	rm -rf namespace_conflict
