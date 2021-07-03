void calc(ss *s)
{
    for (int i = 0; i < ARR_SIZE; i++)
    {
        (s + i)->tot = (s + i)->kor + (s + i)->eng;
        (s + i)->avg = (float)(s + i)->tot / 2.0f;

        switch ((int)(s + i)->avg / 10)
        {
        case 10:
        case 9:
            (s + i)->grade = 'A';
            break;
        case 8:
            (s + i)->grade = 'B';
            break;
        case 7:
            (s + i)->grade = 'C';
            break;
        case 6:
            (s + i)->grade = 'D';
            break;
        case 5:
            (s + i)->grade = 'E';
            break;
        default:
            (s + i)->grade = 'F';
            break;
        }
    }
}