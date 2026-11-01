
// Player Management System :

#include <stdio.h>
#include <string.h>

typedef struct player
{
    int Jersey_Number;
    char Name[20];
    int Runs;
    int Wickets;
    int Matches_played;

} player;

int addPlayers(player players[], int count)
{
    int num;
    printf("Tell me How much players are added please enter the number \n otherwise enter Zero \n");
    scanf("%d", &num);
    if (num > 0)
    {
        for (int i = 0; i < num; i++)
        {
            printf("The player is: %d\n", count);

            printf("Jersey Number: ");
            scanf("%d", &players[count].Jersey_Number);

            printf("Name: ");
            scanf("%s", players[count].Name);

            printf("Matches: ");
            scanf("%d", &players[count].Matches_played);

            printf("Runs: ");
            scanf("%d", &players[count].Runs);

            printf("Wickets: ");
            scanf("%d", &players[count].Wickets);
            count++;
        }
        return count;
    }
    else if (num == 0)
    {

        printf("The player is: %d\n", count);

        printf("Jersey Number: ");
        scanf("%d", &players[count].Jersey_Number);

        printf("Name: ");
        scanf("%s", players[count].Name);

        printf("Matches: ");
        scanf("%d", &players[count].Matches_played);

        printf("Runs: ");
        scanf("%d", &players[count].Runs);

        printf("Wickets: ");
        scanf("%d", &players[count].Wickets);

        return count++;
    }
    else
    {
        printf("somthing is wrong");
    }
}

void displayPlayers(player players[], int count)
{
    if (count == 0)
    {
        printf("No players available.\n");
        return;
    }
    for (int i = 0; i < count; i++)
    {
        printf("Jersey Number: %d\n", players[i].Jersey_Number);
        printf("Name: %s\n", players[i].Name);
        printf("Matches: %d\n", players[i].Matches_played);
        printf("Runs: %d\n", players[i].Runs);
        printf("Wickets: %d\n", players[i].Wickets);
    }
}

void searchPlayer(player players[], int count)
{
    int jersey;
    printf("please enter the jersey number \n");
    scanf("%d", &jersey);
    int found = 0;

    for (int i = 0; i < count; i++)
    {
        if (players[i].Jersey_Number == jersey)
        {
            found = 1;
            printf("Jersey Number: %d\n", players[i].Jersey_Number);
            printf("Name: %s\n", players[i].Name);
            printf("Matches: %d\n", players[i].Matches_played);
            printf("Runs: %d\n", players[i].Runs);
            printf("Wickets: %d\n", players[i].Wickets);
        }
    }
    if (found == 0)
    {
        printf("Not Found Player\n");
    }
}

void updatePlayer(player players[], int count)
{
    int jersey;
    printf("please enter the jersey number \n");
    scanf("%d", &jersey);
    int found = 0;

    for (int i = 0; i < count; i++)
    {

        if (players[i].Jersey_Number == jersey)
        {
            found = 1;
            printf("Found Player\n");

            printf("Enter new matches played: ");
            scanf("%d", &players[i].Matches_played);

            printf("Enter new runs: ");
            scanf("%d", &players[i].Runs);

            printf("Enter new wickets: ");
            scanf("%d", &players[i].Wickets);
        }
    }
    if (found == 0)
    {
        printf("Not Found Player\n");
    }
}

void sortPlayersByRuns(player players[], int count)
{
    player temp;

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (players[j].Runs < players[j + 1].Runs)
            {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    printf("Players sorted by runs successfully!\n");
}

void showTop3Players(player players[], int count)
{
    if (count == 0)
    {
        printf("No players available!\n");
        return;
    }

    sortPlayersByRuns(players, count);

    int limit;
    if (count < 3)
    {
        limit = count;
    }
    else
    {
        limit = 3;
    }

    printf("\n===== TOP %d PLAYERS BY RUNS =====\n", limit);

    for (int i = 0; i < limit; i++)
    {
        printf("\nRank: %d\n", i + 1);
        printf("Jersey Number: %d\n", players[i].Jersey_Number);
        printf("Name: %s\n", players[i].Name);
        printf("Runs: %d\n", players[i].Runs);
        printf("Wickets: %d\n", players[i].Wickets);
        printf("Matches: %d\n", players[i].Matches_played);
    }
}

void removePlayer(player players[], int *count)
{
    int jersey;
    int found = 0;

    printf("Enter jersey number to remove: ");
    scanf("%d", &jersey);

    for (int i = 0; i < *count; i++)
    {
        if (players[i].Jersey_Number == jersey)
        {
            found = 1;

            for (int j = i; j < *count - 1; j++)
            {
                players[j] = players[j + 1];
            }

            (*count)--;

            printf("Player removed successfully!\n");
            break;
        }
    }

    if (found == 0)
    {
        printf("Player not found!\n");
    }
}

int main()
{

    player players[10];

    int count = 0;

    printf("==============================================\n Hello welcome to my project for player management system\n==============================================\n");

    while (1 > 0)
    {

        int number;

        printf("if you want to add player on this list , simply enter the 1 \n");
        printf("if you want to Display player on this list , simply enter the 2 \n");
        printf("if you want to search player on this list , simply enter the 3 \n");
        printf("if you want to Update player on this list , simply enter the 4 \n");
        printf("if you want to Remove player on this list , simply enter the 5 \n");
        printf("if you want to Sort player on this list , simply enter the 6 \n");
        printf("if you want to Top player ranker on this list , simply enter the 7 \n");
        printf("if you want to stop this activies on this menu , simply enter the 8 \n");

        scanf("%d", &number);

        if (number == 1)
        {
            count = addPlayers(players, count);
        }
        else if (number == 2)
        {
            displayPlayers(players, count);
        }
        else if (number == 3)
        {
            searchPlayer(players, count);
        }
        else if (number == 4)
        {
            updatePlayer(players, count);
        }
        else if (number == 5)
        {
            removePlayer(players, &count);
        }
        else if (number == 6)
        {
            sortPlayersByRuns(players, count);
            displayPlayers(players, count);
        }
        else if (number == 7)
        {
            showTop3Players(players, count);
        }
        else if (number == 8)
        {
            printf("Thank for visting and use this system !!!!...");
            break;
        }
        else
        {
            printf("this is wrong number enter , please enter valid number \n");
        }
    }
    return 0;
}