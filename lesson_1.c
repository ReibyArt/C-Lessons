#include <stdio.h>
#include <stdbool.h>
#include <string.h>

                                                          // SCANF FUNCTION //

// 1
                                                       
// int main(void)
// {
//     int a;
//     short b;
//     float c;
//     double d;

//     // здесь продолжайте программу
//     scanf("%d %hd %f %lf", &a, &b, &c, &d);
    

//     printf("%d %d %.2f %.2f", a, b, c, d);

//     return 0;
// }

// Sample Input:

// 65000 32000 0.5 -78.5
// Sample Output:

// 65000 32000 0.50 -78.50

////////////////////////////////////////////////////////////////////////////////////////////

// 2

// int main(void)
// {
//     int a;
//     int b;
    
//     // здесь продолжайте программу
//     scanf("%d; %d", &a, &b);
    

//      printf("%d %d", a, b);

//     return 0;
// }

// Sample Input:
// -16000; 16000
// Sample Output:
// -16000 16000

////////////////////////////////////////////////////////////////////////////////////////////

// 3

// int main(void)
// {
//     int a;
//     int b;
//     float c;
//     double d;
    
//    scanf("%d, %d, %f, %lf", &a, &b, &c, &d);

//      printf("%d %d %.2lf", a, b, d);

//     return 0;
// }

// Sample Input:
// 56483, 1234, -4.5, 17.534
// Sample Output:
// 56483 1234 17.53

////////////////////////////////////////////////////////////////////////////////////////////

// 4

// int main() {


//     int a;
//     double b;
//     float c;

//     scanf("%d %lf %f", &a, &b, &c);
//     printf("%d %.2lf %.2f", a, b, c);

// }

// Sample Input:

// 100000
// -73.12
// 1.234
// Sample Output:

// 100000 -73.12 1.23

////////////////////////////////////////////////////////////////////////////////////////////

// 5

// int main() {
//     long long var_ll = 0;
//     long double var_ld = 0.;
//     short sh = 0;

//     scanf("%lld, %lf, %hd", &var_ll, &var_ld, &sh);
//     printf("%lld %hd", var_ll, sh);
// }


// Sample Input:
// 1234567890123, 5643.001, 1200
// Sample Output:
// 1234567890123 1200

////////////////////////////////////////////////////////////////////////////////////////////

// 6

// int main(void) {
  
//     float a_1;
//     float b_2;
//     float c_3;
//     float d_4;
//     float e_5;
//     float f_6;
//     float g_7;
//     float k_8;
//     float i_9;
//     float l_10;
//     float m_11;

    
//    scanf("%*f; %*f; %*f; %*f; %*f; %f; %f; %f; %f; %f; %*f", &f_6, &g_7, &k_8, &i_9, &l_10);
//     printf("%.1f %.1f %.1f %.1f %.1f", f_6, g_7, k_8, i_9, l_10);
//     }

// Sample Input:

// -13.5; -12.86; -14.5; -14.9; -15.43; -14.23; -13.12; -12.6; -12.1; -11.5; -10.8
// Sample Output:

// -14.2 -13.1 -12.6 -12.1 -11.5

////////////////////////////////////////////////////////////////////////////////////////////

// 7

// int main() {
  
//     int a, b;

//     scanf("%d%d", &a, &b);
    
//     printf("%d %d", a, b);
   
// }

// Sample Input:

// 8 11
// Sample Output:

// 11 8


////////////////////////////////////////////////////////////////////////////////////////////

// 8

// int main(void)
// {
//     // здесь продолжайте программу

//     int a = 6;
//     int b = 15;
//     double c = 0.333;
    
//     double result = a * (c*c) - (b * c); 
//     printf("%.2lf", result);
    
//     return 0;
// }


////////////////////////////////////////////////////////////////////////////////////////////

// 9

// int main(void)
// {
//     int h, w;
//     scanf("%d %d", &h, &w);
//     double res = (double)h / (double)w;

