//Write your code in this file
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void read_input(char names[5][11],
int results[5][13]){
    for (int i = 0; i < 5; i++){
    scanf("%s", names[i]);
    for(int j = 0; j < 13; j++)
    {
        scanf("%d", &results[i][j]);
    
        }
       }
      }

    int calculate_average (int results[13]){
        int sum = 0;
        for(int i = 0; i< 13; i++){
            sum += results[i];

        }

        return sum;
        }


int main(){
char names[5][11];
int results[5][13];
int sum[5];

read_input (names, results);





    return 0;
}
    


