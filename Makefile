CC=g++
CFLAGS=-std=c++14 -Wall
LDFLAGS=

SRCDIR=src
OBJDIR=obj
BINDIR=bin

SOURCES=$(wildcard $(SRCDIR)/*.cpp)
OBJECTS=$(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
EXECUTABLE=$(BINDIR)/plugin_example

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CC) $(LDFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(BINDIR)

.PHONY: all clean
