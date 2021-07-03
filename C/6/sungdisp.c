void disp(ss *p)
{
    printf("num\tname\tkor\teng\ttotal\tavg\tgrade\trank\n");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%4d\t%s\t%3d\t%3d\t%3d\t%.2f\t%c\t%3d\n", (p + i)->hno, (p + i)->name, (p + i)->kor, (p + i)->eng, (p + i)->tot, (p + i)->avg, (p + i)->grade, (p + i)->rank);
    }
    printf("\n----------------------\n");
}