Create .a file:
ar rcs lib.c
create main as file .o
gcc -o exec file.o -L. lib.a
./exec


shhuang@LAPTOP-2QEICO5A:/mnt/c/Users/Sheng/Desktop/so_long/utility/libft$ gcc -c main.c
shhuang@LAPTOP-2QEICO5A:/mnt/c/Users/Sheng/Desktop/so_long/utility/libft$ gcc -o main main.o -L. libft.a
shhuang@LAPTOP-2QEICO5A:/mnt/c/Users/Sheng/Desktop/so_long/utility/libft$ ./main
4
