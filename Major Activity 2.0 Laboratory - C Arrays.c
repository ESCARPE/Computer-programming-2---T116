/*Create a simple log in program where the user inputs ID# and PIN and
if the credentials are correct, the program will print:
    > you have successfully logged in
    > ID#:[ID#]
If credentials doesn't match, the program prints Invalid ID/PIN
The account must be predefined inside 2D Array (int) */


#include <stdio.h>

int array(int sd[3][2],int id, int pin) {

    int cons = 0;

      for(int a = 0; a<3; a++) {

        if(id == sd[a][0] && pin == sd[a][1]) {

          cons = 1;
        }
    }
    return cons;
}
    int main()
{
        int sd[3][2] = {{1225,2522},{2734,3567},{3391,3133}}; //3 Accounts, ID# and PIN(2D Array-3 Rows, 2 Columns

            int id,pin;
                 printf("Input ID Number: ");
                  scanf("%d",&id);

                    printf("\nInput PIN: ");
                     scanf("%d",&pin);

        if(array(sd,id,pin))
    {
            printf("\nLog in successfully\nID#:%d",id);
    }
            else
            {
               printf("\nInvalid ID/PIN!");
            }


    return 0;
}
