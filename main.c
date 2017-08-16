#include <stdio.h>

/*
 * Запросить у пользователя количество используемых для вывода строк. Написать программу,
 * которая при помощи циклов и символа ^ будет рисовать на указанном количестве строк равнобедренный треугольник.
 */
int main ()
{
  int i, j, inputLines = 0;

  printf("Enter the number of rows:\n");
  scanf("%i", &inputLines);
  getchar();

  //Внешний цикл отвечает за строки
  for(i = 0; i < inputLines; i++)
    {
      //Первый внутренний цикл, посимвольно рисует пробелы
      for(j = 1; j < inputLines - i; j++) { printf(" ");
        }
      //Второй внутренний цикл, дорисовывает, символ "^" в строку
      for(j = inputLines - i * 2; j <= inputLines; j++) { printf("^"); }
      printf("\n");
    }
  return 0;
}