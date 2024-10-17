# 
# @file Makefile
# @date 16.07.2024
# @author Riza Kaan Ucak
# @project velox
#

# executable and libs
PROJECT=velox
TARGET=$(PROJECT).so

# paths 
SRCDIR=src
BUILDDIR=build
BINDIR=$(BUILDDIR)/bin

# project sources
HEADERS=$(wildcard $(SRCDIR)/*.h)
SOURCES=$(wildcard $(SRCDIR)/*.cpp)
OBJECTS=$(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SOURCES))
#OBJECTS=$(SOURCES:$(SRCDIR)/%.cpp, $(BUILDDIR)/%.o)
DEPS=$(OBJECTS:.o=.d)
INCLUDES=-Iinclude/ -I/usr/local/include $(shell sdl2-config --cflags)
LIBS=$(shell sdl2-config --libs)

# compiler
CXX=c++
UNAME:=$(shell uname -s)
ifeq ($(UNAME), Darwin)		
	# macos	
    CXXFLAG = -Wall -Wextra -Wunicode-whitespace -g -std=c++14 
    LDFLAG = #-shared
endif

DBG=1

.PHONY: default
default: release 

.PHONY: dirs
dirs:
	@echo "creating directories"
	@mkdir -p $(BINDIR)

.PHONY: clean
clean:
	rm -f $(BUILDDIR)/*.o

print:
	@echo "headers:" $(HEADERS)
	@echo "sources:" $(SOURCES)
	@echo "objects:" $(OBJECTS)

.PHONY: release
release: print clean dirs build 
	@echo 'running release ...'

.PHONY: build
build: ${OBJECTS}
	$(CXX) $(CXXFLAG) $(LIBS) $(LDFLAGS) $(OBJECTS) -o $(BINDIR)/$(TARGET) 

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	# compile sources
	${CXX} ${CXXFLAG} $(INCLUDES) -c -o $@ $<

.PHONY: debug
debug:
	cd $(BINDIR) && ./$(TARGET)

