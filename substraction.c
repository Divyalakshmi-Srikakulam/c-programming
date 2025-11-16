tinclude<stdio. h>
int main ()
{
int r,c,i, j;
printf("enter number of rows:");
scanf("%d",&r);
printf("enter number of columns:");
scanf("%d",&c);
int a[r ] [ c ] , b[r ] [ c ] , sub[r ] [c];
printf("enter elements of first matrix: \n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf ("%d" , &a[i ] [j] ) ;
for(i=0;i<r;i++){
for(j=0;j<c;j++){
sub[ i ] [ j] =a[ i] [j] -b[i][j];
printf("\n resultant matrix(after subtra
for(i=0;i<r;i++){
for(j=0; j<c;j++){
printf ("%d" , sub[ i] [j] ) ;
}
