CXX = g++

CXXFLAGS= -Wall -Wextra -O2

TARGET= myarchinfo

SRCS=src/archinfo.cpp

PREFIX= /usr/local

all:$(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

install: $(TARGET)
	install -Dm755 $(TARGET) $(PREFIX)/bin/$(TARGET)

clean:
	rm -f $(TARGET)