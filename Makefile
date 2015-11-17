all:
	#g++ -std=c++11 -Wall lab.cxx -o lab
	g++ -std=c++11 -Wall namespace_conflict.cxx -o namespace_conflict
	g++ -std=c++11 -Wall abstract_classes.cxx -o abstract_classes
clean:
	#rm -rf lab
	rm -rf namespace_conflict
	rm -rf abstract_classes