//     printf("%.2lf\n\n", (double)res);
//     printf("%d, %d", h, w);

//     // здесь продолжайте программу
//     return 0;
// }

// Sample Input:

// 8 11
// Sample Output:

// 0.73

////////////////////////////////////////////////////////////////////////////////////////////

// 10

// int main(void)
// {
//     int count = 0;
//     scanf("%d", &count);
//     printf("%d", count + 1);
//     // здесь продолжайте программу

//     return 0;
// }

// Sample Input:

// 2
// Sample Output:

// 3

////////////////////////////////////////////////////////////////////////////////////////////

// 11

// int main(void)
// {
//     int total = 0;
//     scanf("%d", &total);
//     printf("%d", total - 2);

//     // здесь продолжайте программу

//     return 0;
// }

// Sample Input:

// 7
// Sample Output:

// 5

////////////////////////////////////////////////////////////////////////////////////////////

// 12

// int main(void)
// {
//     int a1; // первый член прогрессии
//     int a50; // 50-й член прогрессии

//     scanf("%d, %d", &a1, &a50);
//     double res = (double)(a1 + a50) * 50.0 / 2.0;
//     printf("%.lf", res);

//     // здесь продолжайте программу
//     return 0;
// }


// Sample Input:

// 1, 30
// Sample Output:

// 775

////////////////////////////////////////////////////////////////////////////////////////////

// 13



// int main(void)
// {
//     int b1; // первый член прогрессии
//     int q; // знаменатель прогрессии

//      scanf("%d, %d", &b1, &q);

//     double res = ((q * q * q * q) - 1) * b1 / (q - 1);
    
//     printf("%.0lf", res);

//     // здесь продолжайте программу
//     return 0;
// }


// Sample Input:

// 2, 8
// Sample Output:

// 1170


////////////////////////////////////////////////////////////////////////////////////////////

// 14


// int main(void)
// {
//     short a;
//     double root = 1.732;

//      scanf("%d", &a);

//     double res = root * a / 6;
    
//     printf("%.3lf", res);

//     // здесь продолжайте программу
//     return 0;
// }


// Sample Input:

// 7
// Sample Output:

// 2.021

////////////////////////////////////////////////////////////////////////////////////////////

// 15

// int main(void)
// {
    
//     double R;
//     double PI = 3.1415; 

//      scanf("%lf", &R);

//     double res = 2 * PI  * R ;
    
//     printf("%.3lf", res);

//     // здесь продолжайте программу
//     return 0;
// }

// Sample Input:

// 0.5
// Sample Output:

// 3.142


////////////////////////////////////////////////////////////////////////////////////////////

// 16

// int main(void ){

//     short a, b, h;
    
//     scanf("%hu, %hu, %hu", &a, &b, &h);

//     double res = (double)((a + b) * h) / 2;

//     printf("%.1lf", res);
// }


// Sample Input:

// 5, 7, 2
// Sample Output:

// 12.0

////////////////////////////////////////////////////////////////////////////////////////////

// 17




// int main(void)
// {
//     int angle;
//     scanf("%d", &angle);
//     printf("%d", angle % 360);
    
//     return 0;
// }


// Sample Input:

// 600
// Sample Output:

// 240


////////////////////////////////////////////////////////////////////////////////////////////

// 18

// int main(void)
// {
//     int rect_width = 1280, rect_height = 720;
//     int w = 8, h = 8;
//     scanf("%d; %d", &w, &h);

//     // здесь продолжайте программу
//     printf("%d %d", rect_height % h, rect_width % w);

//     return 0;
// }

// Sample Input:

// 11; 13
// Sample Output:

// 4 5

////////////////////////////////////////////////////////////////////////////////////////////

// 19

// int main(void)
// {
//     unsigned short time_h = 10; // часы
//     unsigned short time_m = 33; // минуты
//     unsigned short time_s = 5; // секунды

