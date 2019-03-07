CC=gcc
CFLAGS=
LDFLAGS=
SOURCES=
OBJECTS=$(SOURCES:.cpp=.o)
EXE=emulator.exe

$(EXE): $(OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@

%.o: %.cpp %.h
	$(CC) $(CFLAGS) $< -o $@

default: $(EXE)
overwrite: clean default

clean:
	rm *.o
	rm $(EXE)
