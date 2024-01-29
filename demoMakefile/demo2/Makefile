# 自定义变量
# 变量赋值
OBJ=$(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET=main

LDFALGS=-L./src_a
LIBS=-lMyDiv

# 使用自定义变量：$（TARGET）必须要加$符号
$(TARGET):$(OBJ)
	$(CC) $^ $(LIBS) $(LDFALGS) -o $@

%.o:%.c
	$(CC) -c $^ -o $@

# 伪目标
.PHONY:clean

# RM:rm -f
clean:
	@$(RM) *.o $(TARGET)