//     unsigned short h, m, s; // добавляемое время: h - часы; m - минуты; s - секунды
//    scanf("%hu; %hu; %hu", &h, &m, &s);

//     unsigned short timeAll = time_h * 3600 + time_m * 60 + time_s;
//     unsigned short timeFromScanfAll = h * 3600 + m * 60 + s;
//     long int timeAllAll = timeAll + timeFromScanfAll;

//     unsigned short hFromScanf = (timeAllAll / 3600) % 24; 
//     unsigned short mFromScanf = (timeAllAll / 60) % 60;
//     unsigned short sFromScanf = timeAllAll % 60;
       
//     printf("%02hu:%02hu:%02hu", hFromScanf, mFromScanf, sFromScanf);
//     return 0;
// }


// Sample Input:
// 2; 45; 10
// Sample Output:
// 13:18:15

////////////////////////////////////////////////////////////////////////////////////////////

// 20


// int main(void) {
//   double size;
//  scanf("%lf", &size);    
// printf("%.1lf", --size);
// }



// Sample Input:

// 25.53
// Sample Output:

// 24.5


////////////////////////////////////////////////////////////////////////////////////////////

// 21


// int main(void)
// {
//     int h, w;
//     scanf("%d, %d", &h, &w);
      
//     printf("%d", (++h) * (++w));
 
//     return 0;
// }


// Sample Input:

// 5, 3
// Sample Output:

// 24


////////////////////////////////////////////////////////////////////////////////////////////

// 22



// int main(void)
// {
//     int rect_width = 640, rect_height = 480;
//      int w = 1, h = 1;
//     scanf("%d; %d", &w, &h);
//     int ost = (rect_width / w) * (rect_height / h);
     
//     printf("%d", ost);
//     // здесь продолжайте программу

//     return 0;
// }

// Sample Input:

// 37; 23
// Sample Output:

// 340


////////////////////////////////////////////////////////////////////////////////////////////

// 23

// int main(void) {
//   int a, b, res;
// scanf("%d %d", &a, &b);
//   res = (a*=3) * (b-=10);
//   printf("%d", res);
// }


// Sample Input:
// 5 12
// Sample Output:
// 30

////////////////////////////////////////////////////////////////////////////////////////////

// 24

// int main(void) {
//   double width, length, res;
//   scanf("%lf %lf", &width, &length);
//   res = (width + length) * 2;
//       printf("Периметр: %.1lf", res);
// }

// Sample Input:
// 0.27 1.56
// Sample Output:
// Периметр: 3.7


////////////////////////////////////////////////////////////////////////////////////////////

// 24

// int main(void) {
//   int s, m;
//   double perc; 
//     double res;

//   scanf("%d %d", &s, &m);
//   perc = (((double)s * 2.0) * (double)m) / 100.0;
//   res = (((double)s) * 2.0) - perc;
//       printf("%.2lf", res);
// }

// Sample Input:
// 280 15
// Sample Output:
// 476.00

////////////////////////////////////////////////////////////////////////////////////////////

// 25


// int main(void) {
//   int ms;
//   double km;
//   scanf("%d", &ms);
  
//   km = (ms * 3600.0) / 1000.0;
//   printf("%.1lf", km);
// }

// Sample Input:
// 13
// Sample Output:
// 46.8


////////////////////////////////////////////////////////////////////////////////////////////

// 26



// int main(void) {
//     int d;
//     bool res;
//     scanf("%d", &d);
//     res = d % 5 == 0;  
//   printf("%d", res * 100);
// }

// Sample Input:
// 15
// Sample Output:
// 100

////////////////////////////////////////////////////////////////////////////////////////////

// 27

// int main(void)
// {
//     double x;
//     scanf("%lf", &x);
    
//     bool fl_view = (int)x % 5 == 0;
//     printf("%d", fl_view);
 
//     return 0;
// }

// Sample Input:
// 25.44
// Sample Output:
// 1

////////////////////////////////////////////////////////////////////////////////////////////

// 28

