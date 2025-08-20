main() {
int a[4], i;

printf("Enter 4 numbers:\n");

for (i = 0; i <= 3; i++) {
	printf("Enter number %d: ", i);
    scanf("%d", &a[i]);
    }

printf("Entered numbers and their indexes:\n");
for (i = 0; i <= 3; i++) {
	printf("%d at index %d\n", a[i], i);
    }
}

