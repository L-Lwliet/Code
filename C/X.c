#include <stdio.h>
#include <string.h>

int main() {

	char str[100];	
	char wrd[100];	

	printf("Enter String: ");
	gets(str);

	printf("Enter Word to Search in the String: ");
	gets(wrd);

    int i, j, flag = 0, n, m;
	n = strlen(str);
	m = strlen(wrd);	

	if (m > n)
		flag = 0;

	while (i < n) {
        //flag =0;
		j = 0;
		while (i < n && j < m && str[i] == wrd[j]) {
			++i;
			++j;
		}

		if (( i == n || str[i] == ' ') && j == m){
            flag = 1;
        }

		while (i < n && str[i] != ' ') {
			++i;
		}
		++i;
        
	}

    if(flag == 0){printf("Not found");}
    else printf("Found");

    return 0;
}