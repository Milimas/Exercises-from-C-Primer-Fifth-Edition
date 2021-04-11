CC = g++
FLAGS = -Wall
TARGET = main
BUILD = build\$(TARGET)
RM = del /f

$(TARGET): $(TARGET).cpp
	$(CC) $(FLAGS) -o $(BUILD) $(TARGET).cpp && $(BUILD).exe

clean:
	$(RM) $(BUILD)