// int main(void)
// {
//      double x;
//      scanf("%lf", &x);
    
//      bool fl_view = x >= -5.45 && x <= 10.37;
//      printf("%d", fl_view);
 
//      return 0;
// }

// Sample Input:
// -5.44
// Sample Output:
// 1

////////////////////////////////////////////////////////////////////////////////////////////

// 29

// int main(void)
// {
//      double x;
//      scanf("%lf", &x);
    
//      bool res = -10 <= x && 0 > x || 5 > x  && 12 >= x;
//      printf("%d", res);
 
//      return 0;
// }

// Sample Input:
// -10
// Sample Output:
// 1

////////////////////////////////////////////////////////////////////////////////////////////

// 30

// int main(void)
// {
//      double x, y;
//      scanf("%lf %lf", &x, &y);
    
//      bool res = (-5 <= x && 0 <= y) && (x <= 10  && y <= 7);
//      printf("%d", res);
 
//      return 0;
// }


// Sample Input:
// -4.9 0.1
// Sample Output:
// 1

////////////////////////////////////////////////////////////////////////////////////////////

// 31


// int main(void)
// {
//      double x, y;
//      scanf("%lf %lf", &x, &y);
    
//      bool res = (-5 <= x && 0 <= y) && (x <= 10  && y <= 7);
//      printf("%d", !res);
 
//      return 0;
// }


// Sample Input:
// -4.9 0.1
// Sample Output:
// 0


////////////////////////////////////////////////////////////////////////////////////////////

// 32

// int main(void)
// {
//     int rect_width = 640, rect_height = 480;
//     int w = 1, h = 1;
//     scanf("%d; %d", &w, &h);

//     // Общее число прямоугольников, которые помещаются на плоскость
//     int rectWidth = (rect_width / w);
//     int rectHeight =(rect_height / h);
//    int totalRectFill = rectWidth * rectHeight;

//    int totalRect = (rectWidth + (rect_width % w != 0)) * (rectHeight + (rect_height % h != 0));

//     printf("%d", totalRect - totalRectFill);
//     // здесь продолжайте программу

//     return 0;
// }


// Sample Input:
// 23; 44
// Sample Output:
// 38


////////////////////////////////////////////////////////////////////////////////////////////

// 33

// int main(void)
// {
//     short x, y;
//     if(scanf("%hd, %hd", &x, &y) != 2) {
//         printf("Input error.");
//         return 0;
//     }
//     short min; 
//     if (x > y) {
//      min = y;
//     }
//      else {
//       min = x;
//      }
//       printf("%hd", min);
    

//     return 0;
// }


// Sample Input:
// 18, 11
// Sample Output:
// 11



////////////////////////////////////////////////////////////////////////////////////////////

// 34


// int main(void)
// {
//     int m, n;
//     if(scanf("%d, %d", &m, &n) != 2) {
//         printf("Input error.");
//         return 0;
//     }

//     // здесь продолжайте программу
//     short res;
//     if(m % n == 0) {
//         res = m / n;
//         printf("%hd", res); 
//     }
//     else {
//         printf("division error");
//     }
//     return 0;
// }


// Sample Input:
// 6, 3
// Sample Output:
// 2


////////////////////////////////////////////////////////////////////////////////////////////

// 35


// int main(void)
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if(a == b)
//         printf("%d", a);
//     else if(a > b)
//         printf("%d %d", b, a);
//     else
//         printf("%d %d", a, b);
//     return 0;
// }
  



//   Sample Input:
// 11 7
// Sample Output:
// 7 11


////////////////////////////////////////////////////////////////////////////////////////////

// 36

// int main(void)
// {
//     unsigned int a, b, c;
//     if(scanf("%u, %u, %u", &a, &b, &c) != 3) {
//         printf("Input error.");
//         return 0;
//     }
   
//     if(a*a + b*b == c*c && b*b + a*a == c*c) {
    
//         printf("yes");
//     }

//     else {
//     printf("no");
//     }
    
    
//     return 0;
// }

