//Contiene una implementación incompleta de insertion_sort(), falta implementar insert()
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"


static void insert(int a[], unsigned int i, unsigned int length) {
   // proc insert (in/out a: array[1..n] of T, in i: nat)
    unsigned int j;
    j = i;
    while ( (j > 0) && goes_before(a[j], a[j-1]) ) {
        array_dump(a,length);
        swap(a, j-1, j);
        j-- ;
    }
}

void insertion_sort(int a[], unsigned int length) {
    for (unsigned int i = 0; i < length; ++i) {
        insert(a, i, length);
    }
    assert(array_is_sorted(a,length));
}
