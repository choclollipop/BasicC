# 自定义变量
OBJ=main.o add.o sub.o mul.o div.o
TARGET=main

# 使用自定义变量：$（TARGET）必须要加$符号
$(TARGET):$(OBJ)
	gcc $^ -o $@

add.o:add.c
	gcc -c $^ -o $@

sub.o:sub.c
	gcc -c $^ -o $@

mul.o:mul.c
	gcc -c $^ -o $@

div.o:div.c
	gcc -c $^ -o $@

main.o:main.c
	gcc -c $^ -o $@

clean:
	@rm -rf *.o $(TARGET)