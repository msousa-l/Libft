# Define the compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror


# Source files and the output executable
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_tolower.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c \
			ft_memcmp.c ft_memset.c ft_strchr.c ft_strlcat.c ft_toupper.c \
			ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_calloc.c ft_strrchr.c \
			ft_memmove.c ft_strdup.c ft_strnstr.c ft_strjoin.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c \
			ft_strtrim.c ft_substr.c ft_split.c ft_itoa.c ft_striteri.c
OUT = /myprogram/

# Default target: the first one defined
all: $(OUT)

# Compile your program
$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

# Clean up generated files
clean:
	rm -f $(OUT)
