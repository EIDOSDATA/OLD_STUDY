void rank_sort(ss *s)
{
    char tname[CHAR_SIZE], tgrade;
    float tavg;
    int tmp;
    for (int i = 0; i < ARR_SIZE - 1; i++)
    {
        for (int j = i + 1; j < ARR_SIZE; j++)
        {
            if ((s + i)->rank > (s + j)->rank)
            {
                strcpy(tname, (s + i)->name);
                strcpy((s + i)->name, (s + j)->name);
                strcpy((s + j)->name, tname);

                tavg = (s + i)->avg;
                (s + i)->avg = (s + j)->avg;
                (s + j)->avg = tavg;

                tgrade = (s + i)->grade;
                (s + i)->grade = (s + j)->grade;
                (s + j)->grade = tgrade;

                tmp = (s + i)->kor;
                (s + i)->kor = (s + j)->kor;
                (s + j)->kor = tmp;

                tmp = (s + i)->eng;
                (s + i)->eng = (s + j)->eng;
                (s + j)->eng = tmp;

                tmp = (s + i)->tot;
                (s + i)->tot = (s + j)->tot;
                (s + j)->tot = tmp;

                tmp = (s + i)->rank;
                (s + i)->rank = (s + j)->rank;
                (s + j)->rank = tmp;
            }
        }
    }
}