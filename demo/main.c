/*
 * 1.  Given a number find if it is a Prime number or not
 * 2.  Given a number find all dual primes less than the number.
        a.Dual Prime : Two prime numbers which are just one number apart like (3 and 5) and (5 and 7)
 */

#include <stdio.h>
#include <math.h>
int identifyprime(int table);
int main(int argc, char **argv)
{
    int table, prime;
    printf(" \n Please enter the table number");
    scanf("%d", &table);
    
    if(table == 1 || table ==2){
        printf("It is a prime number");
        return 0;
    }
        
    prime = identifyprime(table);
    if (prime == 1){
        printf(" \n Number: %d is a PRIME NUMBER", table);   
        while(1){
        table = table-1;
        prime = identifyprime(table);
        if (prime == 1)
        {
            printf(" \n Pervious prime number: %d ", table);
            return 0;
        }   
        }
    }
    else
        printf(" \n SORRY :( this is not a prime number");

    return 0;
}


int identifyprime(int table){
    int looptillnumber, loopnumber,prime;
    float dtillnumber;
    prime = 1;
    dtillnumber = sqrt(table);
    looptillnumber = ceil(dtillnumber);
    
    loopnumber = 2;
    while(loopnumber != looptillnumber)
    {
        if(table%loopnumber == 0){
            prime++;
            return 0;
        }
        loopnumber++;
    }
    return prime;
 }