// Sample Input:
// 3, 4, 5
// Sample Output:
// yes


////////////////////////////////////////////////////////////////////////////////////////////

// 37

// int main()
// {
//     int dayOfWeek;
    

//     scanf("%d", &dayOfWeek);

//     if(dayOfWeek > 7 || dayOfWeek < 1 || dayOfWeek == 0){
//       {
//         printf("неверный номер дня недели");
//           return 0;
//       }
//     };

//     if (dayOfWeek == 1) {
//       printf("понедельник");
//         return 0;
//     }
//     else if (dayOfWeek == 2)
//     {
//       printf("вторник");
//         return 0;
//     }
//     else if (dayOfWeek == 3)
//     {
//       printf("среда");
//         return 0;
//     }
//     else if (dayOfWeek == 4)
//     {
//       printf("четверг");
//         return 0;
//     }
//     else if (dayOfWeek == 5)
//     {
//       printf("пятница");
//         return 0;
//     }
//     else if (dayOfWeek == 6)
//     {
//       printf("суббота");
//         return 0;
//     }
//     else if (dayOfWeek == 7)
//     {
//       printf("воскресенье");
//         return 0;
//     };

//     printf("%d", dayOfWeek);
    
//     return 0;
// }


// Sample Input:
// 3
// Sample Output:
// среда


////////////////////////////////////////////////////////////////////////////////////////////

// 38

// int main() {
//   int a;
//   scanf("%d", &a);
  
//   if(a % 10 != 3) {   
  
//      printf("no");
//   }
//   else {
//   printf("yes");
//   };
 
//   return 0;
// }

// Sample Input:
// 123
// Sample Output:
// yes


////////////////////////////////////////////////////////////////////////////////////////////

// 39


// int main() {
//   int a, b, c;
//   int d;
  
// scanf("%d" "%d" "%d", &a, &b, &c);
// d = b*b - (4 *(a * c));
// if(d<= 0) {

//    printf("%d", d);
    
//   }
// else {
//     printf("real roots exist");

//   };

//   return 0;
// }


// Sample Input:
// 2 3 4
// Sample Output:
// -23


////////////////////////////////////////////////////////////////////////////////////////////

// 40


// int main(void)
// {
//     double a,b,c;
//     scanf("%lf,%lf,%lf",&a,&b,&c);
    
//     if(b>a && c>a){
//         printf("%.2lf",a);
//     }
    
//     else if(a>b && c>b){
        
//         printf("%.2lf", b);
//     }
//     else {
//         printf("%.2lf\t", c);
//     }
    
//     return 0;
// }


// -7.5, -10.123, -4.8
  // Sample Input:
  // 4.5, 7.8, 0.5
  // Sample Output:
  // 0.50


////////////////////////////////////////////////////////////////////////////////////////////

// 41


// int main(void)
// {
//     double a, b, c;
//     scanf("%lf, %lf, %lf",&a, &b, &c);
//     if(a + b < c){
//     printf("no");
//     }
//     else {
//         printf("yes");
//     }
// }


// Sample Input:
// 2.3, 8.42, 9.45
// Sample Output:
// yes

////////////////////////////////////////////////////////////////////////////////////////////

// 42

                                                                                                      // Условное тернарное выражение //

// int main(void)
// {
//     int k, m;
//     if(scanf("%d, %d", &k, &m) != 2) {
//         printf("Input error.");
//         return 0;
//     }
    
//     int res = m > k ? k * k : m * m; 
    
//     printf("%d", res);

//     // здесь продолжайте программу

//     return 0;
// }


// Sample Input:
// -5, -1
// Sample Output:
// 25


////////////////////////////////////////////////////////////////////////////////////////////

// 43


// int main() {
//   int x; 
//   scanf("%d", &x);
  
//   int res = x > 0 ? x : 0; 
  
//   printf("%d\n", res);
// }


// Sample Input:
// 5
// Sample Output:
// 5

