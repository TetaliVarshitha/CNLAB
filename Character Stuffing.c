#include<stdio.h>
#include<string.h>
int main() {
        char a[30],st,en;
        printf("Enter the message: \n");
        scanf("%s",a);
        printf("Enter starting delimiter: \n");
        scanf(" %c",&st);
        printf("Enter ending delimiter: \n");
        scanf(" %c",&en);
        int l = strlen(a),i;
        printf("After Stuffing: \n");
        printf("%c ",st);
        for(i = 0; i < l; i++) {
            if(a[i] == st) {
                printf(" esc ");
            }
            else if(a[i] == en) {
                printf(" esc ");
            }
			printf(" %c ",a[i]);
        }
        printf(" %c\n",en);
        return 0;
    }
