 #include <stdio.h>
 #include <math.h>
 #include <stdlib.h>
// Главная програма

int main(void)
{
  FILE *F2;
  int n = 0, min_n = 0, max_n = 0;
  F2 = fopen("input.txt","w");
  printf("Enter the numbers of items\n");
  scanf("%d",&n);
  printf("\nEnter the min numbers\n");
  scanf("%d",&min_n);
  printf("\nEnter the max numbers\n");
  scanf("%d",&max_n);
  fprintf(F2,"%d\n",n);
  for(int i=0;i<n;i++)
  {
    fprintf(F2,"%f\n",((float)rand()*(max_n-min_n)/(float)RAND_MAX+min_n));
  }
  fclose(F2);
  return 0;
}