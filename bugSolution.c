int main() { int x = 10; int *ptr = &x; int y = *ptr; y = 20; printf("%d\n", x); printf("%d\n", y); return 0; }