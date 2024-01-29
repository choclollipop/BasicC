# 自定义变量
# 变量赋值
OBJ=main.o add.o sub.o mul.o div.o
TARGET=main

# 使用自定义变量：$（TARGET）必须要加$符号
$(TARGET):$(OBJ)
	$(CC) $^ -o $@

%.o:%.c
	$(CC) -c $^ -o $@

# 伪目标
.PHONY:clean

clean:
	@$(RM) *.o $(TARGET)