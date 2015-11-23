CC=g++
CFLAGS=-c -Wall -I/usr/local/include
LDFLAGS=-lgtest -L/usr/local/lib
SOURCES=test-all.cpp triple-test.cpp big-dec-test.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=test-all

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLE) *.o
