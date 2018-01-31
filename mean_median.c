#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> /* SIZE_MAX */
#include <string.h>
#include <math.h>

void select_sort(int A[], size_t n)
{
	//Your code goes here!

}

int read_array(FILE *fp, int *p_A[])
{
	ssize_t readCount = 0;
	size_t N = 2, s = sizeof(int);
	size_t max_elms = SIZE_MAX / s;
	int *A = NULL, *P, num;

	*p_A = NULL;

	for (;;) {

		if (fscanf(fp, "%d", &num) == 1) {
		}
		else if (ferror(fp)) {
			free(A);
			return -1;
		}
		else if (feof(fp)) {
			break;
		}

		if (A == NULL || readCount == N) {
			N = N * 3 / 2;

			if (N >= max_elms) {
				N = max_elms;
			}

			size_t size = N * s;

			P = realloc(A, size);

			if (P == NULL) {
				free(A);
				return -1;
			}

			A = P;
		}

		A[readCount] = num;
		readCount++;

		if (readCount == max_elms)
			break;
	}

	*p_A = A;
	return readCount;
}

void print_array(const int *A, int n)
{
	//Your code goes here!

}

double mean_array(const int *A, int n)
{
	//Your code goes here!

}

double median_array(const int *A, int n)
{
	//Your code goes here!

}
