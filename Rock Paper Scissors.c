# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <stdbool.h>




# define Rock 1
# define Paper 2
# define Scissor 3


int main(){


  srand(time(NULL));


  int player_throw =  0;
  int robot_throw = 0;
  bool draw = false;


  do
  {
    printf("Select your throw.\n");
    printf("1) Rock\n");
    printf("2) Paper\n");
    printf("3) Scissor\n");
    printf("Selection: ");
    scanf("%d", &player_throw);


    robot_throw = (rand() % 3) + 1;


    if (robot_throw == Rock)
      printf("\n Robot throws Rock.\n");
    else if (robot_throw == Paper)
      printf("\n Robot throws Paper.\n");
    else if (robot_throw == Scissor)
      printf("\n Robot throws Scissors.\n");


    draw = false;
    if (player_throw == Rock && robot_throw == Scissor)
      printf("\nRocks beats Scissors. YOU WIN!\n\n");
    else if (player_throw == Rock && robot_throw == Paper)
      printf("\nPaper beats Rock. YOU LOSE!\n\n");
    else if (player_throw == Scissor && robot_throw == Paper)
      printf("\nScissors beats Paper. YOU WIN!\n\n");
    else if (player_throw == Scissor && robot_throw == Rock)
          printf("\nRock beats Scissors. YOU LOSE!\n\n");
    else if (player_throw == Paper && robot_throw == Rock)
        printf("\nPaper beats Rock. YOU WIN!\n\n");
    else if (player_throw == Paper && robot_throw == Scissor)
          printf("\nScissors beats Paper. YOU LOSE!\n\n");
    else
    {
      printf("\nDRAW! Play again.\n\n");
      draw = true;
    }
 
  }
  while(draw);




    return 0;


}
