#include <stdio.h>
#include <string.h>

int write_to_file(void) {
	FILE *fp;
	fp = fopen("data", "w");
	if (fp == NULL) {
		perror("fopen error\n");
		return -1;
	}

	fputs("hello world Jake..\n", fp);
	fclose(fp);

	return 0;
}

int read_from_file(void) {
	FILE *fp;
	char buf[1024];

	fp = fopen("date", "w");
	if (fp == NULL) {
		perror("fopen error\n");
		return -1;
	}

	memset(buf, 0, sizeof(buf));
	fgets(buf, sizeof(buf), fp);
	fclose(fp);

	printf("%s\n", buf);

	return 0;

}


int main(int argc, char **argv) {



	return 0;
}