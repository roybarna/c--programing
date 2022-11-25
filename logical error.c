1. #include <stdio.h>
2. int main()
3. {
4. int sum=0; // variable initialization
5. int k=1;
6. for(int i=1;i<=10;i++); // logical error, as we put the semicolon after loop
7. {
8. sum=sum+k;
9. k++;
10. }
11. printf("The value of sum is %d", sum);
12. return 0;
13. }