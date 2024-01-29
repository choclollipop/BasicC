# 自定义变量
# 变量赋值
OBJ=main.o add.o sub.o mul.o div.o
TARGET=main

# 使用自定义变量：$（TARGET）必须要加$符号
$(TARGET):$(OBJ)
	$(CC) $^ -o $@

add.o:add.c
	$(CC) -c $^ -o $@

sub.o:sub.c
	$(CC) -c $^ -o $@

mul.o:mul.c
	$(CC) -c $^ -o $@

div.o:div.c
	$(CC) -c $^ -o $@

main.o:main.c
	$(CC) -c $^ -o $@

# 伪目标
.PHONY:clean

clean:
	@$(RM) *.o $(TARGET)