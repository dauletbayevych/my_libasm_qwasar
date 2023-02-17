# my_libasm

Is an assembly library.

## What is assembly?

An assembly language is a low-level programming language designed for a specific type of processor. It may be produced by compiling source code from a high-level programming language (such as C/C++) but can also be written from scratch.

## Functions made in assembly

```c
- strlen      -> _my_strlen
- strchr      -> _my_strchr
- memset      -> _my_memset
- memcpy      -> _my_memcpy
- strcmp      -> _my_strcmp
- memmove     -> _my_memmove

- strncmp     -> _my_strncmp
- strcasecmp  -> _my_strcasecmp
- index       -> _my_index

- read        -> _my_read
- write       -> _my_write
```
## How to run?

1. You will need to have `nasm`
```
sudo apt update
sudo apt install nasm
```
2. Now you will be able to run the program, to make file
 ```
make
```
3. You can run the premade test cases with
```
./my_libasm
```
   * if you wish to have your own test cases you will have to comment `line 24` in `src/main.c` and write them.
4. After you've done using `./my_libasm` you can `make clean`
    * To clean the objects
         ``` 
          make clean
         ```
    * To clean the objects and the run file `./my_libasm`
         ```
         make fclean
         ```
    * To `make clean` and `make fclean`
         ```
         make re
         ```
    
