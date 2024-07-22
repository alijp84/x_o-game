#include <stdio.h>
#include <time.h>
#include <string.h>
void chape_jadval(char arr[8][8], int counter_O, int counter_hashtag, char nobat)
{
    printf("  ___   ___   ___   ___   ___   ___   ___   ___\n");
    for (int i = 0; i < 8; i++)
    {
        printf("|     |     |     |     |     |     |     |     |");
        if (i == 3)
        {
            printf("        countere_O : %d", counter_O);
        }
        printf("\n");
        printf("|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[i][5], arr[i][6], arr[i][7]);
        if (i == 3)
        {
            printf("        counter_hashtag : %d", counter_hashtag);
        }
        if (i == 4)
        {
            printf("        nobat : %c", nobat);
        }
        printf("\n");
        printf("| ___ | ___ | ___ | ___ | ___ | ___ | ___ | ___ |");
        if (i == 3)
        {
            printf("        -----------");
        }
        printf("\n");
    }
}
void rikhtane_ye_arraye_to_onyeki(char arr_1[8][8], char arr_2[8][8]) /* dovomi ro to avali berize */
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            arr_1[i][j] = arr_2[i][j];
        }
    }
}
int shomarandeye_O(char arr[8][8])
{
    int counte_O = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] == 'O')
            {
                counte_O++;
            }
        }
    }
    return counte_O;
}
int shomarandeye_hashtag(char arr[8][8])
{
    int counte_hashtag = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] == '#')
            {
                counte_hashtag++;
            }
        }
    }
    return counte_hashtag;
}
int safheye_por(char arr[8][8])
{
    int khroji = 1;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] == ' ')
            {
                khroji = 0;
                return khroji;
            }
        }
    }
    return khroji;
}
int checke_amodi_bala_O(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x - 1][y] == '#')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0; /* inja ino gozashtam ke age aslan magdor nabod khoroji ro sefr bede */
    for (int j = x - 2; j >= 0; j--)
    {
        if (arr[j][y] == 'O')
        {
            khoroji = 1;
            return khoroji;
        }
    }

    return khoroji;
}
int checke_amodi_bala_hashtag(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x - 1][y] == 'O')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = x - 2; j >= 0; j--)
    {
        if (arr[j][y] == '#')
        {
            khoroji = 1;
            return khoroji;
        }
    }
    /* bagiyasho mesle ina anjam bede */
    return khoroji;
}
int checke_amodi_payin_O(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x + 1][y] == '#')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = x + 2; j <= 8; j++)
    {
        if (arr[j][y] == 'O')
        {
            khoroji = 1;
            return khoroji;
        }
    }

    return khoroji;
}
int checke_amodi_payin_hashtag(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x + 1][y] == 'O')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = x + 2; j <= 8; j++)
    {
        if (arr[j][y] == '#')
        {
            khoroji = 1;
            return khoroji;
        }
    }

    return khoroji;
}
int checke_ofoghi_chap_O(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x][y - 1] == '#')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = y - 2; j >= 0; j--)
    {
        if (arr[x][j] == 'O')
        {
            khoroji = 1;
            return khoroji;
        }
    }

    return khoroji;
}
int checke_ofoghi_chap_hashtag(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x][y - 1] == 'O')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = y - 2; j >= 0; j--)
    {
        if (arr[x][j] == '#')
        {
            khoroji = 1;
            return khoroji;
        }
    }

    return khoroji;
}
int checke_ofoghi_rast_O(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x][y + 1] == '#')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = y + 2; j <= 8; j++)
    {
        if (arr[x][j] == 'O')
        {
            khoroji = 1;
            return khoroji;
        }
    }

    return khoroji;
}
int checke_ofoghi_rast_hashtag(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x][y + 1] == 'O')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = y + 2; j <= 8; j++)
    {
        if (arr[x][j] == '#')
        {
            khoroji = 1;
            return khoroji;
        }
    }

    return khoroji;
}
int checke_movarabe_rast_bala_O(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x - 1][y + 1] == '#')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = y + 2; j <= 8; j++)
    {
        if (arr[x - 2][j] == 'O')
        {
            khoroji = 1;
            return khoroji;
        }
        x--;
    }

    return khoroji;
}
int checke_movarabe_rast_bala_hashtag(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x - 1][y + 1] == 'O')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = y + 2; j <= 8; j++)
    {
        if (arr[x - 2][j] == '#')
        {
            khoroji = 1;
            return khoroji;
        }
        x--;
    }

    return khoroji;
}
int checke_movarabe_chap_bala_O(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x - 1][y - 1] == '#')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = y - 2; j >= 0; j--)
    {
        if (arr[x - 2][j] == 'O')
        {
            khoroji = 1;
            return khoroji;
        }
        x--;
    }

    return khoroji;
}
int checke_movarabe_chap_bala_hashtag(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x - 1][y - 1] == 'O')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = y - 2; j >= 0; j--)
    {
        if (arr[x - 2][j] == '#')
        {
            khoroji = 1;
            return khoroji;
        }
        x--;
    }

    return khoroji;
}
int checke_movarab_rast_payin_O(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x + 1][y + 1] == '#')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = y + 2; j <= 8; j++)
    {
        if (arr[x + 2][j] == 'O')
        {
            khoroji = 1;
            return khoroji;
        }
        x++;
    }

    return khoroji;
}
int checke_movarab_rast_payin_hashtag(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x + 1][y + 1] == 'O')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = y + 2; j <= 8; j++)
    {
        if (arr[x + 2][j] == '#')
        {
            khoroji = 1;
            return khoroji;
        }
        x++;
    }

    return khoroji;
}
int checke_movarab_chap_payin_O(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x + 1][y - 1] == '#')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = y - 2; j >= 0; j--)
    {
        if (arr[x + 2][j] == 'O')
        {
            khoroji = 1;
            return khoroji;
        }
        x++;
    }

    return khoroji;
}
int checke_movarab_chap_payin_hashtag(char arr[8][8], int x, int y)
{
    int khoroji = 0;
    if (arr[x + 1][y - 1] == 'O')
    {
        khoroji = 1;
    }
    else
    {
        khoroji = 0;
        return khoroji;
    }
    khoroji = 0;
    for (int j = y - 2; j >= 0; j--)
    {
        if (arr[x + 2][j] == '#')
        {
            khoroji = 1;
            return khoroji;
        }
        x++;
    }

    return khoroji;
}
void taghyir_amodi_bala_O(char arr[8][8], int x, int y)
{
    arr[x][y] = 'O';
    for (int j = x - 2; j >= 0; j--)
    {
        if (arr[j][y] == 'O')
        {
            for (int z = x - 1; z > j; z--)
            {
                arr[z][y] = 'O';
            }
            break;
        }
    }
}
void taghyir_amodi_bala_hashtag(char arr[8][8], int x, int y)
{
    arr[x][y] = '#';
    for (int j = x - 2; j >= 0; j--)
    {
        if (arr[j][y] == '#')
        {
            for (int z = x - 1; z > j; z--)
            {
                arr[z][y] = '#';
            }
            break;
        }
    }
}
void taghyir_amodi_payin_O(char arr[8][8], int x, int y)
{
    arr[x][y] = 'O';
    for (int j = x + 2; j <= 8; j++)
    {
        printf("Hello");
        if (arr[j][y] == 'O')
        {
            for (int z = x + 1; z < j; z++)
            {
                arr[z][y] = 'O';
                printf("%c", arr[z][y]);
            }
            break;
        }
    }
}
void taghyir_amodi_payin_hashtag(char arr[8][8], int x, int y)
{
    arr[x][y] = '#';
    for (int j = x + 2; j <= 8; j++)
    {
        if (arr[j][y] == '#')
        {
            for (int z = x + 1; z < j; z++)
            {
                arr[z][y] = '#';
            }
            break;
        }
    }
}
void taghyir_ofoghi_chap_O(char arr[8][8], int x, int y)
{
    arr[x][y] = 'O';
    for (int j = y - 2; j >= 0; j--)
    {
        if (arr[x][j] == 'O')
        {
            for (int z = y - 1; z > j; z--)
            {
                arr[x][z] = 'O';
            }
            break;
        }
    }
}
void taghyir_ofoghi_chap_hashtag(char arr[8][8], int x, int y)
{
    arr[x][y] = '#';
    for (int j = y - 2; j >= 0; j--)
    {
        if (arr[x][j] == '#')
        {
            for (int z = y - 1; z > j; z--)
            {
                arr[x][z] = '#';
            }
            break;
        }
    }
}
void taghyir_ofoghi_rast_O(char arr[8][8], int x, int y)
{
    arr[x][y] = 'O';

    for (int j = y + 2; j <= 8; j++)
    {
        if (arr[x][j] == 'O')
        {
            for (int z = y + 1; z < j; z++)
            {
                arr[x][z] = 'O';
            }
            break;
        }
    }
}
void taghyir_ofoghi_rast_hashtag(char arr[8][8], int x, int y)
{
    arr[x][y] = '#';

    for (int j = y + 2; j <= 8; j++)
    {
        if (arr[x][j] == '#')
        {
            for (int z = y + 1; z < j; z++)
            {
                arr[x][z] = '#';
            }
            break;
        }
    }
}
void taghyir_movarabe_rast_bala_O(char arr[8][8], int x, int y)
{
    arr[x][y] = 'O';
    for (int j = y + 2; j <= 8; j++)
    {
        if (arr[x - 2][j] == 'O') /* x-2 omad chon mesle gablia bad az do ta onvari chek konim ba estefade az j tonestim vase y ro tagyir bedim vali vase x ro be noi dasti tagyir dadim */
        {
            for (int z = j - 1; z > y; z--)
            {
                arr[x - 1][z] = 'O'; /* dalilile inke in x-1 va balayish y-1 shod in bod akhari ro midonim O hast */
                x++;
            }
            break;
        }
        x--;
    }
}
void taghyir_movarabe_rast_bala_hashtag(char arr[8][8], int x, int y)
{
    arr[x][y] = '#';
    for (int j = y + 2; j <= 8; j++)
    {
        if (arr[x - 2][j] == '#') /* x-2 omad chon mesle gablia bad az do ta onvari chek konim ba estefade az j tonestim vase y ro tagyir bedim vali vase x ro be noi dasti tagyir dadim */
        {
            for (int z = j - 1; z > y; z--)
            {
                arr[x - 1][z] = '#'; /* dalilile inke in x-1 va balayish y-1 shod in bod akhari ro midonim O hast */
                x++;
            }
            break;
        }
        x--;
    }
}
void taghyir_movarabe_chap_bala_O(char arr[8][8], int x, int y)
{
    arr[x][y] = 'O';

    for (int j = y - 2; j >= 0; j--)
    {
        if (arr[x - 2][j] == 'O')
        {
            for (int z = j + 1; z < y; z++)
            {
                arr[x - 1][z] = 'O';
                x++;
            }
            break;
        }
        x--;
    }
}
void taghyir_movarabe_chap_bala_hashtag(char arr[8][8], int x, int y)
{
    arr[x][y] = '#';

    for (int j = y - 2; j >= 0; j--)
    {
        if (arr[x - 2][j] == '#')
        {
            for (int z = j + 1; z < y; z++)
            {
                arr[x - 1][z] = '#';
                x++;
            }
            break;
        }
        x--;
    }
}
void taghyir_movarabe_rast_payin_O(char arr[8][8], int x, int y)
{
    arr[x][y] = 'O';

    for (int j = y + 2; j <= 8; j++)
    {
        if (arr[x + 2][j] == 'O')
        {
            for (int z = j - 1; z > y; z--)
            {
                arr[x + 1][z] = 'O';
                x--;
            }
            break;
        }
        x++;
    }
}
void taghyir_movarabe_rast_payin_hasthag(char arr[8][8], int x, int y)
{
    arr[x][y] = '#';

    for (int j = y + 2; j <= 8; j++)
    {
        if (arr[x + 2][j] == '#')
        {
            for (int z = j - 1; z > y; z--)
            {
                arr[x + 1][z] = '#';
                x--;
            }
            break;
        }
        x++;
    }
}
void taghyir_movarabe_chap_payin_O(char arr[8][8], int x, int y)
{
    arr[x][y] = 'O';

    for (int j = y - 2; j >= 0; j--)
    {
        if (arr[x + 2][j] == 'O')
        {
            for (int z = j + 1; z < y; z++)
            {
                arr[x + 1][z] = 'O';
                x--;
            }
            break;
        }
        x++;
    }
}
void taghyir_movarabe_chap_payin_hashtag(char arr[8][8], int x, int y)
{
    arr[x][y] = '#';

    for (int j = y - 2; j >= 0; j--)
    {
        if (arr[x + 2][j] == '#')
        {
            for (int z = j + 1; z < y; z++)
            {
                arr[x + 1][z] = '#';
                x--;
            }
            break;
        }
        x++;
    }
}
int emkan_garar_dadane_O(char arr[8][8])
{
    int emkan = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] == ' ')
            {
                if (checke_amodi_bala_O(arr, i, j) != 1 && checke_amodi_payin_O(arr, i, j) != 1 && checke_ofoghi_rast_O(arr, i, j) != 1 && checke_ofoghi_chap_O(arr, i, j) != 1 && checke_movarabe_rast_bala_O(arr, i, j) != 1 && checke_movarabe_chap_bala_O(arr, i, j) != 1 && checke_movarab_rast_payin_O(arr, i, j) != 1 && checke_movarab_chap_payin_O(arr, i, j) != 1)
                {
                    emkan = 0;
                }
                else
                {
                    emkan = 1;
                    return emkan;
                }
            }
        }
    }
    return emkan;
}
int emkane_garar_dadane_hashtag(char arr[8][8])
{
    int emkan = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] == ' ')
            {
                if (checke_amodi_bala_hashtag(arr, i, j) != 1 && checke_amodi_payin_hashtag(arr, i, j) != 1 && checke_ofoghi_rast_hashtag(arr, i, j) != 1 && checke_ofoghi_chap_hashtag(arr, i, j) != 1 && checke_movarabe_rast_bala_hashtag(arr, i, j) != 1 && checke_movarabe_chap_bala_hashtag(arr, i, j) != 1 && checke_movarab_rast_payin_hashtag(arr, i, j) != 1 && checke_movarab_chap_payin_hashtag(arr, i, j) != 1)
                {
                    emkan = 0;
                }
                else
                {
                    emkan = 1;
                    return emkan;
                }
            }
        }
    }
    return emkan;
}
void ramz_kardan()
{
    FILE *fp = fopen("data.h", "r");
    FILE *ramz = fopen("ramz.h", "w");
    char character = fgetc(fp);
    while (character != EOF)
    {
        character = (3 * character + 47) % 256;
        fprintf(ramz, "%c",character);
    }
    fclose(fp);
fclose (ramz);
}

