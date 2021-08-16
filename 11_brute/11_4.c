#include <stdio.h>

int main(void)
{
    int     n, m;
    char    w_chess[8][8];
    char    b_chess[8][8];
    int     re, b_re, w_re;
    int     min = 64, exit = 0;

    scanf("%d %d", &n, &m);

    char    chess[n][m];

    // 색깔 입력받기
    //// 줄 단위(문자열 단위)로 받아야함, 문자 하나하나 받으면 오류남(입력받을 때 자동으로 한줄의 공백이 들어감, 왜지..)
    for (int i = 0; i < n; i++)
        scanf("%s", chess[i]);
    
    // W로 시작하는 체스판 만들기
    //// 끝(j==8)에 널값 안넣어주면 쓰레기값 생김, 근데 w_chess[8][9]가 아니라 w_chess[8][8]로 해도 괜찮다?
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            if (j == 8)
                w_chess[i][j] = '\0';
            else if (i % 2 == 0 && j % 2 == 0)
                w_chess[i][j] = 'W';
            else if (i % 2 == 0 && j % 2 == 1)
                w_chess[i][j] = 'B';
            else if (i % 2 == 1 && j % 2 == 0)
                w_chess[i][j] = 'B';
            else if (i % 2 == 1 && j % 2 == 1)
                w_chess[i][j] = 'W';
        }
    }
    
    // B로 시작하는 체스판 만들기
    // 끝(j==8)에 널값 안넣어주면 쓰레기값 생김, chess[n][m] 쓰레기값 안들어가던데, 입력값은 자동으로 널값이 들어가나?
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            if (j == 8)
                b_chess[i][j] = '\0';
            else if (i % 2 == 0 && j % 2 == 0)
                b_chess[i][j] = 'B';
            else if (i % 2 == 0 && j % 2 == 1)
                b_chess[i][j] = 'W';
            else if (i % 2 == 1 && j % 2 == 0)
                b_chess[i][j] = 'W';
            else if (i % 2 == 1 && j % 2 == 1)
                b_chess[i][j] = 'B';
        }
    }

    // 시작 지점(a, b)을 고정해두고, 아까 만든 체스판들과 얼마나 다른지 비교, 한번의 비교가 끝나면 a, b 증가시켜 다시 검사
    for (int a = 0; a <= n - 8; a++)
    {
        for (int b = 0; b <= m - 8; b++)
        {
            // 비교를 시작하기 전 다시 칠해야하는 횟수를 초기화
            re = 0;
            b_re = 0;
            w_re = 0;

            // W로 시작하는 체스판, B로 시작하는 체스판 모두 비교 후, 더 작은 re값을 저장
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    if (chess[a + i][b + j] != w_chess[i][j])
                        w_re++;
            
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                    if (chess[a + i][b + j] != b_chess[i][j])
                        b_re++;
            
            if (w_re < b_re)
                re = w_re;
            else
                re = b_re;
            
            // re값이 저장해뒀던 min보다 작으면 대체
            if (re < min)
                min = re;

            // min이 0이면 이중 for문 탈출
            if (min == 0)
            {
                exit = 1;
                break ;
            }
        }

        // min이 0이면 이중 for문 탈출
        if (exit == 1)
            break ;
    }

    printf("%d\n", min);
}