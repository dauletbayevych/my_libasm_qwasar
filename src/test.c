#include "../include/include.h"

void print_strlen(char* str){

    printf("C strlen: %ld Libasm strlen: %ld \n", strlen(str),_my_strlen(str));
}

void print_strncmp(char *str){

    char src[] = "my_name";
    printf("C strncmp: %d Libasm strncmp: %d \n", strncmp(str, src, 1), _my_strncmp(str, src ,1));
}

void print_strcmp(char *str){
    
    char src[] = "my_name";
    printf("C strcmp: %d Libasm strcmp: %d \n", strcmp(str, src),  _my_strcmp(str, src));
}

void print_strcasecmp(char *str){

    char src[] = "cHRIS IS dallat";
    printf("C strcasecmp: %d Libasm strcasecmp: %d \n", strcasecmp(str, src),  _my_strcasecmp(str, src));
}

void print_strchr(char *str){

    char c = 'A';
    printf("C strchar : %s Libasm strchar : %s \n", strchr(str, c),  _my_strchr(str, c));
}

void print_index(char *str){

    char c = 'A';
    printf("C index : %s Libasm index : %s \n", index(str, c),  _my_index(str, c));
}

void print_memcpy(){

    char test_c[] = "Hello world, How are you?",
         test_a[] = "Hello world, How are you?",
         replace[] = "I'm good";

    printf("\nMemcpy: \n%s\n", test_a);
    printf("C memcpy: %s Libasm memcpy : %s\n", (char*)memcpy(test_c,replace, strlen(replace)+1), (char*)_my_memcpy(test_a, replace, strlen(replace)+1));
}

void print_memset(){

    char test_c[] = "Hello world, How are you?",
         test_a[] = "Hello world, How are you?";

    printf("\nMemset: \n%s\n", test_a);
    printf("C memset: %s Libasm memset : %s\n", (char*)memset(test_c,'0', strlen(test_c)), (char*)_my_memset(test_a, '0', strlen(test_a)));
    printf("C memset len : %ld Libasm memset len : %ld\n", strlen(test_c),  strlen(test_a));
}

void print_memmove(){

    char test_c[] = "Hello world, How are you?",
         test_a[] = "Hello world, How are you?";

    printf("\nMemmove: \n%s\n", test_a);
    printf("C memmove: %s Libasm memmove : %s\n", (char*)memmove(test_c, "I'm Good", strlen("I'm Good")+1), (char*)_my_memmove(test_a, "I'm Good", strlen("I'm Good")+1));
    printf("C memset len : %ld Libasm memset len : %ld\n", strlen(test_c),  strlen(test_a));

}

void print_read_write(){

    printf("\nRead and write:\n");
    int fd = open("src/test.txt", O_RDONLY),
        libasm_fd = open("src/test.txt", O_RDONLY);

    char return_c[11],
         return_a[11];

    write(1, "C read: ", strlen("C read: "));
    read(fd, return_c, 11);
    write(1, return_c, 11);

    write(1, "Libasm read: ", strlen("Libasm read: "));
    _my_read(libasm_fd, return_a, 11);
    _my_write(1, return_a, 11);

    close(fd);
    close(libasm_fd);
}


void print_test(){

    char str[] = "Chris is DALLAT";

    printf("\nString functions\n");
    // strlen check
    print_strlen(str);

    // strncmp check 
    print_strncmp(str);

    // strcpy check
    print_strcmp(str);

    // strcasecmp check
    print_strcasecmp(str);

    // strchr check
    print_strchr(str);

    // index check
    print_index(str);

    // memcpy check
    print_memcpy();

    // memset check
    print_memset();

    // memmove check
    print_memmove();
        
    // read and write check
    print_read_write();

}
