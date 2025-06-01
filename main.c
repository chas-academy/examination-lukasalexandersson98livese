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

    int calculate_sum (int results[13]){
        int sum = 0;
        for(int i = 0; i< 13; i++){
            sum += results[i];

        }

        return sum;
        }

    float calculate_avarage(int sums[5])
    {
        float total = 0;
        for(int i = 0; i<5; i++){
            total += sums[i];
        }
        return total / 5;
        }

        int get_highest_index(int sums[5]){
            int max = sums[0];
            int index = 0;
            for(int i = 0; i < 5; i++) {
                if (sums[i] > max){
                    max = sums[i];
                    index = i;
                }
            }

            return index;
        }

        void make_upper_first_letter(char name[11]){
            if(islower(name[0])){
                name[0] = toupper (name[0]);
            }
        }

        void print_below_avarage(char names[5][11], int sums[5],
             float average) {
                for (int i = 0; i < 5; i++)
                {
                    if (sums[i] < average) {
                        make_upper_first_letter(names[i]);
                        printf( "%s\n", names[i]);
                    }
                }
            }
             

int main(){
char names[5][11];
int results[5][13];
int sums[5];

read_input (names, results);
for (int i = 0; i < 5; i++){
    sums[i] = calculate_sum(results[i]);
}

int highest_index = get_highest_index (sums);

 make_upper_first_letter(names[highest_index]);
    printf("%s\n", names[highest_index]);

    float avg = calculate_avarage(sums);
    print_below_avarage(names, sums, avg);

    return 0;
}
