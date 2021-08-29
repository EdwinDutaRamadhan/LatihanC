#include <stdlib.h>
#include <conio.h>

int main()
{
 char ch;
 printf("Masukan sebuah karakter: \n");
 scanf("%c", &ch);
 if (ch == 'a' || ch == 'A' | ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' ||  ch =='u' || ch == 'U')
 printf("%c adalah huruf vokal.\n", ch);
 else
 printf("%cbukan huruf vokal.\n", ch);
 getch();

}