////////////////////////////////////////////////////////////////////////////////////////////

// 44

// int main() {
//   int a, b;
//       scanf("%d; %d", &a, &b);
  
//   printf("%s\n", a == b ? "square" : "rectangle");

// }

// Sample Input:
// 7; 7
// Sample Output:
// square
// else rectangle


////////////////////////////////////////////////////////////////////////////////////////////

// 45

int main() {
  int width,height;
  int border;
  
  scanf("%d %d", &width, &height);
  border = width > height ? width + 8 : height + 8;
  printf("%d", border);
}
// Sample Input:
// 8 11
// Sample Output:
// 19

////////////////////////////////////////////////////////////////////////////////////////////

// 46

int main(void)
{
    short type = 0;
    double w, h;
    double result;
    int retInt = -1;

    if(scanf("%hd %lf %lf", &type, &w, &h) != 3) {
        printf("Input error.");
        return 0;
    } 
    
    type == 1 ? printf( "%.1f", w*h ) :
    type == 2 ? printf( "%.1f", 2 * ( w + h ) ) : printf( "%d", -1 );
}

// Sample Input:
// 1 0.5 1.2
// Sample Output:
// 0.6





























































































////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

// READING FROM FILE TXT //

// int main() {

//     FILE *file_Map, *file_Player;

//     char buffer[256];
//     char bufferPlayer[256]; // Буфер для хранения считанной строки
//     // int bufferSize = sizeof(buffer);
//     // printf("%d", bufferSize);

//     // Открываем файл Map в режиме чтения
//     file_Map = fopen("Maps/Map_1.txt", "r");
//     if (file_Map == NULL) {
//         fprintf(stderr, "Ошибка при открытии файла\n");
//         return 1; // Возвращаем ошибку, если файл не удалось открыть
//     }
//        file_Player = fopen("Player/Player.txt", "r");
//     if (file_Player == NULL) {
//         fprintf(stderr, "Ошибка при открытии файла\n");
//         return 1; // Возвращаем ошибку, если файл не удалось открыть
//     }

//     // Чтение строк из файла главный цикл программы // 
//     while (fgets(buffer, sizeof(buffer), file_Map) != NULL) {
//         fgets(bufferPlayer, sizeof(bufferPlayer), file_Player);
//         printf("%s\n", bufferPlayer);
//         for (char i = 0; i <= &buffer; i++)
//         {     
//             if (i >= 10)
//             {
//                 break;
//             }
//              printf("%s", buffer);    
//         }
//     }
//     printf("%s", buffer); // Выводим считанную строку


//     // Закрываем файл
//     fclose(file_Map);
//   fclose(file_Player);
//     return 0; // Успешное завершение программы
// }

////////////////////////////////////////////////////////////////////////////////////////////

//  // WRITING FROM TERMINAL IN FILE TXT // 

// int main() {          // Главная функция программы.
//   FILE *file;      // Указатель на файл.
  
//   // Открываем файл "output.txt" в режиме записи ("w").
//   file = fopen("output.txt", "w+");
//   if (file == NULL) { // Проверяем, удалось ли открыть файл.
//       fprintf(stderr, "Ошибка при открытии файла\n"); // Выводим сообщение об ошибке.
//       return 1;       // Завершаем программу с кодом ошибки 1.
//   }

//   // Записываем данные в файл.

//   char inBuffer[256];
//   scanf("%s", &inBuffer); // Получение нашей собственной строки (заполняем её в терминале без пробелов в одну строку)
//   printf("%s\n", inBuffer); // Вывод строки в терминал перед её записью в файл, чтобы убедится, что всё работает корректно и строка выводится с помощью функции printf();
//    fprintf(file, "%s\n",inBuffer); // Запись строки в файл из терминала.
//   //  fprintf(file, "Привет, мир!\n"); // Запись строки в файл.

//   // Закрываем файл.
//   fclose(file);
//   return 0; // Успешное завершение программы.
// }

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////