# include <stdio.h> 

int calculate_bonus(int number_of_years);

int calculate_bonus(int number_of_years){
 
  int bonus_from_boss = number_of_years * 350;
  
  if (number_of_years > 12){
     bonus_from_boss += 1050;
  }
   
  return bonus_from_boss;
}


int main(){
  
  printf("\nThe bonus of Bisher is $%d", calculate_bonus(14));
  printf("\nThe bonus of Emran is $%d",calculate_bonus(4) );
  
  return 0;
}
