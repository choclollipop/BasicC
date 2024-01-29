TARGET=libMyDiv.a
OBJ=$(patsubst %.c, %.o, $(wildcard ./*.c))

$(TARGET):$(OBJ)
	$(AR) -r $(TARGET) $^

%.o:%.c
	$(CC) -c $^ -o $@

clean:
	$(RM) -r *.o $(TARGET)