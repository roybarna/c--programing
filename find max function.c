#include <stdio.h>
int main() {
int set1[5] = {10, 20, 30, 40, 50};
int set2[5] = {101, 201, 301, 401, 501};
int i, max;
/* Process first set of numbers available in set1[] */
max = set1[0];
i = 1;
while( i < 5 ) {
if( max < set1[i] ) {
max = set1[i];
}
i = i + 1;
}
printf("Max in first set = %d\n", max );
/* Now process second set of numbers available in set2[] */
max = set2[0];
i = 1;
while( i < 5 ) {
if( max < set2[i] ) {
max = set2[i];
}
i = i + 1;}
printf("Max in second set = %d\n", max );
}