main() {
    int a[4],i;

    printf("Enter 4 numbers:\n");

    for (i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }
    printf("Even numbers: ");
    for (i = 0; i < 4; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    printf("Odd numbers: ");
    for (i = 0; i < 4; i++) {
        if (a[i] % 2 != 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

}

