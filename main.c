            #include <stdio.h>

            int rectangle (int wid, int leng, char sym);
            int triangle (int wid, char sym);
            char valid(char symb);

            int main()
            {
                int choice;
                int len;
                int wid;
                int size;
                char symbol;


                do{
                    printf("Enter 1(rectangle), 2(triangle), 3(other), 0(quit): ");
                    scanf("%d", &choice);

                    if (choice == 1) {
                        printf("Enter character, width and length: ");
                        scanf("% %d %d", &symbol, &wid, &len);

                    }
                    else if (choice == 2) {
                        printf("Enter character and size: ");
                        scanf("%c %d", &symbol, &size);

                    }

                    switch (choice) {
                    case 1 : rectangle(wid, len, valid(symbol));
                        break;

                    case 2: triangle(size, valid(symbol));
                        break;

                    case 0 : printf("Done\n");
                        break;
                    default :  printf("Invalid choice.\n");

                }
            } while (choice != 0);
                return 0;

            }



            int rectangle(int wid, int leng, char sym) {
              int i;
              int j;
              int result = 0;

              if (wid > 0 && leng > 0) {
                  for (i = 0; i < wid; i++) {
                      for (j = 0; j < leng; j++) {
                          printf ("%c", sym);
                      }
                      printf ("\n");
                  }
                  result = 1;
              }
              else {
                  printf ("Invalid data provided.\n");
              }
              return result;
            }


            int triangle (int siz, char sym) {
              int result = 0;
              int i, j, k;

              if (siz > 0) {
                  for (i = 1; i <= siz; i++) {
                      for (j = siz - i; j >= 1; j--) {
                          printf ("%c", ' ');
                      }
                      for (k = 1; k <= (i * 2) - 1; k++) {
                          printf ("%c", sym);
                      }
                      printf ("\n");
                  }
                  result = 1;
              }
              else {
                  printf ("Invalid data");
              }
              return result;
            }

            char valid(char sym) {
                char val = ' ';

                if (sym == '*' || sym == '#') {
                    val = sym;
                }
                else {
                    printf("Invalid data");
                }
                return val;
            }




