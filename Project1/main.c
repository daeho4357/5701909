#include <stdio.h>

int main() {

    int sum=0;

    for (int i = 1; i <= 100; i++) {

        int ss = 1;

        if (i == 1){
            ss = 0;
        }
        else
        {
            for (int x = 2; x < i; x++) {
                if (i % x == 0) {
                    ss = 0;
                }
            }
        }

        if (ss == 1) {
            sum += i;
        }
        
    }





    printf("0���� 100������ �Ҽ��� ��: %d\n", sum);

    return 0;
}








