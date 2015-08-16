CXX = g++
CPPUTEST_HOME = /usr/include/CppUTest
CPPFLAGS += -I$(CPPUTEST_HOME)
CXXFLAGS += -include $(CPPUTEST_HOME)/MemoryLeakDetectorNewMacros.h
#CFLAGS += -include $(CPPUTEST_HOME)/MemoryLeakDetectorNewMacros.h
LD_LIBRARIES = -lCppUTest -lCppUTestExt
TARGET = FIRST_TEST
SRCS = calc.c AllTests.cpp FirstTest.cpp
#OBJS = $(SRCS:.cpp=.o)
OBJS = calc.o AllTests.o FirstTest.o 

all: $(TARGET)

$(TARGET): $(OBJS)
	echo $(OBJS)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LD_LIBRARIES)

clean:
	rm -rf *.o

