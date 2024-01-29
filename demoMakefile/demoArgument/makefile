# 自定义变量
# 变量赋值
OBJ=$(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET=test_main

PATHS:=/tmp/29main/
BIN:=/usr/bin/

# 使用自定义变量：$（TARGET）必须要加$符号
$(TARGET):$(OBJ)
	$(CC) $^ -o $@

%.o:%.c
	$(CC) -c $^ -o $@

# 伪目标
.PHONY:clean

install:$(TARGET)
	if [ -d $(PATHS) ];						\
		then echo $(PATHS) exits;			\
	else									\
		mkdir $(PATHS);						\
		cp $(TARGET) $(PATHS);				\
		ln -sv $(PATHS)$(TARGET) $(BIN);	\
	fi

# RM:rm -f
clean:
	@$(RM) $(OBJ) $(TARGET)
	@$(RM) -r $(PATHS)
	@$(RM) -r $(BIN)$(TARGET)