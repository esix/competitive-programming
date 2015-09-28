CC=g++
CFLAGS=-c -Wall -I/usr/local/include
LDFLAGS=-lgtest -L/usr/local/lib
SOURCES=triple_test.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=triple_test

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLE) *.o 
