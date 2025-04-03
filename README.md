    💡Custom C Standard Library Implementation💡

**💡Description**

Libft is a custom library designed to replicate essential functions from the C standard library. The goal of this project is to deepen your understanding of how fundamental C functions operate by implementing them from the ground up. It includes a set of commonly used functions in C programming, which can be reused in future projects and assignments.

**💡Objective**

* Implement standard C library functions to gain a deeper understanding of how they work internally.
* Create a custom library (`libft`) that you can reuse across different C programming assignments.
* Expand and improve the library over time by adding more functions and refining existing ones.

**💡Installation**

* Clone the Repository
    
    1.Clone the `libft` repository to your project directory:
    ```bash
    git clone https://github.com/marouaneaddou/libft.git
    ```
    2.Navigate to the `libft` directory and compile the library:
    ```bash 
    cd libft
    make
    ```
**💡 How to Use the Libft Library in Your Project**

Once you've cloned libft into your project, follow these steps to integrate it.

1. 💡Include libft.h in Your Code💡

    In your source files, include the `libft.h` header to access the functions implemented in `libft`.

    ```c
    #include "libft.h"
    ```

2. 💡Compile `Manually` with Multiple Source Files💡

    If you have multiple .c files (e.g., main.c, file1.c, file2.c), you can compile them manually by running the following command:

    ```bash 
    gcc -Wall -Wextra -Werror main.c file1.c file2.c -Llibft -lft -o your_program_name
    ```
    Note: In this command:

    * The `-Llibft` flag tells the compiler to look for the `libft.a` library in the libft directory.

    * If the `libft` folder is located in another directory, replace `libft` with the correct path. For example, if `libft` is in a folder called `libs`, you would use `-Llibs/libft.`

    * Ensure that the `libft` folder and your source files (e.g., `main.c`, `file1.c`, etc.) are either in the same directory or you provide the correct relative or absolute path to `libft.a` and your source files.



3. 💡Compile Using `Makefile` with Multiple Source Files💡



    You can also use the Makefile to handle multiple .c files. Here's a simple example: 

    ***Simple Makefile***  
    ```Makefile
    LIBFT_DIR = libft
    LIBFT = $(LIBFT_DIR)/libft.a
    SRC = main.c file1.c file2.c  
    OBJ = $(SRC:.c=.o)
    NAME = your_program_name

    CC = gcc
    CFLAGS = -Wall -Wextra -Werror

    all: $(NAME)

    $(NAME): $(OBJ) $(LIBFT)
		$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
    
    $(LIBFT):
		make -C $(LIBFT_DIR)
    
    clean:
		rm -f $(OBJ)
		make -C $(LIBFT_DIR) clean 

    fclean: clean
		rm -f $(NAME)
		make -C $(LIBFT_DIR) fclean 

   re: fclean all

<!-- 4. 💡Run the `make` Command💡
    ```bash
    make
    ``` -->
4. 💡Example Usage💡

    **Step 1: Create the `main.c` File**

    Create a new file named `main.c` in your project directory. This file will serve as the entry point for your program.

    You can create `main.c` with the following content:
    ```c
    #include "libft/libft.h"
    #include <stdio.h>

    int main() {
        char *str = "Hello, Libft!";
        printf("Length of string: %ld\n", ft_strlen(str));
    }
    ```
    **Step 2: Compile Your Project**

    To compile your project using the Makefile:
    ```bash
    make
    ```
    **Step 3: Run the Program**

    ```bash 
    ./your_program_name
    ```

    **This should print:**
    ```bash 
    Length of string: 13
    ```

    


