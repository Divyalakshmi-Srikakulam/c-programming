#include<math. h>
int main()
{
int g,h,i, j,k;
float percentage;
scanf("%d%d%d%d%d",&g,&h,&i,&j,&k);
percentage=(float) (g+h+i+j+k)*100/500;
if (percentage>=90) {
printf("Grade A");
}
else if (percentage>=80){
printf("Grades B");
}
else if (percentage>=70){
printf("Grade C");
}
else if(percentage>=60){
printf("Grade D");
}
else if(percentage>=40) {
printf("Grades E") ;
}
else{
printf("Grade F");
}
return 0;
}
