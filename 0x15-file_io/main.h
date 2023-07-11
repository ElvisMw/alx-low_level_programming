#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024
#define PERMISSIONS 0664

#include <elf.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cp_file(const char *file_from, const char *file_to);
void print_elf_header(char *filename);
void print_error(char *msg);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abiversion(unsigned char *e_ident);
void print_type(unsigned int e_type);
void print_entry(unsigned long int e_entry);
void read_elf_header(int fd, Elf64_Ehdr *e_hdr);
void elf_header(char *filename);

#endif
