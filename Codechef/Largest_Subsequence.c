#include <stdio.h>
#include <string.h>
#define CODE() (setbuf(stdout, NULL))
int main() {
    CODE();
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        int length;
        scanf("%d", &length);
        char str[200001];  
        scanf("%s", str);
        int result = 0;
        for (int index = 0; index < length; index++) {
            if (str[index] == str[0]) {
                if (result < index + 1) {
                    result = index + 1;
                }
            }
            if (str[index] == str[length - 1]) {
                if (result < length - index) {
                    result = length - index;
                }
            }
        }
        
        printf("%d\n", result);
    }
    
    return 0;
}