//** File Processing **//

#include <stdio.h>

int WritetoFile(char inputs[10], int currentscore, char answers[10])
{
int choice;
FILE *fptr;

printf("To save your results type 1\n");
scanf("%d",&choice);

if ( choice == 1)
{
  fptr = fopen("quiz_results.txt","w");
  printf("Your results were saved into a file\n");

  if (fptr == NULL)
  {
    printf("Your file didn't open");
    return 1;
  }
               //** Writing To File **//
  
    fprintf(fptr,"User inputs and results\n");
    fprintf(fptr, "Question 1: %c\n", inputs[0]);
  fprintf(fptr, "The correct answers was C the Cavaliers\n");
    fprintf(fptr, "Question 2: %c\n", inputs[1]);
   fprintf(fptr, "The correct answers was A the 4 championship rings\n");
  fprintf(fptr, "Question 3: %c\n", inputs[2]);
fprintf(fptr, "The correct answers was B the 2 MVP Awards\n");
 fprintf(fptr, "Question 4: %c\n", inputs[3]);
fprintf(fptr, "The correct answers was C Jayson Tatum\n");
  fprintf(fptr, "Question 5: %c\n", inputs[4]);
 fprintf(fptr, "The correct answers was D Wilt Chamberlain\n");
fprintf(fptr, "Question 6: %c\n", inputs[5]);
fprintf(fptr, "The correct answers was A Kareem Abdul-Jabbar\n");
  fprintf(fptr, "Question 7: %c\n", inputs[6]);
fprintf(fptr, "The correct answers was B LeBron James\n");
fprintf(fptr, "Question 8: %c\n", inputs[7]);
fprintf(fptr, "The correct answers was A Michael Jordan\n");
 fprintf(fptr, "Question 9: %c\n", inputs[8]);
fprintf(fptr, "The correct answers was D Nikola Jokic\n");
fprintf(fptr, "Question 10: %c\n", inputs[9]);
fprintf(fptr, "The correct answers was 1 the MVP Award\n");
  fprintf(fptr, "Your Final Score: %d\n", currentscore);
    
   
    fclose(fptr);
    

}
}
 