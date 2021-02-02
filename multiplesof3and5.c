#include <stdio.h>
#include <stdlib.h>

int main(){
    int stopper = 1000;
    int i = 0;
    int total = 0;
    while(i < stopper) {
        if(i % 3 == 0) {
            total = total + i;}
        else if(i % 5 == 0) {
            total = total + i;}
        i++;
    }
    printf("Total: %d", total);
}
///Returns 233168, correct answer.
