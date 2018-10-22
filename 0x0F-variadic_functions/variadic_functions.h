#ifndef VAR_FUNC_H
#define VAR_FUNC_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct types - Struct for data types and function pointers
 * @type: The data type to be specified by print_all
 * @f: The corresponding function pointer for each data type
 *
 * Description: Data types specified by print_all have corresponding functions
 */
typedef struct types
{
	char *type;
	void (*f)();
} types_t;
void print_all(const char * const format, ...);
#endif
