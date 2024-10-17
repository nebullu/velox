# 
# @file Makefile
# @date 16.07.2024
# @author Riza Kaan Ucak
# @project velox
#

# executable
TARGET = velox

# paths 
SRCDIR = src
BUILDDIR = build
BINDIR = $(BUILDDIR)/bin

# project sources
HEADERS=$(wildcard $(SRCDIR)/*.h)
SOURCES=$(wildcard $(SRCDIR)/*.cpp)
OBJECTS=$(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SOURCES))
DEPS = $(OBJECTS:.o=.d)
INCLUDES = -I include/ -I /usr/local/include

# compiler
CXX=c++
UNAME:=$(shell uname -s)
ifeq ($(UNAME), Darwin)		
	# macos	
    CXX_FLAG = -std=c++14 -shared -Wall -Wextra -g
endif

.PHONY: default
default: release 

.PHONY: dirs
dirs:
	@echo "creating directories"
	@mkdir -p $(dir $(OBJECTS))
	@mkdir -p $(BINDIR)

.PHONY: clean
clean:

.PHONY: release
release: clean dirs build
	@echo 'running release ...'

.PHONY: build
build: ${OBJECTS}
	@echo "headers: "${HEADERS}
	@echo "sources: "${SOURCES}
	@echo "objects: "${OBJECTS}
	@#${CXX} ${CXX_FLAG} ${sources} ${BUILD_DIR}/${objects}

%.o : %.cpp
	# compile sources
	echo "compile sources"
	${CXX} ${CXX_FLAG} -c $^ -o $@

debug:
	@echo "headers:" $(HEADERS)
	@echo "sources:" $(SOURCES)
	@echo "objects:" $(OBJECTS)
