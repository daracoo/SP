/*
Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто различно од број. За секој број треба да се пресмета збирот на цифрата со максимална вредност од претходно внесениот број  и сумата на цифрите на тековниот број (за првиот внесен број се пресметува само сумата на неговите цифри). За секој внесен број резултатот треба да се испечати во следниот формат:

[број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]

342: 9   //3+4+2

345: 16 //3+4+5+4

123: 11 //1+2+3+5

456: 18 //4+5+6+3



For example:

Input	                                            Result
97654 48654 12345 12343 1263 12443 12643 12777 #
                                                    97654: 31
                                                    48654: 36
                                                    12345: 23
                                                    12343: 18
                                                    1263: 16
                                                    12443: 20
                                                    12643: 20
                                                    12777: 30
123 456 789 987 654 321 #
                                                    123: 6
                                                    456: 18
                                                    789: 30
                                                    987: 33
                                                    654: 24
                                                    321: 12
 */
#include <stdio.h>

int sum_of_digits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int previous_number = 0;

    int current_number;
    while (scanf("%d", &current_number) == 1) {
        int max_digit = 0;

        while (previous_number > 0) {
            int digit = previous_number % 10;
            if (digit > max_digit) {
                max_digit = digit;
            }
            previous_number /= 10;
        }


        int sum = sum_of_digits(current_number);

        printf("%d: %d\n", current_number, sum + max_digit);

        previous_number = current_number;
    }

    return 0;
}