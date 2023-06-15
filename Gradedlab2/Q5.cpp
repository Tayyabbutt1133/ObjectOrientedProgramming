#include<iostream>
#include<string>


//Built in function 
// 1) Strlen: Calculate the length of string 

int main()
{
	char name[] = "Hello";
	int len1, len2;
	len1 = strlen(name);
	len2 = strlen("Hello World");
	printf("Hello:",len1);
	printf("Hello World,", len2);


	//2)  strcat
	char s2[] = "World";
	char s1[20] = "Hello";
	strcat(s1, s2);
	printf("Source string = %s\n", s2);
	printf("Target string = %s\n", s1);

	//3)strncat
	char s2[] = "World";
	char s1[20] = "Hello";
	strncat(s1, s2, 2);
	printf("Source string = %s\n", s2);
	printf("Target string = %s\n", s1);


	//4)strcpy
	char s2[] = "Hello";
	char s1[10];
	strcpy(s1, s2);
	printf("Source string = %s\n", s2);
	printf("Target string = %s\n", s1);



	//5)strncpy
	char s2[] = "Hello";
	char s1[10];
	strncpy(s1, s2, 2);
	s1[2] = '\0';   /* null character manually added */
	printf("Source string = %s\n", s2);
	printf("Target string = %s\n", s1);


	// 6)strcmp
	char s1[] = "Hello";
	char s2[] = "World";
	int i, j;
	i = strcmp(s1, "Hello");
	j = strcmp(s1, s2);
	printf("%d \n %d\n", i, j);


	// 7) strncmp
	char s1[] = "Hello";
	char s2[] = "World";
	int i, j;
	i = strncmp(s1, "He BlogsDope", 2);
	printf("%d\n", i);



	return 0;





}