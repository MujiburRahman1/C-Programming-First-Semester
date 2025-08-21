main() {
    int a[4], i, max, index;

    printf("Enter 4 numbers:\n");

    for (i = 0; i < 4; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Entered numbers and their indexes:\n");
    for (i = 0; i <= 3; i++) {
        printf("%d at index %d\n", a[i], i);
    }

    max = a[0];
    index = 0;
    for (i = 1; i <= 3; i++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }

    printf("The maximum number is %d at index %d\n", max, index);
	
}

