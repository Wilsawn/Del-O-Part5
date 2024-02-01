# include <stdio.h>

int main(){

int set_array[] = {10, 20, 4, 5, 11};
int smallest_number = set_array[0];

for (int i = 0; i <= 4; i++){

  if( smallest_number > set_array[i])
    smallest_number = set_array[i];
}
    
printf("The smallest number is %d", smallest_number);

return 0;
}
