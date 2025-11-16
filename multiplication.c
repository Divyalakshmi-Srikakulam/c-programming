int main () 
{
int a[R1] [C1] = {{1, 2, 3}, {4, 5, 6}};
int b[R2] [C2] = {{7, 8}, {9, 1}, {2, 3}};
int result[R1] [C2] = {0};
int i, j, k;
// The core Logic for matrix multiplication
for (i = 0; i < R1; i++) {
for (j = 0; j < C2; j++) {
for (k = 0; k < C1; k++) {
result[i][j] += a[i][k] * b[k][]
// Print the resultant matrix
printf("Resultant matrix: \n");
for (i = 0; i < R1; i++) {
for (j = 0; j < C2; j++) {
printf("%d ", result[i] [j]);
}
printf("\n");
return 0;
}