void ramz_goshayi()
{
    FILE *fp = fopen("data.h", "w");
    FILE *ramz = fopen("ramz.h", "r");

    int temp =1;
    while((temp * 3)% 256 != 1)
    {
        temp++;
    }

    char character = fgetc(ramz);
    while (character != EOF)
    {
        character = (temp * (character - 47)) % 256;
        fprintf(fp, "%c",character);
    }

fclose(fp);
fclose (ramz);
}

int main(void)
{
    

    int shomareye_bazi = 1;
    char esme_bazikona[100][20]; /* hadaksar 100 nafar ba esm be tole 20 */
    int shomare_adam = 0;
    while (1)
    {
        char arr[8][8];
        char arr_1[8][8];
        char arr_2[8][8];
        char arr_3[8][8];
        char arr_4[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                arr[i][j] = 32;
                arr_1[i][j] = 32;
                arr_2[i][j] = 32;
                arr_3[i][j] = 32;
                arr_4[i][j] = 32;
            }
        }
        arr[3][3] = 'O';
        arr[3][4] = '#';
        arr[4][3] = '#';
        arr[4][4] = 'O';
        char name_1[10];
        char name_2[10];
        printf("Enter your names\n");
        scanf("%s", name_1);
        strcpy(esme_bazikona[shomare_adam], name_1);
        shomare_adam++;
        getchar();
        scanf("%s", name_2);
        strcpy(esme_bazikona[shomare_adam], name_2);
        shomare_adam++;
        getchar();
        printf("1-New Game\n");
        printf("2-Saved Game\n");
        printf("3-Timing\n");
        int noe_bazi;
        scanf("%d", &noe_bazi);
        if (noe_bazi == 1)
        {
            chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), 'O');
            while (safheye_por(arr) == 0)
            {
                int x_1, y_1;
                scanf("%d %d", &x_1, &y_1);
                x_1--;
                y_1--;
                rikhtane_ye_arraye_to_onyeki(arr_1, arr);
                if (x_1 == -1 && y_1 == -1)
                {
                    rikhtane_ye_arraye_to_onyeki(arr, arr_3);
                    scanf("%d %d", &x_1, &y_1); /* inja vorodi migirim chon bade undo bayad ye harekat bezane ta bazzi betone be nafesh farg kone */
                    x_1--;
                    y_1--;
                }
                else if (x_1 == -2 && y_1 == -2)
                {ramz_goshayi();
                    FILE *fp = fopen("data.h", "a");
                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            fprintf(fp, "%c", arr[i][j]);
                        }
                    }
                    fclose(fp);
                    ramz_kardan();
                    break;
                }

                if (emkan_garar_dadane_O(arr) == 0 && emkane_garar_dadane_hashtag(arr) == 0)
                {
                    printf("Tamam\n");
                    if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                    {
                        printf("winner : O");
                    }
                    else
                    {
                        printf("winner : hashtag");
                    }
                    break;
                }
                while (checke_amodi_bala_O(arr, x_1, y_1) != 1 && checke_amodi_payin_O(arr, x_1, y_1) != 1 && checke_ofoghi_rast_O(arr, x_1, y_1) != 1 && checke_ofoghi_chap_O(arr, x_1, y_1) != 1 && checke_movarabe_rast_bala_O(arr, x_1, y_1) != 1 && checke_movarabe_chap_bala_O(arr, x_1, y_1) != 1 && checke_movarab_rast_payin_O(arr, x_1, y_1) != 1 && checke_movarab_chap_payin_O(arr, x_1, y_1) != 1)
                {
                    int w, z;
                    printf("That was invalid\n");
                    scanf("%d %d", &w, &z);
                    x_1 = w - 1;
                    y_1 = z - 1;
                }
                if (checke_amodi_bala_O(arr, x_1, y_1) == 1)
                {
                    taghyir_amodi_bala_O(arr, x_1, y_1);
                }
                if (checke_amodi_payin_O(arr, x_1, y_1) == 1)
                {
                    taghyir_amodi_payin_O(arr, x_1, y_1);
                }
                if (checke_ofoghi_rast_O(arr, x_1, y_1) == 1)
                {
                    taghyir_ofoghi_rast_O(arr, x_1, y_1);
                }
                if (checke_ofoghi_chap_O(arr, x_1, y_1) == 1)
                {
                    taghyir_ofoghi_chap_O(arr, x_1, y_1);
                }
                if (checke_movarabe_rast_bala_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_rast_bala_O(arr, x_1, y_1);
                }
                if (checke_movarabe_chap_bala_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_chap_bala_O(arr, x_1, y_1);
                }
                if (checke_movarab_rast_payin_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_rast_payin_O(arr, x_1, y_1);
                }
                if (checke_movarab_chap_payin_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_chap_payin_O(arr, x_1, y_1);
                }
                chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), '#');
                int x_2, y_2;
                scanf("%d %d", &x_2, &y_2);
                x_2--;
                y_2--;
                rikhtane_ye_arraye_to_onyeki(arr_2, arr);
                if (x_2 == -1 && y_2 == -1)
                {
                    rikhtane_ye_arraye_to_onyeki(arr, arr_4);
                    scanf("%d %d", &x_2, &y_2);
                    x_2--;
                    y_2--;
                }
                else if (x_2 == -2 && y_2 == -2)
                {ramz_goshayi();
                    FILE *fp = fopen("data.h", "a");
                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            fprintf(fp, "%c", arr[i][j]);
                        }
                    }
                    fclose(fp);
                    ramz_kardan();
                    break;
                }

                if (emkane_garar_dadane_hashtag(arr) == 0 && emkan_garar_dadane_O(arr) == 0)
                {
                    printf("Tamam\n");
                    if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                    {
                        printf("winner : O");
                    }
                    else
                    {
                        printf("winner : hashtag");
                    }
                    break;
                }
                while (checke_amodi_bala_hashtag(arr, x_2, y_2) != 1 && checke_amodi_payin_hashtag(arr, x_2, y_2) != 1 && checke_ofoghi_rast_hashtag(arr, x_2, y_2) != 1 && checke_ofoghi_chap_hashtag(arr, x_2, y_2) != 1 && checke_movarabe_rast_bala_hashtag(arr, x_2, y_2) != 1 && checke_movarabe_chap_bala_hashtag(arr, x_2, y_2) != 1 && checke_movarab_rast_payin_hashtag(arr, x_2, y_2) != 1 && checke_movarab_chap_payin_hashtag(arr, x_2, y_2) != 1)
                {
                    int w, z;
                    printf("That was invalid\n");
                    scanf("%d %d", &w, &z);
                    x_2 = w - 1;
                    y_2 = z - 1;
                }

                if (checke_amodi_bala_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_amodi_bala_hashtag(arr, x_2, y_2);
                }
                if (checke_amodi_payin_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_amodi_payin_hashtag(arr, x_2, y_2);
                }
                if (checke_ofoghi_rast_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_ofoghi_rast_hashtag(arr, x_2, y_2);
                }
                if (checke_ofoghi_chap_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_ofoghi_chap_hashtag(arr, x_2, y_2);
                }
                if (checke_movarabe_rast_bala_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_rast_bala_hashtag(arr, x_2, y_2);
                }
                if (checke_movarabe_chap_bala_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_chap_bala_hashtag(arr, x_2, y_2);
                }
                if (checke_movarab_rast_payin_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_rast_payin_hasthag(arr, x_2, y_2);
                }
                if (checke_movarab_chap_payin_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_chap_payin_hashtag(arr, x_2, y_2);
                }
                chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), 'O');
                scanf("%d %d", &x_1, &y_1);
                x_1--;
                y_1--;
                rikhtane_ye_arraye_to_onyeki(arr_3, arr);
                if (x_1 == -1 && y_1 == -1)
                {
                    rikhtane_ye_arraye_to_onyeki(arr, arr_1);
                    scanf("%d %d", &x_1, &y_1);
                    x_1--;
                    y_1--;
                }
                else if (x_1 == -2, y_1 == -2)
                {ramz_goshayi();
                    FILE *fp = fopen("data.h", "a");
                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            fprintf(fp, "%c", arr[i][j]);
                        }
                    }
                    fclose(fp);
                    ramz_kardan();
                    break;
                }

                if (emkan_garar_dadane_O(arr) == 0 && emkane_garar_dadane_hashtag(arr) == 0)
                {
                    printf("Tamam\n");
                    if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                    {
                        printf("winner : O");
                    }
                    else
                    {
                        printf("winner : hashtag");
                    }
                    break;
                }
                while (checke_amodi_bala_O(arr, x_1, y_1) != 1 && checke_amodi_payin_O(arr, x_1, y_1) != 1 && checke_ofoghi_rast_O(arr, x_1, y_1) != 1 && checke_ofoghi_chap_O(arr, x_1, y_1) != 1 && checke_movarabe_rast_bala_O(arr, x_1, y_1) != 1 && checke_movarabe_chap_bala_O(arr, x_1, y_1) != 1 && checke_movarab_rast_payin_O(arr, x_1, y_1) != 1 && checke_movarab_chap_payin_O(arr, x_1, y_1) != 1)
                {
                    int w, z;
                    printf("That was invalid\n");
                    scanf("%d %d", &w, &z);
                    x_1 = w - 1;
                    y_1 = z - 1;
                }
                if (checke_amodi_bala_O(arr, x_1, y_1) == 1)
                {
                    taghyir_amodi_bala_O(arr, x_1, y_1);
                }
                if (checke_amodi_payin_O(arr, x_1, y_1) == 1)
                {
                    taghyir_amodi_payin_O(arr, x_1, y_1);
                }
                if (checke_ofoghi_rast_O(arr, x_1, y_1) == 1)
                {
                    taghyir_ofoghi_rast_O(arr, x_1, y_1);
                }
                if (checke_ofoghi_chap_O(arr, x_1, y_1) == 1)
                {
                    taghyir_ofoghi_chap_O(arr, x_1, y_1);
                }
                if (checke_movarabe_rast_bala_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_rast_bala_O(arr, x_1, y_1);
                }
                if (checke_movarabe_chap_bala_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_chap_bala_O(arr, x_1, y_1);
                }
                if (checke_movarab_rast_payin_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_rast_payin_O(arr, x_1, y_1);
                }
                if (checke_movarab_chap_payin_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_chap_payin_O(arr, x_1, y_1);
                }
                chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), '#');
                scanf("%d %d", &x_2, &y_2);
                x_2 = x_2 - 1;
                y_2 = y_2 - 1;
                rikhtane_ye_arraye_to_onyeki(arr_4, arr);
                if (x_2 == -1 && y_2 == -1)
                {
                    rikhtane_ye_arraye_to_onyeki(arr, arr_2);
                    scanf("%d %d", &x_2, &y_2); /* chon dobare bayad a aval jayi ke mikhad bezare ro bege */
                    x_2--;
                    y_2--;
                }
                else if (x_2 == -2 && y_2 == -2)
                {ramz_goshayi();
                    FILE *fp = fopen("data.h", "a");
                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            fprintf(fp, "%c", arr[i][j]);
                        }
                    }
                    fclose(fp);
                    ramz_kardan();
                    break;
                }

                if (emkane_garar_dadane_hashtag(arr) == 0 && emkan_garar_dadane_O(arr) == 0)
                {
                    printf("Tamam\n");
                    if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                    {
                        printf("winner : O");
                    }
                    else
                    {
                        printf("winner : hashtag");
                    }
                    break;
                }
                while (checke_amodi_bala_hashtag(arr, x_2, y_2) != 1 && checke_amodi_payin_hashtag(arr, x_2, y_2) != 1 && checke_ofoghi_rast_hashtag(arr, x_2, y_2) != 1 && checke_ofoghi_chap_hashtag(arr, x_2, y_2) != 1 && checke_movarabe_rast_bala_hashtag(arr, x_2, y_2) != 1 && checke_movarabe_chap_bala_hashtag(arr, x_2, y_2) != 1 && checke_movarab_rast_payin_hashtag(arr, x_2, y_2) != 1 && checke_movarab_chap_payin_hashtag(arr, x_2, y_2) != 1)
                {
                    int w, z;
                    printf("That was invalid\n");
                    scanf("%d %d", &w, &z);
                    x_2 = w - 1;
                    y_2 = z - 1;
                }

                if (checke_amodi_bala_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_amodi_bala_hashtag(arr, x_2, y_2);
                }
                if (checke_amodi_payin_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_amodi_payin_hashtag(arr, x_2, y_2);
                }
                if (checke_ofoghi_rast_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_ofoghi_rast_hashtag(arr, x_2, y_2);
                }
                if (checke_ofoghi_chap_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_ofoghi_chap_hashtag(arr, x_2, y_2);
                }
                if (checke_movarabe_rast_bala_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_rast_bala_hashtag(arr, x_2, y_2);
                }
                if (checke_movarabe_chap_bala_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_chap_bala_hashtag(arr, x_2, y_2);
                }
                if (checke_movarab_rast_payin_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_rast_payin_hasthag(arr, x_2, y_2);
                }
                if (checke_movarab_chap_payin_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_chap_payin_hashtag(arr, x_2, y_2);
                }
                chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), 'O');
            }
        }
        else if (noe_bazi == 2) /* yani saved games */ /* moshkel ine mode time dar nmt zakhire konam */
        {
            char nobate_ki_bod;
            printf("nobate ki bod?\n");
            scanf("%d", &nobate_ki_bod); /* age 1 bashe yani nobate O ast va age 2 bod yani nobate hashtag bode */
            FILE *fp = fopen("data.h", "r");
            for (int i = 0; i < shomare_adam / 2; i++)
            {
                if (strcmp(esme_bazikona[2 * i], name_1) == 0 && strcmp(esme_bazikona[2 * i + 1], name_2) == 0)
                {
                    for (int k = 0; k < 64 * (i - 1); k++)
                    {
                        char mahv;
                        fscanf(fp, "%c", &mahv);
                    }
                    for (int m; m < 64; m++)
                    {
                        fscanf(fp, "%c", &arr[m/8-2][m%8]);
                    }
                }
                else if (strcmp(esme_bazikona[2 * i], name_2) == 0 && strcmp(esme_bazikona[2 * i + 1], name_1) == 0)
                {
                    for (int k = 0; k < 64 * (i - 1); k++)
                    {
                        char mahv;
                        fscanf(fp, "%c", &mahv);
                    }
                    for (int m; m < 64; m++)
                    {
                        fscanf(fp, "%c", arr[0][m]);
                    }
                }
            }
            if (nobate_ki_bod == 1)/* age nobate O bode mizanim 1 age nobate hashtag bode mizanim 2 */
            {
                chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), 'O');
                while (safheye_por(arr) == 0)
                {
                    int x_1, y_1;
                    scanf("%d %d", &x_1, &y_1);
                    x_1--;
                    y_1--;
                    rikhtane_ye_arraye_to_onyeki(arr_1, arr);
                    if (x_1 == -1 && y_1 == -1)
                    {
                        rikhtane_ye_arraye_to_onyeki(arr, arr_3);
                        scanf("%d %d", &x_1, &y_1); /* inja vorodi migirim chon bade undo bayad ye harekat bezane ta bazzi betone be nafesh farg kone */
                        x_1--;
                        y_1--;
                    }
                    else if (x_1 == -2 && y_1 == -2)
                    { /* ye araye se bodi beriz to data.h bad migi ba for(int i)age .name 1 va . name 2 structer barabare esmaye vorodi bashe biad i omin bakhsh az araye sebodi ro mide */
                        ramz_goshayi();
                        FILE *fp = fopen("data.h", "a");
                        for (int i = 0; i < 8; i++)
                        {
                            for (int j = 0; j < 8; j++)
                            {
                                fprintf(fp, "%c", arr[i][j]);
                            }
                        }
                        fclose(fp);
                        ramz_kardan();
                        break;
                    }

                    if (emkan_garar_dadane_O(arr) == 0 && emkane_garar_dadane_hashtag(arr) == 0)
                    {
                        printf("Tamam\n");
                        if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                        {
                            printf("winner : O");
                        }
                        else
                        {
                            printf("winner : hashtag");
                        }
                        break;
                    }
                    while (checke_amodi_bala_O(arr, x_1, y_1) != 1 && checke_amodi_payin_O(arr, x_1, y_1) != 1 && checke_ofoghi_rast_O(arr, x_1, y_1) != 1 && checke_ofoghi_chap_O(arr, x_1, y_1) != 1 && checke_movarabe_rast_bala_O(arr, x_1, y_1) != 1 && checke_movarabe_chap_bala_O(arr, x_1, y_1) != 1 && checke_movarab_rast_payin_O(arr, x_1, y_1) != 1 && checke_movarab_chap_payin_O(arr, x_1, y_1) != 1)
                    {
                        int w, z;
                        printf("That was invalid\n");
                        scanf("%d %d", &w, &z);
                        x_1 = w - 1;
                        y_1 = z - 1;
                    }
                    if (checke_amodi_bala_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_amodi_bala_O(arr, x_1, y_1);
                    }
                    if (checke_amodi_payin_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_amodi_payin_O(arr, x_1, y_1);
                    }
                    if (checke_ofoghi_rast_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_ofoghi_rast_O(arr, x_1, y_1);
                    }
                    if (checke_ofoghi_chap_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_ofoghi_chap_O(arr, x_1, y_1);
                    }
                    if (checke_movarabe_rast_bala_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_rast_bala_O(arr, x_1, y_1);
                    }
                    if (checke_movarabe_chap_bala_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_chap_bala_O(arr, x_1, y_1);
                    }
                    if (checke_movarab_rast_payin_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_rast_payin_O(arr, x_1, y_1);
                    }
                    if (checke_movarab_chap_payin_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_chap_payin_O(arr, x_1, y_1);
                    }
                    chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), '#');
                    int x_2, y_2;
                    scanf("%d %d", &x_2, &y_2);
                    x_2--;
                    y_2--;
                    rikhtane_ye_arraye_to_onyeki(arr_2, arr);
                    if (x_2 == -1 && y_2 == -1)
                    {
                        rikhtane_ye_arraye_to_onyeki(arr, arr_4);
                        scanf("%d %d", &x_2, &y_2);
                        x_2--;
                        y_2--;
                    }
                    if (x_2 == -2 && y_2 == -2)
                    {ramz_goshayi();
                        FILE *fp = fopen("data.h", "a");
                        for (int i = 0; i < 8; i++)
                        {
                            for (int j = 0; j < 8; j++)
                            {
                                fprintf(fp, "%c", arr[i][j]);
                            }
                        }
                        fclose(fp);
                        ramz_kardan();
                        break;
                    }

                    if (emkane_garar_dadane_hashtag(arr) == 0 && emkan_garar_dadane_O(arr) == 0)
                    {
                        printf("Tamam\n");
                        if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                        {
                            printf("winner : O");
                        }
                        else
                        {
                            printf("winner : hashtag");
                        }
                        break;
                    }
                    while (checke_amodi_bala_hashtag(arr, x_2, y_2) != 1 && checke_amodi_payin_hashtag(arr, x_2, y_2) != 1 && checke_ofoghi_rast_hashtag(arr, x_2, y_2) != 1 && checke_ofoghi_chap_hashtag(arr, x_2, y_2) != 1 && checke_movarabe_rast_bala_hashtag(arr, x_2, y_2) != 1 && checke_movarabe_chap_bala_hashtag(arr, x_2, y_2) != 1 && checke_movarab_rast_payin_hashtag(arr, x_2, y_2) != 1 && checke_movarab_chap_payin_hashtag(arr, x_2, y_2) != 1)
                    {
                        int w, z;
                        printf("That was invalid\n");
                        scanf("%d %d", &w, &z);
                        x_2 = w - 1;
                        y_2 = z - 1;
                    }

                    if (checke_amodi_bala_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_amodi_bala_hashtag(arr, x_2, y_2);
                    }
                    if (checke_amodi_payin_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_amodi_payin_hashtag(arr, x_2, y_2);
                    }
                    if (checke_ofoghi_rast_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_ofoghi_rast_hashtag(arr, x_2, y_2);
                    }
                    if (checke_ofoghi_chap_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_ofoghi_chap_hashtag(arr, x_2, y_2);
                    }
                    if (checke_movarabe_rast_bala_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_rast_bala_hashtag(arr, x_2, y_2);
                    }
                    if (checke_movarabe_chap_bala_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_chap_bala_hashtag(arr, x_2, y_2);
                    }
                    if (checke_movarab_rast_payin_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_rast_payin_hasthag(arr, x_2, y_2);
                    }
                    if (checke_movarab_chap_payin_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_chap_payin_hashtag(arr, x_2, y_2);
                    }
                    chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), 'O');
                    scanf("%d %d", &x_1, &y_1);
                    x_1--;
                    y_1--;
                    rikhtane_ye_arraye_to_onyeki(arr_3, arr);
                    if (x_1 == -1 && y_1 == -1)
                    {
                        rikhtane_ye_arraye_to_onyeki(arr, arr_1);
                        scanf("%d %d", &x_1, &y_1);
                        x_1--;
                        y_1--;
                    }
                    if (x_1 == -2, y_1 == -2)
                    {ramz_goshayi();
                        FILE *fp = fopen("data.h", "a");
                        for (int i = 0; i < 8; i++)
                        {
                            for (int j = 0; j < 8; j++)
                            {
                                fprintf(fp, "%c", arr[i][j]);
                            }
                        }
                        fclose(fp);
                        ramz_kardan();
                        break;
                    }

                    if (emkan_garar_dadane_O(arr) == 0 && emkane_garar_dadane_hashtag(arr) == 0)
                    {
                        printf("Tamam\n");
                        if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                        {
                            printf("winner : O");
                        }
                        else
                        {
                            printf("winner : hashtag");
                        }
                        break;
                    }
                    while (checke_amodi_bala_O(arr, x_1, y_1) != 1 && checke_amodi_payin_O(arr, x_1, y_1) != 1 && checke_ofoghi_rast_O(arr, x_1, y_1) != 1 && checke_ofoghi_chap_O(arr, x_1, y_1) != 1 && checke_movarabe_rast_bala_O(arr, x_1, y_1) != 1 && checke_movarabe_chap_bala_O(arr, x_1, y_1) != 1 && checke_movarab_rast_payin_O(arr, x_1, y_1) != 1 && checke_movarab_chap_payin_O(arr, x_1, y_1) != 1)
                    {
                        int w, z;
                        printf("That was invalid\n");
                        scanf("%d %d", &w, &z);
                        x_1 = w - 1;
                        y_1 = z - 1;
                    }
                    if (checke_amodi_bala_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_amodi_bala_O(arr, x_1, y_1);
                    }
                    if (checke_amodi_payin_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_amodi_payin_O(arr, x_1, y_1);
                    }
                    if (checke_ofoghi_rast_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_ofoghi_rast_O(arr, x_1, y_1);
                    }
                    if (checke_ofoghi_chap_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_ofoghi_chap_O(arr, x_1, y_1);
                    }
                    if (checke_movarabe_rast_bala_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_rast_bala_O(arr, x_1, y_1);
                    }
                    if (checke_movarabe_chap_bala_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_chap_bala_O(arr, x_1, y_1);
                    }
                    if (checke_movarab_rast_payin_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_rast_payin_O(arr, x_1, y_1);
                    }
                    if (checke_movarab_chap_payin_O(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_chap_payin_O(arr, x_1, y_1);
                    }
                    chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), '#');
                    scanf("%d %d", &x_2, &y_2);
                    x_2 = x_2 - 1;
                    y_2 = y_2 - 1;
                    rikhtane_ye_arraye_to_onyeki(arr_4, arr);
                    if (x_2 == -1 && y_2 == -1)
                    {
                        rikhtane_ye_arraye_to_onyeki(arr, arr_2);
                        scanf("%d %d", &x_2, &y_2); /* chon dobare bayad a aval jayi ke mikhad bezare ro bege */
                        x_2--;
                        y_2--;
                    }
                    if (x_2 == -2 && y_2 == -2)
                    {ramz_goshayi();
                        FILE *fp = fopen("data.h", "a");
                        for (int i = 0; i < 8; i++)
                        {
                            for (int j = 0; j < 8; j++)
                            {
                                fprintf(fp, "%c", arr[i][j]);
                            }
                        }
                        fclose(fp);
                        ramz_kardan();
                        break;
                    }

                    if (emkane_garar_dadane_hashtag(arr) == 0 && emkan_garar_dadane_O(arr) == 0)
                    {
                        printf("Tamam\n");
                        if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                        {
                            printf("winner : O");
                        }
                        else
                        {
                            printf("winner : hashtag");
                        }
                        break;
                    }
                    while (checke_amodi_bala_hashtag(arr, x_2, y_2) != 1 && checke_amodi_payin_hashtag(arr, x_2, y_2) != 1 && checke_ofoghi_rast_hashtag(arr, x_2, y_2) != 1 && checke_ofoghi_chap_hashtag(arr, x_2, y_2) != 1 && checke_movarabe_rast_bala_hashtag(arr, x_2, y_2) != 1 && checke_movarabe_chap_bala_hashtag(arr, x_2, y_2) != 1 && checke_movarab_rast_payin_hashtag(arr, x_2, y_2) != 1 && checke_movarab_chap_payin_hashtag(arr, x_2, y_2) != 1)
                    {
                        int w, z;
                        printf("That was invalid\n");
                        scanf("%d %d", &w, &z);
                        x_2 = w - 1;
                        y_2 = z - 1;
                    }

                    if (checke_amodi_bala_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_amodi_bala_hashtag(arr, x_2, y_2);
                    }
                    if (checke_amodi_payin_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_amodi_payin_hashtag(arr, x_2, y_2);
                    }
                    if (checke_ofoghi_rast_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_ofoghi_rast_hashtag(arr, x_2, y_2);
                    }
                    if (checke_ofoghi_chap_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_ofoghi_chap_hashtag(arr, x_2, y_2);
                    }
                    if (checke_movarabe_rast_bala_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_rast_bala_hashtag(arr, x_2, y_2);
                    }
                    if (checke_movarabe_chap_bala_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_chap_bala_hashtag(arr, x_2, y_2);
                    }
                    if (checke_movarab_rast_payin_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_rast_payin_hasthag(arr, x_2, y_2);
                    }
                    if (checke_movarab_chap_payin_hashtag(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_chap_payin_hashtag(arr, x_2, y_2);
                    }
                    chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), 'O');
                }
            }
            else if (nobate_ki_bod == 2)
            {
                chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), '#');
                while (safheye_por(arr) == 0)
                {
                    int x_1, y_1;
                    scanf("%d %d", &x_1, &y_1);
                    x_1--;
                    y_1--;
                    rikhtane_ye_arraye_to_onyeki(arr_1, arr);
                    if (x_1 == -1 && y_1 == -1)
                    {
                        rikhtane_ye_arraye_to_onyeki(arr, arr_3);
                        scanf("%d %d", &x_1, &y_1); /* inja vorodi migirim chon bade undo bayad ye harekat bezane ta bazzi betone be nafesh farg kone */
                        x_1--;
                        y_1--;
                    }
                    else if (x_1 == -2 && y_1 == -2)
                    { /* ye araye se bodi beriz to data.h bad migi ba for(int i)age .name 1 va . name 2 structer barabare esmaye vorodi bashe biad i omin bakhsh az araye sebodi ro mide */
                        ramz_goshayi();
                        FILE *fp = fopen("data.h", "a");
                        for (int i = 0; i < 8; i++)
                        {
                            for (int j = 0; j < 8; j++)
                            {
                                fprintf(fp, "%c", arr[i][j]);
                            }
                        }
                        fclose(fp);
                        ramz_kardan();
                        break;
                    }

                    if (emkan_garar_dadane_O(arr) == 0 && emkane_garar_dadane_hashtag(arr) == 0)
                    {
                        printf("Tamam\n");
                        if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                        {
                            printf("winner : O");
                        }
                        else
                        {
                            printf("winner : hashtag");
                        }
                        break;
                    }
                    while (checke_amodi_bala_hashtag(arr, x_1, y_1) != 1 && checke_amodi_payin_hashtag(arr, x_1, y_1) != 1 && checke_ofoghi_rast_hashtag(arr, x_1, y_1) != 1 && checke_ofoghi_chap_hashtag(arr, x_1, y_1) != 1 && checke_movarabe_rast_bala_hashtag(arr, x_1, y_1) != 1 && checke_movarabe_chap_bala_hashtag(arr, x_1, y_1) != 1 && checke_movarab_rast_payin_hashtag(arr, x_1, y_1) != 1 && checke_movarab_chap_payin_hashtag(arr, x_1, y_1) != 1)
                    {
                        int w, z;
                        printf("That was invalid\n");
                        scanf("%d %d", &w, &z);
                        x_1 = w - 1;
                        y_1 = z - 1;
                    }
                    if (checke_amodi_bala_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_amodi_bala_hashtag(arr, x_1, y_1);
                    }
                    if (checke_amodi_payin_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_amodi_payin_hashtag(arr, x_1, y_1);
                    }
                    if (checke_ofoghi_rast_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_ofoghi_rast_hashtag(arr, x_1, y_1);
                    }
                    if (checke_ofoghi_chap_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_ofoghi_chap_hashtag(arr, x_1, y_1);
                    }
                    if (checke_movarabe_rast_bala_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_rast_bala_hashtag(arr, x_1, y_1);
                    }
                    if (checke_movarabe_chap_bala_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_chap_bala_hashtag(arr, x_1, y_1);
                    }
                    if (checke_movarab_rast_payin_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_rast_payin_hasthag(arr, x_1, y_1);
                    }
                    if (checke_movarab_chap_payin_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_chap_payin_hashtag(arr, x_1, y_1);
                    }
                    chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), 'O');
                    int x_2, y_2;
                    scanf("%d %d", &x_2, &y_2);
                    x_2--;
                    y_2--;
                    rikhtane_ye_arraye_to_onyeki(arr_2, arr);
                    if (x_2 == -1 && y_2 == -1)
                    {
                        rikhtane_ye_arraye_to_onyeki(arr, arr_4);
                        scanf("%d %d", &x_2, &y_2);
                        x_2--;
                        y_2--;
                    }
                    if (x_2 == -2 && y_2 == -2)
                    {ramz_goshayi();
                        FILE *fp = fopen("data.h", "a");
                        for (int i = 0; i < 8; i++)
                        {
                            for (int j = 0; j < 8; j++)
                            {
                                fprintf(fp, "%c", arr[i][j]);
                            }
                        }
                        fclose(fp);
                        ramz_kardan();
                        break;
                    }

                    if (emkane_garar_dadane_hashtag(arr) == 0 && emkan_garar_dadane_O(arr) == 0)
                    {
                        printf("Tamam\n");
                        if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                        {
                            printf("winner : O");
                        }
                        else
                        {
                            printf("winner : hashtag");
                        }
                        break;
                    }
                    while (checke_amodi_bala_O(arr, x_2, y_2) != 1 && checke_amodi_payin_O(arr, x_2, y_2) != 1 && checke_ofoghi_rast_O(arr, x_2, y_2) != 1 && checke_ofoghi_chap_O(arr, x_2, y_2) != 1 && checke_movarabe_rast_bala_O(arr, x_2, y_2) != 1 && checke_movarabe_chap_bala_O(arr, x_2, y_2) != 1 && checke_movarab_rast_payin_O(arr, x_2, y_2) != 1 && checke_movarab_chap_payin_O(arr, x_2, y_2) != 1)
                    {
                        int w, z;
                        printf("That was invalid\n");
                        scanf("%d %d", &w, &z);
                        x_2 = w - 1;
                        y_2 = z - 1;
                    }

                    if (checke_amodi_bala_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_amodi_bala_O(arr, x_2, y_2);
                    }
                    if (checke_amodi_payin_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_amodi_payin_O(arr, x_2, y_2);
                    }
                    if (checke_ofoghi_rast_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_ofoghi_rast_O(arr, x_2, y_2);
                    }
                    if (checke_ofoghi_chap_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_ofoghi_chap_O(arr, x_2, y_2);
                    }
                    if (checke_movarabe_rast_bala_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_rast_bala_O(arr, x_2, y_2);
                    }
                    if (checke_movarabe_chap_bala_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_chap_bala_O(arr, x_2, y_2);
                    }
                    if (checke_movarab_rast_payin_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_rast_payin_O(arr, x_2, y_2);
                    }
                    if (checke_movarab_chap_payin_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_chap_payin_O(arr, x_2, y_2);
                    }
                    chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), '#');
                    scanf("%d %d", &x_1, &y_1);
                    x_1--;
                    y_1--;
                    rikhtane_ye_arraye_to_onyeki(arr_3, arr);
                    if (x_1 == -1 && y_1 == -1)
                    {
                        rikhtane_ye_arraye_to_onyeki(arr, arr_1);
                        scanf("%d %d", &x_1, &y_1);
                        x_1--;
                        y_1--;
                    }
                    if (x_1 == -2, y_1 == -2)
                    {ramz_goshayi();
                        FILE *fp = fopen("data.h", "a");
                        for (int i = 0; i < 8; i++)
                        {
                            for (int j = 0; j < 8; j++)
                            {
                                fprintf(fp, "%c", arr[i][j]);
                            }
                        }
                        fclose(fp);
                        ramz_kardan();
                        break;
                    }

                    if (emkan_garar_dadane_O(arr) == 0 && emkane_garar_dadane_hashtag(arr) == 0)
                    {
                        printf("Tamam\n");
                        if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                        {
                            printf("winner : O");
                        }
                        else
                        {
                            printf("winner : hashtag");
                        }
                        break;
                    }
                    while (checke_amodi_bala_hashtag(arr, x_1, y_1) != 1 && checke_amodi_payin_hashtag(arr, x_1, y_1) != 1 && checke_ofoghi_rast_hashtag(arr, x_1, y_1) != 1 && checke_ofoghi_chap_hashtag(arr, x_1, y_1) != 1 && checke_movarabe_rast_bala_hashtag(arr, x_1, y_1) != 1 && checke_movarabe_chap_bala_hashtag(arr, x_1, y_1) != 1 && checke_movarab_rast_payin_hashtag(arr, x_1, y_1) != 1 && checke_movarab_chap_payin_hashtag(arr, x_1, y_1) != 1)
                    {
                        int w, z;
                        printf("That was invalid\n");
                        scanf("%d %d", &w, &z);
                        x_1 = w - 1;
                        y_1 = z - 1;
                    }
                    if (checke_amodi_bala_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_amodi_bala_hashtag(arr, x_1, y_1);
                    }
                    if (checke_amodi_payin_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_amodi_payin_hashtag(arr, x_1, y_1);
                    }
                    if (checke_ofoghi_rast_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_ofoghi_rast_hashtag(arr, x_1, y_1);
                    }
                    if (checke_ofoghi_chap_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_ofoghi_chap_hashtag(arr, x_1, y_1);
                    }
                    if (checke_movarabe_rast_bala_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_rast_bala_hashtag(arr, x_1, y_1);
                    }
                    if (checke_movarabe_chap_bala_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_chap_bala_hashtag(arr, x_1, y_1);
                    }
                    if (checke_movarab_rast_payin_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_rast_payin_hasthag(arr, x_1, y_1);
                    }
                    if (checke_movarab_chap_payin_hashtag(arr, x_1, y_1) == 1)
                    {
                        taghyir_movarabe_chap_payin_hashtag(arr, x_1, y_1);
                    }
                    chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), '#');
                    scanf("%d %d", &x_2, &y_2);
                    x_2 = x_2 - 1;
                    y_2 = y_2 - 1;
                    rikhtane_ye_arraye_to_onyeki(arr_4, arr);
                    if (x_2 == -1 && y_2 == -1)
                    {
                        rikhtane_ye_arraye_to_onyeki(arr, arr_2);
                        scanf("%d %d", &x_2, &y_2); /* chon dobare bayad a aval jayi ke mikhad bezare ro bege */
                        x_2--;
                        y_2--;
                    }
                    if (x_2 == -2 && y_2 == -2)
                    {ramz_goshayi();
                        FILE *fp = fopen("data.h", "a");
                        for (int i = 0; i < 8; i++)
                        {
                            for (int j = 0; j < 8; j++)
                            {
                                fprintf(fp, "%c", arr[i][j]);
                            }
                        }
                        fclose(fp);
                        ramz_kardan();
                        break;
                    }

                    if (emkane_garar_dadane_hashtag(arr) == 0 && emkan_garar_dadane_O(arr) == 0)
                    {
                        printf("Tamam\n");
                        if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                        {
                            printf("winner : O");
                        }
                        else
                        {
                            printf("winner : hashtag");
                        }
                        break;
                    }
                    while (checke_amodi_bala_O(arr, x_2, y_2) != 1 && checke_amodi_payin_O(arr, x_2, y_2) != 1 && checke_ofoghi_rast_O(arr, x_2, y_2) != 1 && checke_ofoghi_chap_O(arr, x_2, y_2) != 1 && checke_movarabe_rast_bala_O(arr, x_2, y_2) != 1 && checke_movarabe_chap_bala_O(arr, x_2, y_2) != 1 && checke_movarab_rast_payin_O(arr, x_2, y_2) != 1 && checke_movarab_chap_payin_O(arr, x_2, y_2) != 1)
                    {
                        int w, z;
                        printf("That was invalid\n");
                        scanf("%d %d", &w, &z);
                        x_2 = w - 1;
                        y_2 = z - 1;
                    }

                    if (checke_amodi_bala_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_amodi_bala_O(arr, x_2, y_2);
                    }
                    if (checke_amodi_payin_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_amodi_payin_O(arr, x_2, y_2);
                    }
                    if (checke_ofoghi_rast_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_ofoghi_rast_O(arr, x_2, y_2);
                    }
                    if (checke_ofoghi_chap_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_ofoghi_chap_O(arr, x_2, y_2);
                    }
                    if (checke_movarabe_rast_bala_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_rast_bala_O(arr, x_2, y_2);
                    }
                    if (checke_movarabe_chap_bala_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_chap_bala_O(arr, x_2, y_2);
                    }
                    if (checke_movarab_rast_payin_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_rast_payin_O(arr, x_2, y_2);
                    }
                    if (checke_movarab_chap_payin_O(arr, x_2, y_2) == 1)
                    {
                        taghyir_movarabe_chap_payin_O(arr, x_2, y_2);
                    }
                    chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), '#');
                }
            }
        }
        else if (noe_bazi == 3) /* yani mode timing */
        {
            int time_bazi;
            int tedad_dafe_undo_O = 0;
            int tedad_dafe_undo_hashtag = 0;
            scanf("%d", &time_bazi);
            int timere_O = time_bazi;
            int timere_hashtag = time_bazi;
            chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), 'O');
            while (safheye_por(arr) == 0 && timere_O != 0 && timere_hashtag != 0)
            {
                int time_1, time_2, time_3, time_4, time_5, time_6, time_7, time_8;
                int x_1, y_1;
                time_1 = time(NULL);
                printf("timere O : %d\n", timere_O);
                scanf("%d %d", &x_1, &y_1);
                time_2 = time(NULL);
                timere_O = timere_O - (time_2 - time_1);
                if (timere_O <= 0)
                {
                    printf("O lost\n");
                    break;
                }
                x_1--;
                y_1--;
                rikhtane_ye_arraye_to_onyeki(arr_1, arr);
                if (x_1 == -1 && y_1 == -1)
                {
                    if (tedad_dafe_undo_O == 0)
                    {
                        timere_O = timere_O - 30;
                    }
                    else if (tedad_dafe_undo_O == 1)
                    {
                        timere_O = timere_O - (time_2 - time_1) - (time_8 - time_7);
                    }
                    rikhtane_ye_arraye_to_onyeki(arr, arr_3);
                    scanf("%d %d", &x_1, &y_1); /* inja vorodi migirim chon bade undo bayad ye harekat bezane ta bazi betone be nafesh farg kone */
                    tedad_dafe_undo_O++;
                    x_1--;
                    y_1--;
                }

                if (emkan_garar_dadane_O(arr) == 0 && emkane_garar_dadane_hashtag(arr) == 0)
                {
                    printf("Tamam\n");
                    if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                    {
                        printf("winner : O");
                    }
                    else
                    {
                        printf("winner : hashtag");
                    }
                    break;
                }
                while (checke_amodi_bala_O(arr, x_1, y_1) != 1 && checke_amodi_payin_O(arr, x_1, y_1) != 1 && checke_ofoghi_rast_O(arr, x_1, y_1) != 1 && checke_ofoghi_chap_O(arr, x_1, y_1) != 1 && checke_movarabe_rast_bala_O(arr, x_1, y_1) != 1 && checke_movarabe_chap_bala_O(arr, x_1, y_1) != 1 && checke_movarab_rast_payin_O(arr, x_1, y_1) != 1 && checke_movarab_chap_payin_O(arr, x_1, y_1) != 1)
                {
                    int w, z;
                    printf("That was invalid\n");
                    scanf("%d %d", &w, &z);
                    x_1 = w - 1;
                    y_1 = z - 1;
                }
                if (checke_amodi_bala_O(arr, x_1, y_1) == 1)
                {
                    taghyir_amodi_bala_O(arr, x_1, y_1);
                }
                if (checke_amodi_payin_O(arr, x_1, y_1) == 1)
                {
                    taghyir_amodi_payin_O(arr, x_1, y_1);
                }
                if (checke_ofoghi_rast_O(arr, x_1, y_1) == 1)
                {
                    taghyir_ofoghi_rast_O(arr, x_1, y_1);
                }
                if (checke_ofoghi_chap_O(arr, x_1, y_1) == 1)
                {
                    taghyir_ofoghi_chap_O(arr, x_1, y_1);
                }
                if (checke_movarabe_rast_bala_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_rast_bala_O(arr, x_1, y_1);
                }
                if (checke_movarabe_chap_bala_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_chap_bala_O(arr, x_1, y_1);
                }
                if (checke_movarab_rast_payin_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_rast_payin_O(arr, x_1, y_1);
                }
                if (checke_movarab_chap_payin_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_chap_payin_O(arr, x_1, y_1);
                }
                chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), '#');
                int x_2, y_2;
                printf("timere hashtag : %d\n", timere_hashtag);
                time_3 = time(NULL);
                scanf("%d %d", &x_2, &y_2);
                time_4 = time(NULL);
                timere_hashtag = timere_hashtag - (time_4 - time_3);
                if (timere_hashtag <= 0)
                {
                    printf("hashtag lost\n");
                    break;
                }

                x_2--;
                y_2--;
                rikhtane_ye_arraye_to_onyeki(arr_2, arr);
                if (x_2 == -1 && y_2 == -1)
                {
                    if (tedad_dafe_undo_hashtag == 0)
                    {
                        timere_hashtag = timere_hashtag - 30;
                    }
                    else if (tedad_dafe_undo_hashtag == 1)
                    {
                        timere_hashtag = timere_hashtag - (time_4 - time_3) - (time_2 - time_1);
                    }
                    rikhtane_ye_arraye_to_onyeki(arr, arr_4);
                    scanf("%d %d", &x_2, &y_2);
                    tedad_dafe_undo_hashtag++;
                    x_2--;
                    y_2--;
                }

                if (emkane_garar_dadane_hashtag(arr) == 0 && emkan_garar_dadane_O(arr) == 0)
                {
                    printf("Tamam\n");
                    if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                    {
                        printf("winner : O");
                    }
                    else
                    {
                        printf("winner : hashtag");
                    }
                    break;
                }
                while (checke_amodi_bala_hashtag(arr, x_2, y_2) != 1 && checke_amodi_payin_hashtag(arr, x_2, y_2) != 1 && checke_ofoghi_rast_hashtag(arr, x_2, y_2) != 1 && checke_ofoghi_chap_hashtag(arr, x_2, y_2) != 1 && checke_movarabe_rast_bala_hashtag(arr, x_2, y_2) != 1 && checke_movarabe_chap_bala_hashtag(arr, x_2, y_2) != 1 && checke_movarab_rast_payin_hashtag(arr, x_2, y_2) != 1 && checke_movarab_chap_payin_hashtag(arr, x_2, y_2) != 1)
                {
                    int w, z;
                    printf("That was invalid\n");
                    scanf("%d %d", &w, &z);
                    x_2 = w - 1;
                    y_2 = z - 1;
                }

                if (checke_amodi_bala_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_amodi_bala_hashtag(arr, x_2, y_2);
                }
                if (checke_amodi_payin_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_amodi_payin_hashtag(arr, x_2, y_2);
                }
                if (checke_ofoghi_rast_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_ofoghi_rast_hashtag(arr, x_2, y_2);
                }
                if (checke_ofoghi_chap_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_ofoghi_chap_hashtag(arr, x_2, y_2);
                }
                if (checke_movarabe_rast_bala_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_rast_bala_hashtag(arr, x_2, y_2);
                }
                if (checke_movarabe_chap_bala_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_chap_bala_hashtag(arr, x_2, y_2);
                }
                if (checke_movarab_rast_payin_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_rast_payin_hasthag(arr, x_2, y_2);
                }
                if (checke_movarab_chap_payin_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_chap_payin_hashtag(arr, x_2, y_2);
                }
                chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), 'O');
                printf("timere O : %d\n", timere_O);
                time_5 = time(NULL);
                scanf("%d %d", &x_1, &y_1);
                time_6 = time(NULL);
                timere_O = timere_O - (time_6 - time_5);
                if (timere_O <= 0)
                {
                    printf("O lost\n");
                    break;
                }
                x_1--;
                y_1--;
                rikhtane_ye_arraye_to_onyeki(arr_3, arr);
                if (x_1 == -1 && y_1 == -1)
                {
                    if (tedad_dafe_undo_O == 0)
                    {
                        timere_O = timere_O - 30;
                    }
                    else if (tedad_dafe_undo_O == 1)
                    {
                        timere_O = timere_O - (time_6 - time_5) - (time_4 - time_3);
                    }
                    rikhtane_ye_arraye_to_onyeki(arr, arr_1);
                    scanf("%d %d", &x_1, &y_1);
                    tedad_dafe_undo_O++;
                    x_1--;
                    y_1--;
                }

                if (emkan_garar_dadane_O(arr) == 0 && emkane_garar_dadane_hashtag(arr) == 0)
                {
                    printf("Tamam\n");
                    if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                    {
                        printf("winner : O");
                    }
                    else
                    {
                        printf("winner : hashtag");
                    }
                    break;
                }
                while (checke_amodi_bala_O(arr, x_1, y_1) != 1 && checke_amodi_payin_O(arr, x_1, y_1) != 1 && checke_ofoghi_rast_O(arr, x_1, y_1) != 1 && checke_ofoghi_chap_O(arr, x_1, y_1) != 1 && checke_movarabe_rast_bala_O(arr, x_1, y_1) != 1 && checke_movarabe_chap_bala_O(arr, x_1, y_1) != 1 && checke_movarab_rast_payin_O(arr, x_1, y_1) != 1 && checke_movarab_chap_payin_O(arr, x_1, y_1) != 1)
                {
                    int w, z;
                    printf("That was invalid\n");
                    scanf("%d %d", &w, &z);
                    x_1 = w - 1;
                    y_1 = z - 1;
                }
                if (checke_amodi_bala_O(arr, x_1, y_1) == 1)
                {
                    taghyir_amodi_bala_O(arr, x_1, y_1);
                }
                if (checke_amodi_payin_O(arr, x_1, y_1) == 1)
                {
                    taghyir_amodi_payin_O(arr, x_1, y_1);
                }
                if (checke_ofoghi_rast_O(arr, x_1, y_1) == 1)
                {
                    taghyir_ofoghi_rast_O(arr, x_1, y_1);
                }
                if (checke_ofoghi_chap_O(arr, x_1, y_1) == 1)
                {
                    taghyir_ofoghi_chap_O(arr, x_1, y_1);
                }
                if (checke_movarabe_rast_bala_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_rast_bala_O(arr, x_1, y_1);
                }
                if (checke_movarabe_chap_bala_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_chap_bala_O(arr, x_1, y_1);
                }
                if (checke_movarab_rast_payin_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_rast_payin_O(arr, x_1, y_1);
                }
                if (checke_movarab_chap_payin_O(arr, x_1, y_1) == 1)
                {
                    taghyir_movarabe_chap_payin_O(arr, x_1, y_1);
                }
                chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), '#');
                printf("timere hashtag : %d\n", timere_hashtag);
                time_7 = time(NULL);
                scanf("%d %d", &x_2, &y_2);
                time_8 = time(NULL);
                timere_hashtag = timere_hashtag - (time_8 - time_7);
                if (timere_hashtag <= 0)
                {
                    printf("hashtag lost\n");
                    break;
                }
                x_2 = x_2 - 1;
                y_2 = y_2 - 1;
                rikhtane_ye_arraye_to_onyeki(arr_4, arr);
                if (x_2 == -1 && y_2 == -1)
                {
                    if (tedad_dafe_undo_hashtag == 0)
                    {
                        timere_hashtag = timere_hashtag - 30;
                    }
                    else if (tedad_dafe_undo_hashtag == 1)
                    {
                        timere_hashtag = timere_hashtag - (time_8 - time_7) - (time_6 - time_5);
                    }
                    rikhtane_ye_arraye_to_onyeki(arr, arr_2);
                    scanf("%d %d", &x_2, &y_2); /* chon dobare bayad a aval jayi ke mikhad bezare ro bayad bege */
                    tedad_dafe_undo_hashtag++;
                    x_2--;
                    y_2--;
                }

                if (emkane_garar_dadane_hashtag(arr) == 0 && emkan_garar_dadane_O(arr) == 0)
                {
                    printf("Tamam\n");
                    if (shomarandeye_O(arr) > shomarandeye_hashtag(arr))
                    {
                        printf("winner : O");
                    }
                    else
                    {
                        printf("winner : hashtag");
                    }
                    break;
                }
                while (checke_amodi_bala_hashtag(arr, x_2, y_2) != 1 && checke_amodi_payin_hashtag(arr, x_2, y_2) != 1 && checke_ofoghi_rast_hashtag(arr, x_2, y_2) != 1 && checke_ofoghi_chap_hashtag(arr, x_2, y_2) != 1 && checke_movarabe_rast_bala_hashtag(arr, x_2, y_2) != 1 && checke_movarabe_chap_bala_hashtag(arr, x_2, y_2) != 1 && checke_movarab_rast_payin_hashtag(arr, x_2, y_2) != 1 && checke_movarab_chap_payin_hashtag(arr, x_2, y_2) != 1)
                {
                    int w, z;
                    printf("That was invalid\n");
                    scanf("%d %d", &w, &z);
                    x_2 = w - 1;
                    y_2 = z - 1;
                }

                if (checke_amodi_bala_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_amodi_bala_hashtag(arr, x_2, y_2);
                }
                if (checke_amodi_payin_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_amodi_payin_hashtag(arr, x_2, y_2);
                }
                if (checke_ofoghi_rast_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_ofoghi_rast_hashtag(arr, x_2, y_2);
                }
                if (checke_ofoghi_chap_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_ofoghi_chap_hashtag(arr, x_2, y_2);
                }
                if (checke_movarabe_rast_bala_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_rast_bala_hashtag(arr, x_2, y_2);
                }
                if (checke_movarabe_chap_bala_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_chap_bala_hashtag(arr, x_2, y_2);
                }
                if (checke_movarab_rast_payin_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_rast_payin_hasthag(arr, x_2, y_2);
                }
                if (checke_movarab_chap_payin_hashtag(arr, x_2, y_2) == 1)
                {
                    taghyir_movarabe_chap_payin_hashtag(arr, x_2, y_2);
                }
                chape_jadval(arr, shomarandeye_O(arr), shomarandeye_hashtag(arr), 'O');
            }
        }
    }
}
/* nokte darbareye undo:taraf bayad vorodi hasho bede 0,0 ta rokh bede chon ma goftim age barabare manfi yek bodan va khodemon yeki azash kam kardim */