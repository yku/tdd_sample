CXX = g++
CPPUTEST_HOME = /usr/include/CppUTest
CPPFLAGS += -I$(CPPUTEST_HOME) -Iinclude
CXXFLAGS += -include $(CPPUTEST_HOME)/MemoryLeakDetectorNewMacros.h -Iinclude
#CFLAGS += -include $(CPPUTEST_HOME)/MemoryLeakDetectorNewMacros.h
LD_LIBRARIES = -lCppUTest -lCppUTestExt
TARGET = FIRST_TEST
SRC_DIRS = src
TEST_SRC_DIRS = test
#SRCS = calc.c AllTests.cpp FirstTest.cpp
SRCS = $(wildcard $(SRC_DIRS)/*.c) $(wildcard $(TEST_SRC_DIRS)/*.cpp)
_srcs = $(subst .cpp,.c,$(SRCS))
OBJS = $(_srcs:.c=.o)
#OBJS = src/calc.o test/AllTests.o test/FirstTest.o

all: $(TARGET)

$(TARGET): $(OBJS)
	echo $(SRCS)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LD_LIBRARIES)

dump:
	@echo "src:$(SRCS)"
	@echo "temp:$(_srcs)"
	@echo "obj:$(OBJS)"

clean:
	rm -rf $(SRC_DIRS)/*.o
	rm -rf $(TEST_SRC_DIRS)/*.o
	rm $(TARGET)
