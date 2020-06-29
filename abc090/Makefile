CXX		= g++
CXXFLAGS	= -std=gnu++17 -O2 -Wall

%: %.cpp Makefile
	time $(CXX) $(CXXFLAGS) -o $@ $<
	./$@
